# 动机 
一些Mac程序没有提供图形界面的启动器（比如JupyterNotebook），不能直接4个手指抓一下触摸板，然后一搜一下，按下回车就打开。而是每次都要打开iterm2输一次命令，很是蛋疼。。。
所以就用Qt写了个很短的小程序解决一下这个问题。
<img src="https://raw.githubusercontent.com/hongwen000/Qt-Easy-Command-Launcher-for-Mac/master/images/screen_shot.png" width="50%" height="50%" />
# 使用说明
点击Start Command执行指定的指令，Open Folder打开指定的文件夹。

要打开的文件夹和路径是通过在main.cpp里面的cmd和path变量，传给Backen类的构造函数指定的。
# 编译说明
在Sierra 10.12 + Qt 5.10下编译通过。依赖iterm2。
