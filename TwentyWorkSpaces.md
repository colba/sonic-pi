# TwentyWorkspaces 

Modifications to increase number of Workspaces from 10 to 20

## Why ?

I love live coding in Sonic-Pi but when experimenting with new ideas or having lots of elements to my composition I end up running out of Workspaces and have to use multiple
COMMENT / UNCOMMENT blocks in Workspaces to control whats happening. 

I thought it would be nice to have more than the default 10 Workspaces so I've made a few mods to have 20 Workspaces. 


## Changed files :

.\app\gui\qt\mainwindow.h  
.\app\gui\qt\mainwindow.cpp  
.\app\api\src\sonicpi_api.cpp  
.\app\api\src\string_utils.cpp  

## Result

20 Workspace tabs instead of 10

next/previous keyboard shortcuts  S-M-[ / S-M-]  work  

Each Workspace is saved to \~\\.sonic-pi\store\default\ and reloaded at startup

 \~\\.sonic-pi\store\default\workspace_zero.spi   
 \~\\.sonic-pi\store\default\workspace_one.spi   
 \~\\.sonic-pi\store\default\workspace_two.spi   
 \~\\.sonic-pi\store\default\workspace_three.spi   
 \~\\.sonic-pi\store\default\workspace_four.spi  
 \~\\.sonic-pi\store\default\workspace_five.spi  
 \~\\.sonic-pi\store\default\workspace_six.spi   
 \~\\.sonic-pi\store\default\workspace_seven.spi  
 \~\\.sonic-pi\store\default\workspace_eight.spi  
 \~\\.sonic-pi\store\default\workspace_nine.spi  
 \~\\.sonic-pi\store\default\workspace_ten.spi  
 \~\\.sonic-pi\store\default\workspace_eleven.spi  
 \~\\.sonic-pi\store\default\workspace_twelve.spi   
 \~\\.sonic-pi\store\default\workspace_thirteen.spi   
 \~\\.sonic-pi\store\default\workspace_4teen.spi  
 \~\\.sonic-pi\store\default\workspace_fifteen.spi  
 \~\\.sonic-pi\store\default\workspace_6teen.spi  
 \~\\.sonic-pi\store\default\workspace_7teen.spi  
 \~\\.sonic-pi\store\default\workspace_8teen.spi  
 \~\\.sonic-pi\store\default\workspace_9teen.spi  

* Note the names had to be chosen to avoid incorrect number/name matching
* i.e. workspace 14 as fourteen, workspace 4 would match four and fourteen

## Future improvements : 

The way the number of Workspaces and their naming is implemented isn't ideal and could be improved by having the maximum number defined in one place in a single header file.  

The functions/methods to generate the Workspace file name from the Workspace number and from name to number could be done in one place in one source file and be able to uniquely name the file for any sensible number.    

### ToDo:
  
1. change Workspace number/name conversion to work for any number creating a unique name match.  
2. make the number of Workspaces configurable in Preferences  
