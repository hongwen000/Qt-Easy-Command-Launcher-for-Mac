一些Mac程序没有提供图形界面的启动器（比如JupyterNotebook），不能直接4个手指抓一下然后一搜一回车就打开。每次都要打开iterm2输一次命令，很是蛋疼。。。
所以就用Qt随手写了个小程序。
![image](https://raw.githubusercontent.com/hongwen000/Qt-Easy-Command-Launcher-for-Mac/master/images/screen_shot.png)
依赖iterm2。
要启动其他的程序或者路径，在main.cpp里面修改cmd和path就可以重新编译就可以了。
在Sierra 10.12 + Qt 5.10下编译通过。