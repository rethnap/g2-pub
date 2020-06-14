## [environment]
* OS: ubuntu20.04
* llvm: 9bc989a48d639d04283d6144505e33e8e354c783

## [legends]
* **#** : denote shell prompt
## [test container]
* obtain:\
    **#** sudo docker pull rethnap/g2:latest\
* quick test:\
    **#** sudo docker run --privileged -it --name="g2_test" rethnap/g2:latest /bin/bash

    g2:latest /bin/bash\
    **#** gobin\
    **#** par.py [--debug]<br/>

## [container packages]
* kernel: ubuntu:19.10
* vim
* libedit-dev
* python3.8{dev}
* python3-pip
* g++
~~gdb~~

## [container layout]
* /home/g2 --> working directory
* /home/g2/bin --> idlc binaries
* /home/g2/tool --> helper scripts
* /home/g2/sample/idl --> test codes
* /usr/local/  --> llvm, clang, z3

## [synopsis]

* simple compile
    * #gobin
    * #./idlc -o a.out -g --show-ir -c ../sample/idl/test_array.idl

* compare test case result\
    * #gobin\
    * #compare.py memory

