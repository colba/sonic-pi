# TwentyWorkspaces 

Modifications to increase number of Workspaces from 10 to 20

## Changed files :

.\app\gui\qt\mainwindow.h
.\app\gui\qt\mainwindow.cpp
.\app\api\src\sonicpi_api.cpp
.\app\api\src\string_utils.cpp

## Result

20 Workspace tabs instead of 10

next/previous keyboard shortcuts "S-M-[/S-M-]" work  

Each Workspace is saved to "~\.sonic-pi\store\default\" and reloaded at startup

"~\.sonic-pi\store\default\workspace_4teen.spi"
"~\.sonic-pi\store\default\workspace_6teen.spi"
"~\.sonic-pi\store\default\workspace_7teen.spi"
"~\.sonic-pi\store\default\workspace_8teen.spi"
"~\.sonic-pi\store\default\workspace_9teen.spi"
"~\.sonic-pi\store\default\workspace_eight.spi"
"~\.sonic-pi\store\default\workspace_eleven.spi"
"~\.sonic-pi\store\default\workspace_fifteen.spi"
"~\.sonic-pi\store\default\workspace_five.spi"
"~\.sonic-pi\store\default\workspace_four.spi"
"~\.sonic-pi\store\default\workspace_nine.spi"
"~\.sonic-pi\store\default\workspace_one.spi"
"~\.sonic-pi\store\default\workspace_seven.spi"
"~\.sonic-pi\store\default\workspace_six.spi"
"~\.sonic-pi\store\default\workspace_ten.spi"
"~\.sonic-pi\store\default\workspace_thirteen.spi"
"~\.sonic-pi\store\default\workspace_three.spi"
"~\.sonic-pi\store\default\workspace_twelve.spi"
"~\.sonic-pi\store\default\workspace_two.spi"
"~\.sonic-pi\store\default\workspace_zero.spi"

* Note the names had to be chosen to avoid incorrect number/name matching
* i.e. workspace 14 as fourteen, workspace 4 would match four and fourteen

## Future improvements : 

1. change Workspace number/name conversion to work for any number creating a unique name match.
2. make the number of Workspaces configurable in Preferences
