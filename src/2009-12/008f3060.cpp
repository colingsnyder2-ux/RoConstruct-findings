// roc 2009-12 008f3060  unit: CXTPDockingPaneAutoHidePanel  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3060
//
// 008f3060  d9ee                 fldz 
// 008f3062  dd442414             fld qword ptr [esp + 0x14]
// 008f3066  d8d1                 fcom st(1)
// 008f3068  dfe0                 fnstsw ax
// 008f306a  ddd9                 fstp st(1)
// 008f306c  d9e8                 fld1 
// 008f306e  f6c405               test ah, 5
// 008f3071  7a02                 jp 0x8f3075
// 008f3073  dcc1                 fadd st(1), st(0)
// 008f3075  d8d1                 fcom st(1)
// 008f3077  dfe0                 fnstsw ax
// 008f3079  f6c405               test ah, 5
// 008f307c  7a02                 jp 0x8f3080
// 008f307e  dce9                 fsub st(1), st(0)
// 008f3080  d9c1                 fld st(1)
// 008f3082  dd05a8b5a000         fld qword ptr [0xa0b5a8]
// 008f3088  dcc9                 fmul st(1), st(0)
// 008f308a  d9c9                 fxch st(1)
// 008f308c  d8da                 fcomp st(2)
// 008f308e  dfe0                 fnstsw ax
// 008f3090  f6c405               test ah, 5
// 008f3093  7a17                 jp 0x8f30ac
// 008f3095  ddd9                 fstp st(1)
// 008f3097  dd44240c             fld qword ptr [esp + 0xc]
// 008f309b  dd442404             fld qword ptr [esp + 4]
// 008f309f  dce9                 fsub st(1), st(0)
// 008f30a1  d9c9                 fxch st(1)
// 008f30a3  decb                 fmulp st(3)
// 008f30a5  d9ca                 fxch st(2)
// 008f30a7  dec9                 fmulp st(1)
// 008f30a9  dec1                 faddp st(1)
// 008f30ab  c3                   ret 
// 008f30ac  d9c2                 fld st(2)
// 008f30ae  dd05b0399b00         fld qword ptr [0x9b39b0]
// 008f30b4  dcc9                 fmul st(1), st(0)
// 008f30b6  d9c9                 fxch st(1)
// 008f30b8  d8db                 fcomp st(3)
// 008f30ba  dfe0                 fnstsw ax
// 008f30bc  ddda                 fstp st(2)
// 008f30be  f6c405               test ah, 5
// 008f30c1  7a0b                 jp 0x8f30ce
// 008f30c3  ddda                 fstp st(2)
// 008f30c5  ddd9                 fstp st(1)
// 008f30c7  ddd8                 fstp st(0)
// 008f30c9  dd44240c             fld qword ptr [esp + 0xc]
// 008f30cd  c3                   ret 
// 008f30ce  d9c2                 fld st(2)
// 008f30d0  dc0d182f9c00         fmul qword ptr [0x9c2f18]
// 008f30d6  d8da                 fcomp st(2)
// 008f30d8  dfe0                 fnstsw ax
// 008f30da  ddd9                 fstp st(1)
// 008f30dc  f6c405               test ah, 5
// 008f30df  7a1d                 jp 0x8f30fe
// 008f30e1  dd44240c             fld qword ptr [esp + 0xc]
// 008f30e5  dd442404             fld qword ptr [esp + 4]
// 008f30e9  dce9                 fsub st(1), st(0)
// 008f30eb  dd0508f9a000         fld qword ptr [0xa0f908]
// 008f30f1  dee4                 fsubrp st(4)
// 008f30f3  d9c9                 fxch st(1)
// 008f30f5  decb                 fmulp st(3)
// 008f30f7  d9ca                 fxch st(2)
// 008f30f9  dec9                 fmulp st(1)
// 008f30fb  dec1                 faddp st(1)
// 008f30fd  c3                   ret 
// 008f30fe  ddd9                 fstp st(1)
// 008f3100  ddd8                 fstp st(0)
// 008f3102  dd442404             fld qword ptr [esp + 4]
// 008f3106  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?HuetoRGB@CXTColorRef@@KANNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
