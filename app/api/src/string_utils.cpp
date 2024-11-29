#include <random>
#include <cassert>
#include "api/string_utils.h"

namespace SonicPi
{

// String split with multiple delims
void string_split(const std::string& text, const char* delims, std::vector<std::string>& tokens)
{
    tokens.clear();
    std::size_t start = text.find_first_not_of(delims), end = 0;

    while ((end = text.find_first_of(delims, start)) != std::string::npos)
    {
        tokens.push_back(text.substr(start, end - start));
        start = text.find_first_not_of(delims, end);
    }
    if (start != std::string::npos)
        tokens.push_back(text.substr(start));
}

std::vector<std::string> string_split(const std::string& text, const char* delims)
{
    std::vector<std::string> tok;
    string_split(text, delims, tok);
    return tok;
}

std::string string_replace(std::string subject, const std::string& search, const std::string& replace)
{
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos)
    {
        subject.replace(pos, search.length(), replace);
        pos += replace.length();
    }
    return subject;
}

// trim from beginning of string (left)
std::string string_left_trim(std::string s, const char* t)
{
    s.erase(0, s.find_first_not_of(t));
    return s;
}

// trim from end of string (right)
std::string string_right_trim(std::string s, const char* t)
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

// trim from both ends of string (left & right)
std::string string_trim(std::string s, const char* t)
{
    return string_left_trim(string_right_trim(s, t), t);
}

std::string random_string(std::string::size_type length)
{
    static auto& chrs = "0123456789"
                        "abcdefghijklmnopqrstuvwxyz"
                        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    thread_local static std::mt19937 rg{ std::random_device{}() };
    thread_local static std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(chrs) - 2);

    std::string s;

    s.reserve(length);

    while (length--)
        s += chrs[pick(rg)];

    return s;
}

std::string string_number_name(int i)
{
    return std::to_string(i);
    /*
    switch (i)
    {
    case 0:
        return "zero";
    case 1:
        return "one";
    case 2:
        return "two";
    case 3:
        return "three";
    case 4:
        return "four";
    case 5:
        return "five";
    case 6:
        return "six";
    case 7:
        return "seven";
    case 8:
        return "eight";
    case 9:
        return "nine";
    case 10:
        return "ten";
    case 11:
        return "eleven";
    case 12:
        return "twelve";
    case 13:
        return "thirteen";
    case 14:
        return "4teen";
    case 15:
        return "fifteen";
    case 16:
        return "6teen";
    case 17:
        return "7teen";
    case 18:
        return "8teen";
    case 19:
        return "9teen";
    default:
        assert(false);
        return "";
    }
    */
}

uint32_t string_number_from_name(const std::string& name)
{
    /*
    Use the first sequence of digits in the string
    */
    std::string::size_type firstdigitp,lastdigitp;
    firstdigitp = name.find_first_of("0123456789");
    if (firstdigitp != std::string::npos)
    {
        lastdigitp = name.find_first_not_of("0123456789", firstdigitp);
        if (lastdigitp == std::string::npos)
        {
            return std::stoi(name.substr(firstdigitp));
        }
        else
        {
            return std::stoi(name.substr(firstdigitp, lastdigitp - firstdigitp + 1));
        }
    }
    // gets here is are digits in the string so default to 0
    return 0;

    /*
    if (name.find("zero") != std::string::npos)
    {
        return 0;
    }
    else if (name.find("one") != std::string::npos)
    {
        return 1;
    }
    else if (name.find("two") != std::string::npos)
    {
        return 2;
    }
    else if (name.find("three") != std::string::npos)
    {
        return 3;
    }
    else if (name.find("four") != std::string::npos)
    {
        return 4;
    }
    else if (name.find("five") != std::string::npos)
    {
        return 5;
    }
    else if (name.find("six") != std::string::npos)
    {
        return 6;
    }
    else if (name.find("seven") != std::string::npos)
    {
        return 7;
    }
    else if (name.find("eight") != std::string::npos)
    {
        return 8;
    }
    else if (name.find("nine") != std::string::npos)
    {
        return 9;
    }
    if (name.find("ten") != std::string::npos)
    {
        return 10;
    }
    else if (name.find("eleven") != std::string::npos)
    {
        return 11;
    }
    else if (name.find("twelve") != std::string::npos)
    {
        return 12;
    }
    else if (name.find("thirteen") != std::string::npos)
    {
        return 13;
    }
    else if (name.find("4teen") != std::string::npos)
    {
        return 14;
    }
    else if (name.find("fifteen") != std::string::npos)
    {
        return 15;
    }
    else if (name.find("6teen") != std::string::npos)
    {
        return 16;
    }
    else if (name.find("7teen") != std::string::npos)
    {
        return 17;
    }
    else if (name.find("8teen") != std::string::npos)
    {
        return 18;
    }
    else if (name.find("9teen") != std::string::npos)
    {
        return 19;
    }
    return 0;
    */
}

} // namespace SonicPi 
