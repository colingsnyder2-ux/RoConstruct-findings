// roc 2009-12 008dd4a0  unit: CXTColorBase  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dd4a0
//
// 008dd4a0  83ec10               sub esp, 0x10
// 008dd4a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dd4a7  0fb6c8               movzx ecx, al
// 008dd4aa  894c2414             mov dword ptr [esp + 0x14], ecx
// 008dd4ae  8bd0                 mov edx, eax
// 008dd4b0  c1ea08               shr edx, 8
// 008dd4b3  db442414             fild dword ptr [esp + 0x14]
// 008dd4b7  0fb6ca               movzx ecx, dl
// 008dd4ba  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008dd4c0  dcf9                 fdiv st(1), st(0)
// 008dd4c2  c1e810               shr eax, 0x10
// 008dd4c5  894c2414             mov dword ptr [esp + 0x14], ecx
// 008dd4c9  0fb6d0               movzx edx, al
// 008dd4cc  d9c9                 fxch st(1)
// 008dd4ce  dd1424               fst qword ptr [esp]
// 008dd4d1  db442414             fild dword ptr [esp + 0x14]
// 008dd4d5  89542414             mov dword ptr [esp + 0x14], edx
// 008dd4d9  d8f2                 fdiv st(2)
// 008dd4db  db442414             fild dword ptr [esp + 0x14]
// 008dd4df  def3                 fdivrp st(3)
// 008dd4e1  d8d2                 fcom st(2)
// 008dd4e3  dfe0                 fnstsw ax
// 008dd4e5  f6c441               test ah, 0x41
// 008dd4e8  7504                 jne 0x8dd4ee
// 008dd4ea  d9c0                 fld st(0)
// 008dd4ec  eb02                 jmp 0x8dd4f0
// 008dd4ee  d9c2                 fld st(2)
// 008dd4f0  d8da                 fcomp st(2)
// 008dd4f2  dfe0                 fnstsw ax
// 008dd4f4  f6c405               test ah, 5
// 008dd4f7  7a04                 jp 0x8dd4fd
// 008dd4f9  d9c1                 fld st(1)
// 008dd4fb  eb0f                 jmp 0x8dd50c
// 008dd4fd  d8d2                 fcom st(2)
// 008dd4ff  dfe0                 fnstsw ax
// 008dd501  f6c441               test ah, 0x41
// 008dd504  7504                 jne 0x8dd50a
// 008dd506  d9c0                 fld st(0)
// 008dd508  eb02                 jmp 0x8dd50c
// 008dd50a  d9c2                 fld st(2)
// 008dd50c  d9c9                 fxch st(1)
// 008dd50e  d8d3                 fcom st(3)
// 008dd510  dfe0                 fnstsw ax
// 008dd512  f6c405               test ah, 5
// 008dd515  7a04                 jp 0x8dd51b
// 008dd517  d9c0                 fld st(0)
// 008dd519  eb02                 jmp 0x8dd51d
// 008dd51b  d9c3                 fld st(3)
// 008dd51d  d8db                 fcomp st(3)
// 008dd51f  dfe0                 fnstsw ax
// 008dd521  f6c441               test ah, 0x41
// 008dd524  7417                 je 0x8dd53d
// 008dd526  ddda                 fstp st(2)
// 008dd528  d9c9                 fxch st(1)
// 008dd52a  d8d2                 fcom st(2)
// 008dd52c  dfe0                 fnstsw ax
// 008dd52e  f6c405               test ah, 5
// 008dd531  7a04                 jp 0x8dd537
// 008dd533  d9c0                 fld st(0)
// 008dd535  eb02                 jmp 0x8dd539
// 008dd537  d9c2                 fld st(2)
// 008dd539  d9ca                 fxch st(2)
// 008dd53b  d9c9                 fxch st(1)
// 008dd53d  d9c2                 fld st(2)
// 008dd53f  d8c2                 fadd st(2)
// 008dd541  d9c0                 fld st(0)
// 008dd543  dd0510329b00         fld qword ptr [0x9b3210]
// 008dd549  dcc9                 fmul st(1), st(0)
// 008dd54b  d9c9                 fxch st(1)
// 008dd54d  dd542408             fst qword ptr [esp + 8]
// 008dd551  d9c5                 fld st(5)
// 008dd553  dded                 fucomp st(5)
// 008dd555  dfe0                 fnstsw ax
// 008dd557  f6c444               test ah, 0x44
// 008dd55a  7a39                 jp 0x8dd595
// 008dd55c  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dd560  ddd9                 fstp st(1)
// 008dd562  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008dd566  dddc                 fstp st(4)
// 008dd568  ddda                 fstp st(2)
// 008dd56a  c70000000000         mov dword ptr [eax], 0
// 008dd570  ddd8                 fstp st(0)
// 008dd572  c70100000000         mov dword ptr [ecx], 0
// 008dd578  ddd8                 fstp st(0)
// 008dd57a  ddd9                 fstp st(1)
// 008dd57c  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008dd582  dec9                 fmulp st(1)
// 008dd584  e86777f1ff           call 0x7f4cf0
// 008dd589  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dd58d  8902                 mov dword ptr [edx], eax
// 008dd58f  83c410               add esp, 0x10
// 008dd592  c21000               ret 0x10
// 008dd595  ded9                 fcompp 
// 008dd597  dfe0                 fnstsw ax
// 008dd599  dd05b0399b00         fld qword ptr [0x9b39b0]
// 008dd59f  f6c405               test ah, 5
// 008dd5a2  7a0a                 jp 0x8dd5ae
// 008dd5a4  d9c3                 fld st(3)
// 008dd5a6  dee5                 fsubrp st(5)
// 008dd5a8  d9c4                 fld st(4)
// 008dd5aa  def2                 fdivrp st(2)
// 008dd5ac  eb14                 jmp 0x8dd5c2
// 008dd5ae  ddd9                 fstp st(1)
// 008dd5b0  d9c2                 fld st(2)
// 008dd5b2  d8e4                 fsub st(4)
// 008dd5b4  d9c1                 fld st(1)
// 008dd5b6  d8e4                 fsub st(4)
// 008dd5b8  dee5                 fsubrp st(5)
// 008dd5ba  d9c0                 fld st(0)
// 008dd5bc  def5                 fdivrp st(5)
// 008dd5be  d9cc                 fxch st(4)
// 008dd5c0  d9c9                 fxch st(1)
// 008dd5c2  d9c3                 fld st(3)
// 008dd5c4  dd0424               fld qword ptr [esp]
// 008dd5c7  dde1                 fucom st(1)
// 008dd5c9  dfe0                 fnstsw ax
// 008dd5cb  ddd9                 fstp st(1)
// 008dd5cd  f6c444               test ah, 0x44
// 008dd5d0  7a0e                 jp 0x8dd5e0
// 008dd5d2  ddd8                 fstp st(0)
// 008dd5d4  dddb                 fstp st(3)
// 008dd5d6  ddda                 fstp st(2)
// 008dd5d8  dee3                 fsubrp st(3)
// 008dd5da  d9ca                 fxch st(2)
// 008dd5dc  def1                 fdivrp st(1)
// 008dd5de  eb27                 jmp 0x8dd607
// 008dd5e0  d9cc                 fxch st(4)
// 008dd5e2  ddeb                 fucomp st(3)
// 008dd5e4  dfe0                 fnstsw ax
// 008dd5e6  f6c444               test ah, 0x44
// 008dd5e9  7a0e                 jp 0x8dd5f9
// 008dd5eb  ddda                 fstp st(2)
// 008dd5ed  d9cc                 fxch st(4)
// 008dd5ef  dee2                 fsubrp st(2)
// 008dd5f1  d9c9                 fxch st(1)
// 008dd5f3  def2                 fdivrp st(2)
// 008dd5f5  dec1                 faddp st(1)
// 008dd5f7  eb0e                 jmp 0x8dd607
// 008dd5f9  dddd                 fstp st(5)
// 008dd5fb  dddc                 fstp st(4)
// 008dd5fd  dee9                 fsubp st(1)
// 008dd5ff  def1                 fdivrp st(1)
// 008dd601  dc05e0259c00         fadd qword ptr [0x9c25e0]
// 008dd607  dc35a8b5a000         fdiv qword ptr [0xa0b5a8]
// 008dd60d  d9ee                 fldz 
// 008dd60f  d8d9                 fcomp st(1)
// 008dd611  dfe0                 fnstsw ax
// 008dd613  f6c441               test ah, 0x41
// 008dd616  7506                 jne 0x8dd61e
// 008dd618  dc05c8449a00         fadd qword ptr [0x9a44c8]
// 008dd61e  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008dd624  dcc9                 fmul st(1), st(0)
// 008dd626  d9c9                 fxch st(1)
// 008dd628  e8c376f1ff           call 0x7f4cf0
// 008dd62d  dcc9                 fmul st(1), st(0)
// 008dd62f  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd633  d9c9                 fxch st(1)
// 008dd635  8902                 mov dword ptr [edx], eax
// 008dd637  e8b476f1ff           call 0x7f4cf0
// 008dd63c  dd442408             fld qword ptr [esp + 8]
// 008dd640  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008dd644  d9c9                 fxch st(1)
// 008dd646  dec9                 fmulp st(1)
// 008dd648  8901                 mov dword ptr [ecx], eax
// 008dd64a  e8a176f1ff           call 0x7f4cf0
// 008dd64f  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dd653  8902                 mov dword ptr [edx], eax
// 008dd655  83c410               add esp, 0x10
// 008dd658  c21000               ret 0x10
// copied from an identical function in another client (function ?RGBtoHSL@CXTPColorPageCustom@@QAEXKPAH00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp