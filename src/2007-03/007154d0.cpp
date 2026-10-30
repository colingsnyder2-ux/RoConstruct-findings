// roc 2007-03 007154d0  unit: seg_00710000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007154d0
//
// 007154d0  d9ee                 fldz 
// 007154d2  dd442414             fld qword ptr [esp + 0x14]
// 007154d6  d8d1                 fcom st(1)
// 007154d8  dfe0                 fnstsw ax
// 007154da  ddd9                 fstp st(1)
// 007154dc  f6c405               test ah, 5
// 007154df  d9e8                 fld1 
// 007154e1  7a02                 jp 0x7154e5
// 007154e3  dcc1                 fadd st(1), st(0)
// 007154e5  d8d1                 fcom st(1)
// 007154e7  dfe0                 fnstsw ax
// 007154e9  f6c405               test ah, 5
// 007154ec  7a02                 jp 0x7154f0
// 007154ee  dce9                 fsub st(1), st(0)
// 007154f0  d9c1                 fld st(1)
// 007154f2  dd0580e97900         fld qword ptr [0x79e980]
// 007154f8  dcc9                 fmul st(1), st(0)
// 007154fa  d9c9                 fxch st(1)
// 007154fc  d8da                 fcomp st(2)
// 007154fe  dfe0                 fnstsw ax
// 00715500  f6c405               test ah, 5
// 00715503  7a17                 jp 0x71551c
// 00715505  ddd9                 fstp st(1)
// 00715507  dd44240c             fld qword ptr [esp + 0xc]
// 0071550b  dd442404             fld qword ptr [esp + 4]
// 0071550f  dce9                 fsub st(1), st(0)
// 00715511  d9c9                 fxch st(1)
// 00715513  decb                 fmulp st(3)
// 00715515  d9ca                 fxch st(2)
// 00715517  dec9                 fmulp st(1)
// 00715519  dec1                 faddp st(1)
// 0071551b  c3                   ret 
// 0071551c  d9c2                 fld st(2)
// 0071551e  dd0518507900         fld qword ptr [0x795018]
// 00715524  dcc9                 fmul st(1), st(0)
// 00715526  d9c9                 fxch st(1)
// 00715528  d8db                 fcomp st(3)
// 0071552a  dfe0                 fnstsw ax
// 0071552c  ddda                 fstp st(2)
// 0071552e  f6c405               test ah, 5
// 00715531  7a0b                 jp 0x71553e
// 00715533  ddda                 fstp st(2)
// 00715535  ddd9                 fstp st(1)
// 00715537  ddd8                 fstp st(0)
// 00715539  dd44240c             fld qword ptr [esp + 0xc]
// 0071553d  c3                   ret 
// 0071553e  d9c2                 fld st(2)
// 00715540  dc0dc8ee7900         fmul qword ptr [0x79eec8]
// 00715546  d8da                 fcomp st(2)
// 00715548  dfe0                 fnstsw ax
// 0071554a  ddd9                 fstp st(1)
// 0071554c  f6c405               test ah, 5
// 0071554f  7a1d                 jp 0x71556e
// 00715551  dd44240c             fld qword ptr [esp + 0xc]
// 00715555  dd442404             fld qword ptr [esp + 4]
// 00715559  dce9                 fsub st(1), st(0)
// 0071555b  dd05f80d7e00         fld qword ptr [0x7e0df8]
// 00715561  dee4                 fsubrp st(4)
// 00715563  d9c9                 fxch st(1)
// 00715565  decb                 fmulp st(3)
// 00715567  d9ca                 fxch st(2)
// 00715569  dec9                 fmulp st(1)
// 0071556b  dec1                 faddp st(1)
// 0071556d  c3                   ret 
// 0071556e  ddd9                 fstp st(1)
// 00715570  ddd8                 fstp st(0)
// 00715572  dd442404             fld qword ptr [esp + 4]
// 00715576  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorRef.cpp (function ?HuetoRGB@CXTColorRef@@KANNNN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorRef.cpp
