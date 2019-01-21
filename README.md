# CPP-2-C
This repository for the developers who want to convert or want to impliment simple and complex C++ code to C compatable code which can be used for the low end processors or controllers.

## Getting Started
This project is a simple make file based project and we have tried to make it compable for all the operating systems. Our main target to help developers to inpmiment C++ feature in C so we can use it in low-end controllers or processors.

## Implemented Template Examples
- [C++ Template Equivalent macro](#Example1)
- [C++ Template Equivalent macro](#Example2)
 

## Example1
C++ template example code
```
template <typename T>
T checkMax (T a, T b) {
  return (a>b?a:b);
}

// Use Cases
checkMax<int>(3, 7); // it will return 7
checkMax<double>(3.0, 7.0); // it will return 7
checkMax<char>('g', 'e'); // it will return g
```
C equivalent example code
```
#define checkMax(a,b) ((a) > (b) ? (a) : (b))
//use case exaple
int i=3, j=7;
float l=3.5, m=7.6;
long o=300000, p=700000;

printf("Check Max for int: %d\n",checkMax(i,j));
printf("Check Max for float: %f\n",checkMax(l,m));
printf("Check Max for long: %ld\n",checkMax(o,p));
```

gcc recommended if you know the data types implement specific way and it can be used for muti-statement 
```
#define checkMaxINT(a,b)  ({int _a = (a), _b = (b); _a > _b ? _a : _b; })
//use case example
printf("Check with MaxINT: %d\n",checkMaxINT(i,j)); // it will return 7
```


## Example2
First, we need to declare a couple of macros. Those macros need to be included in every file that makes use of templates. To make things easier we will declare them in a .h file called "checkMaxGeneric.h": 

```
#include "checkMaxGeneric.h"

// Outside main
DECLARE_CHECK_MAX(int)
IMPLEMENT_CHECK_MAX(int)

//inside main 

int b = 4;
int arr[100];
for(int i=0;i<100;i++){
    arr[i] = i+1;
}
int *ptr = arr;

int value = callCheckMax(int,ptr,b);

```



### Prerequisites

This project uses gcc compiler. Please check the gcc installed or not using below command.

```
$ gcc --version
```
If it is already installed it will tell the version
```
gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609
```
In case gcc not installed please install using below command for ubuntu user other use just google it.
```
sudo apt install gcc
```

### Clone and Make

For cloning the repo use below command if you are git else you can downdload the zip file directly.

```
$ git clone https://github.com/mdnurul/CPP-2-C.git
```
For making the project change you corrent directry path the CPP-2-C directory and just use make in command line
For realease
```
$ make
```
For debug
```
$ make debug
```
The build release will be placed in bin/release/ directory as template
The build release will be placed in bin/debug/ directory as template

## Running the tests
For the testing use the command below in release directory

```
./template
```


## Authors

* **Md Nurul Hassan** - *Initial work* - [mdnurul](https://github.com/mdnurul)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Valeo India Private Limited for asking me to document and write sample code. 

