version

```
gcc --version
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 8.1.0 (clang-802.0.42)
Target: x86_64-apple-darwin16.7.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```

run

```
mbp:clang-memo taiji$ gcc -o hello hello.c
mbp:clang-memo taiji$ ls
hello   hello.c memo.md
mbp:clang-memo taiji$ ./hello
Hello World!
```