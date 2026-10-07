// roc 2008-06 007a08d0  unit: CXTPDockingPaneAutoHidePanel  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a08d0
//
// 007a08d0  d9ee                 fldz 
// 007a08d2  dd442414             fld qword ptr [esp + 0x14]
// 007a08d6  d8d1                 fcom st(1)
// 007a08d8  dfe0                 fnstsw ax
// 007a08da  ddd9                 fstp st(1)
// 007a08dc  d9e8                 fld1 
// 007a08de  f6c405               test ah, 5
// 007a08e1  7a02                 jp 0x7a08e5
// 007a08e3  dcc1                 fadd st(1), st(0)
// 007a08e5  d8d1                 fcom st(1)
// 007a08e7  dfe0                 fnstsw ax
// 007a08e9  f6c405               test ah, 5
// 007a08ec  7a02                 jp 0x7a08f0
// 007a08ee  dce9                 fsub st(1), st(0)
// 007a08f0  d9c1                 fld st(1)
// 007a08f2  dd0578a08600         fld qword ptr [0x86a078]
// 007a08f8  dcc9                 fmul st(1), st(0)
// 007a08fa  d9c9                 fxch st(1)
// 007a08fc  d8da                 fcomp st(2)
// 007a08fe  dfe0                 fnstsw ax
// 007a0900  f6c405               test ah, 5
// 007a0903  7a17                 jp 0x7a091c
// 007a0905  ddd9                 fstp st(1)
// 007a0907  dd44240c             fld qword ptr [esp + 0xc]
// 007a090b  dd442404             fld qword ptr [esp + 4]
// 007a090f  dce9                 fsub st(1), st(0)
// 007a0911  d9c9                 fxch st(1)
// 007a0913  decb                 fmulp st(3)
// 007a0915  d9ca                 fxch st(2)
// 007a0917  dec9                 fmulp st(1)
// 007a0919  dec1                 faddp st(1)
// 007a091b  c3                   ret 
// 007a091c  d9c2                 fld st(2)
// 007a091e  dd05d06f8200         fld qword ptr [0x826fd0]
// 007a0924  dcc9                 fmul st(1), st(0)
// 007a0926  d9c9                 fxch st(1)
// 007a0928  d8db                 fcomp st(3)
// 007a092a  dfe0                 fnstsw ax
// 007a092c  ddda                 fstp st(2)
// 007a092e  f6c405               test ah, 5
// 007a0931  7a0b                 jp 0x7a093e
// 007a0933  ddda                 fstp st(2)
// 007a0935  ddd9                 fstp st(1)
// 007a0937  ddd8                 fstp st(0)
// 007a0939  dd44240c             fld qword ptr [esp + 0xc]
// 007a093d  c3                   ret 
// 007a093e  d9c2                 fld st(2)
// 007a0940  dc0d908b8200         fmul qword ptr [0x828b90]
// 007a0946  d8da                 fcomp st(2)
// 007a0948  dfe0                 fnstsw ax
// 007a094a  ddd9                 fstp st(1)
// 007a094c  f6c405               test ah, 5
// 007a094f  7a1d                 jp 0x7a096e
// 007a0951  dd44240c             fld qword ptr [esp + 0xc]
// 007a0955  dd442404             fld qword ptr [esp + 4]
// 007a0959  dce9                 fsub st(1), st(0)
// 007a095b  dd0558ef8600         fld qword ptr [0x86ef58]
// 007a0961  dee4                 fsubrp st(4)
// 007a0963  d9c9                 fxch st(1)
// 007a0965  decb                 fmulp st(3)
// 007a0967  d9ca                 fxch st(2)
// 007a0969  dec9                 fmulp st(1)
// 007a096b  dec1                 faddp st(1)
// 007a096d  c3                   ret 
// 007a096e  ddd9                 fstp st(1)
// 007a0970  ddd8                 fstp st(0)
// 007a0972  dd442404             fld qword ptr [esp + 4]
// 007a0976  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?HuetoRGB@CXTColorRef@@KANNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
