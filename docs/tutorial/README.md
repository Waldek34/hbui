# **Welcome to project HBUI**

## Hello!
If we are going to spend a few hours together, I propose - call me Rafał. I will add more only that this project was created by my good friends from the group Harbour - Teo, Viktor. I am impressed clarity, simplicity and logical programming in Harbour so I propose you to spend a few moments in the land of programming Harbour with me.

## Preliminary assumptions
This tutorial is designed for beginners who are getting started the adventure with Harbour, and I think that If I make mistake, you will correct me.

## Instaling in Linux
I would like to present Linux distribution called "Elementary". It is user-friendly, simple and at the same time nicely presents the operating system. This is of course free like every non-commercial Linux distribution. Don't worry if you never use the system under the sign of the penguin Tux because this is also a good suggestion to start.

## My friends from the group
I invite everyone to build this guide.

## We start
Open a terminal window and write.
```
$ sudo apt-get install git
```
Installation Harbour.
```
$ git clone git://github.com/harbour/core.git harbour
$ cd harbour
$ make
```
The compilation may take a few minutes.
```
$ cd
```
Elementary doesn't have `cmake` so you need to install it.
```
$ sudo apt-get install cmake
```
Installation libui.
```
$ git cloce git://github.com/andlabs/libui
$ cd libui
$ mkdir build
$ cd build
$ cmake ..
$ make
```

```
$ cd
```
Installation HBUI.
```
$ git clone git://github.com/rjopek/hbui
```
Before compilation, we must do two things: open root account which is administrator of the system and then run text editor
```
# vi /etc/ld.so.conf
```
and write in: **/home/username/libui/build/out**

username = is your user name for example, on my Linux it is so: **/home/rafa/libui/build/out**

then the second thing run text editor
```
$ vi .profile
```
and write in: **export HB_WITH_LIBUI="$HOME/libui"**

Now we can proceed to compile hbui.
```
$ cd hbui
$ hbmk2 hbui.hbp
```

Do not worry, will be an easier way compilation.
