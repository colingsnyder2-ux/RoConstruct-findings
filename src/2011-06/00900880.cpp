// roc 2011-06 00900880  unit: CXTPDockingPaneAutoHidePanel  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900880
//
// 00900880  d9ee                 fldz 
// 00900882  dd442414             fld qword ptr [esp + 0x14]
// 00900886  d8d1                 fcom st(1)
// 00900888  dfe0                 fnstsw ax
// 0090088a  ddd9                 fstp st(1)
// 0090088c  d9e8                 fld1 
// 0090088e  f6c405               test ah, 5
// 00900891  7a02                 jp 0x900895
// 00900893  dcc1                 fadd st(1), st(0)
// 00900895  d8d1                 fcom st(1)
// 00900897  dfe0                 fnstsw ax
// 00900899  f6c405               test ah, 5
// 0090089c  7a02                 jp 0x9008a0
// 0090089e  dce9                 fsub st(1), st(0)
// 009008a0  d9c1                 fld st(1)
// 009008a2  dd05c893ad00         fld qword ptr [0xad93c8]
// 009008a8  dcc9                 fmul st(1), st(0)
// 009008aa  d9c9                 fxch st(1)
// 009008ac  d8da                 fcomp st(2)
// 009008ae  dfe0                 fnstsw ax
// 009008b0  f6c405               test ah, 5
// 009008b3  7a17                 jp 0x9008cc
// 009008b5  ddd9                 fstp st(1)
// 009008b7  dd44240c             fld qword ptr [esp + 0xc]
// 009008bb  dd442404             fld qword ptr [esp + 4]
// 009008bf  dce9                 fsub st(1), st(0)
// 009008c1  d9c9                 fxch st(1)
// 009008c3  decb                 fmulp st(3)
// 009008c5  d9ca                 fxch st(2)
// 009008c7  dec9                 fmulp st(1)
// 009008c9  dec1                 faddp st(1)
// 009008cb  c3                   ret 
// 009008cc  d9c2                 fld st(2)
// 009008ce  dd052810a700         fld qword ptr [0xa71028]
// 009008d4  dcc9                 fmul st(1), st(0)
// 009008d6  d9c9                 fxch st(1)
// 009008d8  d8db                 fcomp st(3)
// 009008da  dfe0                 fnstsw ax
// 009008dc  ddda                 fstp st(2)
// 009008de  f6c405               test ah, 5
// 009008e1  7a0b                 jp 0x9008ee
// 009008e3  ddda                 fstp st(2)
// 009008e5  ddd9                 fstp st(1)
// 009008e7  ddd8                 fstp st(0)
// 009008e9  dd44240c             fld qword ptr [esp + 0xc]
// 009008ed  c3                   ret 
// 009008ee  d9c2                 fld st(2)
// 009008f0  dc0d5806a800         fmul qword ptr [0xa80658]
// 009008f6  d8da                 fcomp st(2)
// 009008f8  dfe0                 fnstsw ax
// 009008fa  ddd9                 fstp st(1)
// 009008fc  f6c405               test ah, 5
// 009008ff  7a1d                 jp 0x90091e
// 00900901  dd44240c             fld qword ptr [esp + 0xc]
// 00900905  dd442404             fld qword ptr [esp + 4]
// 00900909  dce9                 fsub st(1), st(0)
// 0090090b  dd0558e0ad00         fld qword ptr [0xade058]
// 00900911  dee4                 fsubrp st(4)
// 00900913  d9c9                 fxch st(1)
// 00900915  decb                 fmulp st(3)
// 00900917  d9ca                 fxch st(2)
// 00900919  dec9                 fmulp st(1)
// 0090091b  dec1                 faddp st(1)
// 0090091d  c3                   ret 
// 0090091e  ddd9                 fstp st(1)
// 00900920  ddd8                 fstp st(0)
// 00900922  dd442404             fld qword ptr [esp + 4]
// 00900926  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?HuetoRGB@CXTColorRef@@KANNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
