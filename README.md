# san_xxd
Make a hexdump as we get in xxd using my own C program

##### xxd output vs san_xxd output

![image](https://user-images.githubusercontent.com/36575796/180617901-4d515a0b-3cf3-4ecf-b365-5fb8693e13c9.png)


## Description

In earlier days when I started studying programming this challange was given to me by one of my mentors to advance my coding skills. Challange was to write a C program which gives you the exact output as **xxd** command utility does with a input file. At that time I didn't even know what xxd command utility does.  

xxd command does two things. It creates a hex dump of a given file or standard input and It can also convert a hex dump back to its original binary form.
Read more about xxd manual from **[here]([https://github.com/zathizh](https://linux.die.net/man/1/xxd))

## Getting Started

### Tested environment

* Operating System: Red Hat Enterprise Linux Server 7.8 (Maipo)
* CPE OS Name: cpe:/o:redhat:enterprise_linux:7.8:GA:server
* Kernel: Linux 3.10.0-1127.19.1.el7.x86_64
* Architecture: x86-64 
* gcc version: 4.8.5

![image](https://user-images.githubusercontent.com/36575796/180618641-ae3e2c92-8684-440c-81c4-c978ff9cf9d1.png)

### Installing

* Make a directory named **xxd** as below in a server which is already installed GNU Compiler Collection (GCC).
```
$ mkdir -p /root/xxd
```
* Download the source files to above location.

![image](https://user-images.githubusercontent.com/36575796/180618712-f83e5d11-e3c7-4492-a253-3e88310d8d36.png)

* File types should be as follows.

![image](https://user-images.githubusercontent.com/36575796/180618745-13e7ec79-0f7f-428b-aa94-cc1a3c9fa793.png)

![image](https://user-images.githubusercontent.com/36575796/180618747-7efb9220-d558-4290-aca6-626631d00451.png)


* **index.txt** is a general file which contains ASCII characters. You can use any ASCII content as your input file as your wish.  
```
$cat index.txt
A mother is the female parent of a child. Mothers are women who inhabit or perform the role of bearing some relation to their children, who may or may not be their biological offspring. Thus, dependent on the context, women can be considered mothers by virtue of having given birth, by raising their child(ren), supplying their ovum for fertilisation, or some combination thereof. Such conditions provide a way of delineating the concept of motherhood, or the state of being a mother.
```

### Executing program

```
$ gcc san_xxd.c
```
![image](https://user-images.githubusercontent.com/36575796/180618919-a608a418-3807-495e-bacf-87bd5880e5b9.png)

![image](https://user-images.githubusercontent.com/36575796/180618926-06bd8660-1687-49e7-8bb9-6d50c44c9a98.png)

```
./a.out
```
![image](https://user-images.githubusercontent.com/36575796/180618947-686ea6be-1a6d-4b16-9d67-fbd1f8cf116a.png)


![image](https://user-images.githubusercontent.com/36575796/180618949-b8e2bd4a-ea5b-4a6d-864f-09f6a2864c10.png)


## Authors

* Sangeeth Sankalpa  
[@sangeeth-sankalpa](https://linkedin.com/in/sangeeth-sankalpa)

## Future work

Further, this code should be modified to gives the exact output as xxd does by reading the input text file contents to the last byte. Finally, as xxd does this should be modified to convert a hex dump back to its original binary form as well.

## Acknowledgments

Inspiration, mentor:
* [Sathish Bowatta](https://github.com/zathizh)
