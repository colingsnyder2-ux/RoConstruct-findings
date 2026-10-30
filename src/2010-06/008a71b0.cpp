// roc 2010-06 008a71b0  unit: CXTPDockingPaneAutoHidePanel  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a71b0
//
// 008a71b0  d9ee                 fldz 
// 008a71b2  dd442414             fld qword ptr [esp + 0x14]
// 008a71b6  d8d1                 fcom st(1)
// 008a71b8  dfe0                 fnstsw ax
// 008a71ba  ddd9                 fstp st(1)
// 008a71bc  d9e8                 fld1 
// 008a71be  f6c405               test ah, 5
// 008a71c1  7a02                 jp 0x8a71c5
// 008a71c3  dcc1                 fadd st(1), st(0)
// 008a71c5  d8d1                 fcom st(1)
// 008a71c7  dfe0                 fnstsw ax
// 008a71c9  f6c405               test ah, 5
// 008a71cc  7a02                 jp 0x8a71d0
// 008a71ce  dce9                 fsub st(1), st(0)
// 008a71d0  d9c1                 fld st(1)
// 008a71d2  dd05a0f8a600         fld qword ptr [0xa6f8a0]
// 008a71d8  dcc9                 fmul st(1), st(0)
// 008a71da  d9c9                 fxch st(1)
// 008a71dc  d8da                 fcomp st(2)
// 008a71de  dfe0                 fnstsw ax
// 008a71e0  f6c405               test ah, 5
// 008a71e3  7a17                 jp 0x8a71fc
// 008a71e5  ddd9                 fstp st(1)
// 008a71e7  dd44240c             fld qword ptr [esp + 0xc]
// 008a71eb  dd442404             fld qword ptr [esp + 4]
// 008a71ef  dce9                 fsub st(1), st(0)
// 008a71f1  d9c9                 fxch st(1)
// 008a71f3  decb                 fmulp st(3)
// 008a71f5  d9ca                 fxch st(2)
// 008a71f7  dec9                 fmulp st(1)
// 008a71f9  dec1                 faddp st(1)
// 008a71fb  c3                   ret 
// 008a71fc  d9c2                 fld st(2)
// 008a71fe  dd05907aa100         fld qword ptr [0xa17a90]
// 008a7204  dcc9                 fmul st(1), st(0)
// 008a7206  d9c9                 fxch st(1)
// 008a7208  d8db                 fcomp st(3)
// 008a720a  dfe0                 fnstsw ax
// 008a720c  ddda                 fstp st(2)
// 008a720e  f6c405               test ah, 5
// 008a7211  7a0b                 jp 0x8a721e
// 008a7213  ddda                 fstp st(2)
// 008a7215  ddd9                 fstp st(1)
// 008a7217  ddd8                 fstp st(0)
// 008a7219  dd44240c             fld qword ptr [esp + 0xc]
// 008a721d  c3                   ret 
// 008a721e  d9c2                 fld st(2)
// 008a7220  dc0d700ca200         fmul qword ptr [0xa20c70]
// 008a7226  d8da                 fcomp st(2)
// 008a7228  dfe0                 fnstsw ax
// 008a722a  ddd9                 fstp st(1)
// 008a722c  f6c405               test ah, 5
// 008a722f  7a1d                 jp 0x8a724e
// 008a7231  dd44240c             fld qword ptr [esp + 0xc]
// 008a7235  dd442404             fld qword ptr [esp + 4]
// 008a7239  dce9                 fsub st(1), st(0)
// 008a723b  dd05003ca700         fld qword ptr [0xa73c00]
// 008a7241  dee4                 fsubrp st(4)
// 008a7243  d9c9                 fxch st(1)
// 008a7245  decb                 fmulp st(3)
// 008a7247  d9ca                 fxch st(2)
// 008a7249  dec9                 fmulp st(1)
// 008a724b  dec1                 faddp st(1)
// 008a724d  c3                   ret 
// 008a724e  ddd9                 fstp st(1)
// 008a7250  ddd8                 fstp st(0)
// 008a7252  dd442404             fld qword ptr [esp + 4]
// 008a7256  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?HuetoRGB@CXTColorRef@@KANNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
