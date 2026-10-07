// roc 2007-08 0071fd10  unit: CXTPDockingPaneAutoHidePanel  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fd10
//
// 0071fd10  d9ee                 fldz 
// 0071fd12  dd442414             fld qword ptr [esp + 0x14]
// 0071fd16  d8d1                 fcom st(1)
// 0071fd18  dfe0                 fnstsw ax
// 0071fd1a  ddd9                 fstp st(1)
// 0071fd1c  f6c405               test ah, 5
// 0071fd1f  d9e8                 fld1 
// 0071fd21  7a02                 jp 0x71fd25
// 0071fd23  dcc1                 fadd st(1), st(0)
// 0071fd25  d8d1                 fcom st(1)
// 0071fd27  dfe0                 fnstsw ax
// 0071fd29  f6c405               test ah, 5
// 0071fd2c  7a02                 jp 0x71fd30
// 0071fd2e  dce9                 fsub st(1), st(0)
// 0071fd30  d9c1                 fld st(1)
// 0071fd32  dd0538f37900         fld qword ptr [0x79f338]
// 0071fd38  dcc9                 fmul st(1), st(0)
// 0071fd3a  d9c9                 fxch st(1)
// 0071fd3c  d8da                 fcomp st(2)
// 0071fd3e  dfe0                 fnstsw ax
// 0071fd40  f6c405               test ah, 5
// 0071fd43  7a17                 jp 0x71fd5c
// 0071fd45  ddd9                 fstp st(1)
// 0071fd47  dd44240c             fld qword ptr [esp + 0xc]
// 0071fd4b  dd442404             fld qword ptr [esp + 4]
// 0071fd4f  dce9                 fsub st(1), st(0)
// 0071fd51  d9c9                 fxch st(1)
// 0071fd53  decb                 fmulp st(3)
// 0071fd55  d9ca                 fxch st(2)
// 0071fd57  dec9                 fmulp st(1)
// 0071fd59  dec1                 faddp st(1)
// 0071fd5b  c3                   ret 
// 0071fd5c  d9c2                 fld st(2)
// 0071fd5e  dd05085c7900         fld qword ptr [0x795c08]
// 0071fd64  dcc9                 fmul st(1), st(0)
// 0071fd66  d9c9                 fxch st(1)
// 0071fd68  d8db                 fcomp st(3)
// 0071fd6a  dfe0                 fnstsw ax
// 0071fd6c  ddda                 fstp st(2)
// 0071fd6e  f6c405               test ah, 5
// 0071fd71  7a0b                 jp 0x71fd7e
// 0071fd73  ddda                 fstp st(2)
// 0071fd75  ddd9                 fstp st(1)
// 0071fd77  ddd8                 fstp st(0)
// 0071fd79  dd44240c             fld qword ptr [esp + 0xc]
// 0071fd7d  c3                   ret 
// 0071fd7e  d9c2                 fld st(2)
// 0071fd80  dc0df82a7900         fmul qword ptr [0x792af8]
// 0071fd86  d8da                 fcomp st(2)
// 0071fd88  dfe0                 fnstsw ax
// 0071fd8a  ddd9                 fstp st(1)
// 0071fd8c  f6c405               test ah, 5
// 0071fd8f  7a1d                 jp 0x71fdae
// 0071fd91  dd44240c             fld qword ptr [esp + 0xc]
// 0071fd95  dd442404             fld qword ptr [esp + 4]
// 0071fd99  dce9                 fsub st(1), st(0)
// 0071fd9b  dd0578217e00         fld qword ptr [0x7e2178]
// 0071fda1  dee4                 fsubrp st(4)
// 0071fda3  d9c9                 fxch st(1)
// 0071fda5  decb                 fmulp st(3)
// 0071fda7  d9ca                 fxch st(2)
// 0071fda9  dec9                 fmulp st(1)
// 0071fdab  dec1                 faddp st(1)
// 0071fdad  c3                   ret 
// 0071fdae  ddd9                 fstp st(1)
// 0071fdb0  ddd8                 fstp st(0)
// 0071fdb2  dd442404             fld qword ptr [esp + 4]
// 0071fdb6  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorRef.cpp (function ?HuetoRGB@CXTColorRef@@KANNNN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorRef.cpp
