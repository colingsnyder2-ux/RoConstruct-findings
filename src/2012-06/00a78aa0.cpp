// roc 2012-06 00a78aa0  unit: CXTPDockingPaneAutoHidePanel  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78aa0
//
// 00a78aa0  d9ee                 fldz 
// 00a78aa2  dd442414             fld qword ptr [esp + 0x14]
// 00a78aa6  d8d1                 fcom st(1)
// 00a78aa8  dfe0                 fnstsw ax
// 00a78aaa  ddd9                 fstp st(1)
// 00a78aac  d9e8                 fld1 
// 00a78aae  f6c405               test ah, 5
// 00a78ab1  7a02                 jp 0xa78ab5
// 00a78ab3  dcc1                 fadd st(1), st(0)
// 00a78ab5  d8d1                 fcom st(1)
// 00a78ab7  dfe0                 fnstsw ax
// 00a78ab9  f6c405               test ah, 5
// 00a78abc  7a02                 jp 0xa78ac0
// 00a78abe  dce9                 fsub st(1), st(0)
// 00a78ac0  d9c1                 fld st(1)
// 00a78ac2  dd05604ac200         fld qword ptr [0xc24a60]
// 00a78ac8  dcc9                 fmul st(1), st(0)
// 00a78aca  d9c9                 fxch st(1)
// 00a78acc  d8da                 fcomp st(2)
// 00a78ace  dfe0                 fnstsw ax
// 00a78ad0  f6c405               test ah, 5
// 00a78ad3  7a17                 jp 0xa78aec
// 00a78ad5  ddd9                 fstp st(1)
// 00a78ad7  dd44240c             fld qword ptr [esp + 0xc]
// 00a78adb  dd442404             fld qword ptr [esp + 4]
// 00a78adf  dce9                 fsub st(1), st(0)
// 00a78ae1  d9c9                 fxch st(1)
// 00a78ae3  decb                 fmulp st(3)
// 00a78ae5  d9ca                 fxch st(2)
// 00a78ae7  dec9                 fmulp st(1)
// 00a78ae9  dec1                 faddp st(1)
// 00a78aeb  c3                   ret 
// 00a78aec  d9c2                 fld st(2)
// 00a78aee  dd0578cdb500         fld qword ptr [0xb5cd78]
// 00a78af4  dcc9                 fmul st(1), st(0)
// 00a78af6  d9c9                 fxch st(1)
// 00a78af8  d8db                 fcomp st(3)
// 00a78afa  dfe0                 fnstsw ax
// 00a78afc  ddda                 fstp st(2)
// 00a78afe  f6c405               test ah, 5
// 00a78b01  7a0b                 jp 0xa78b0e
// 00a78b03  ddda                 fstp st(2)
// 00a78b05  ddd9                 fstp st(1)
// 00a78b07  ddd8                 fstp st(0)
// 00a78b09  dd44240c             fld qword ptr [esp + 0xc]
// 00a78b0d  c3                   ret 
// 00a78b0e  d9c2                 fld st(2)
// 00a78b10  dc0d08e6b600         fmul qword ptr [0xb6e608]
// 00a78b16  d8da                 fcomp st(2)
// 00a78b18  dfe0                 fnstsw ax
// 00a78b1a  ddd9                 fstp st(1)
// 00a78b1c  f6c405               test ah, 5
// 00a78b1f  7a1d                 jp 0xa78b3e
// 00a78b21  dd44240c             fld qword ptr [esp + 0xc]
// 00a78b25  dd442404             fld qword ptr [esp + 4]
// 00a78b29  dce9                 fsub st(1), st(0)
// 00a78b2b  dd051897c200         fld qword ptr [0xc29718]
// 00a78b31  dee4                 fsubrp st(4)
// 00a78b33  d9c9                 fxch st(1)
// 00a78b35  decb                 fmulp st(3)
// 00a78b37  d9ca                 fxch st(2)
// 00a78b39  dec9                 fmulp st(1)
// 00a78b3b  dec1                 faddp st(1)
// 00a78b3d  c3                   ret 
// 00a78b3e  ddd9                 fstp st(1)
// 00a78b40  ddd8                 fstp st(0)
// 00a78b42  dd442404             fld qword ptr [esp + 4]
// 00a78b46  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?HuetoRGB@CXTColorRef@@KANNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
