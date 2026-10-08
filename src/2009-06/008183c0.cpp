// roc 2009-06 008183c0  unit: CXTPDockingPaneAutoHidePanel  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008183c0
//
// 008183c0  d9ee                 fldz 
// 008183c2  dd442414             fld qword ptr [esp + 0x14]
// 008183c6  d8d1                 fcom st(1)
// 008183c8  dfe0                 fnstsw ax
// 008183ca  ddd9                 fstp st(1)
// 008183cc  d9e8                 fld1 
// 008183ce  f6c405               test ah, 5
// 008183d1  7a02                 jp 0x8183d5
// 008183d3  dcc1                 fadd st(1), st(0)
// 008183d5  d8d1                 fcom st(1)
// 008183d7  dfe0                 fnstsw ax
// 008183d9  f6c405               test ah, 5
// 008183dc  7a02                 jp 0x8183e0
// 008183de  dce9                 fsub st(1), st(0)
// 008183e0  d9c1                 fld st(1)
// 008183e2  dd0538b19000         fld qword ptr [0x90b138]
// 008183e8  dcc9                 fmul st(1), st(0)
// 008183ea  d9c9                 fxch st(1)
// 008183ec  d8da                 fcomp st(2)
// 008183ee  dfe0                 fnstsw ax
// 008183f0  f6c405               test ah, 5
// 008183f3  7a17                 jp 0x81840c
// 008183f5  ddd9                 fstp st(1)
// 008183f7  dd44240c             fld qword ptr [esp + 0xc]
// 008183fb  dd442404             fld qword ptr [esp + 4]
// 008183ff  dce9                 fsub st(1), st(0)
// 00818401  d9c9                 fxch st(1)
// 00818403  decb                 fmulp st(3)
// 00818405  d9ca                 fxch st(2)
// 00818407  dec9                 fmulp st(1)
// 00818409  dec1                 faddp st(1)
// 0081840b  c3                   ret 
// 0081840c  d9c2                 fld st(2)
// 0081840e  dd0528e88b00         fld qword ptr [0x8be828]
// 00818414  dcc9                 fmul st(1), st(0)
// 00818416  d9c9                 fxch st(1)
// 00818418  d8db                 fcomp st(3)
// 0081841a  dfe0                 fnstsw ax
// 0081841c  ddda                 fstp st(2)
// 0081841e  f6c405               test ah, 5
// 00818421  7a0b                 jp 0x81842e
// 00818423  ddda                 fstp st(2)
// 00818425  ddd9                 fstp st(1)
// 00818427  ddd8                 fstp st(0)
// 00818429  dd44240c             fld qword ptr [esp + 0xc]
// 0081842d  c3                   ret 
// 0081842e  d9c2                 fld st(2)
// 00818430  dc0d70c08c00         fmul qword ptr [0x8cc070]
// 00818436  d8da                 fcomp st(2)
// 00818438  dfe0                 fnstsw ax
// 0081843a  ddd9                 fstp st(1)
// 0081843c  f6c405               test ah, 5
// 0081843f  7a1d                 jp 0x81845e
// 00818441  dd44240c             fld qword ptr [esp + 0xc]
// 00818445  dd442404             fld qword ptr [esp + 4]
// 00818449  dce9                 fsub st(1), st(0)
// 0081844b  dd0598f49000         fld qword ptr [0x90f498]
// 00818451  dee4                 fsubrp st(4)
// 00818453  d9c9                 fxch st(1)
// 00818455  decb                 fmulp st(3)
// 00818457  d9ca                 fxch st(2)
// 00818459  dec9                 fmulp st(1)
// 0081845b  dec1                 faddp st(1)
// 0081845d  c3                   ret 
// 0081845e  ddd9                 fstp st(1)
// 00818460  ddd8                 fstp st(0)
// 00818462  dd442404             fld qword ptr [esp + 4]
// 00818466  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?HuetoRGB@CXTColorRef@@KANNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
