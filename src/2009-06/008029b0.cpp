// roc 2009-06 008029b0  unit: CXTColorBase  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008029b0
//
// 008029b0  83ec10               sub esp, 0x10
// 008029b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008029b7  0fb6c8               movzx ecx, al
// 008029ba  894c2414             mov dword ptr [esp + 0x14], ecx
// 008029be  8bd0                 mov edx, eax
// 008029c0  c1ea08               shr edx, 8
// 008029c3  db442414             fild dword ptr [esp + 0x14]
// 008029c7  0fb6ca               movzx ecx, dl
// 008029ca  dd05703b8b00         fld qword ptr [0x8b3b70]
// 008029d0  dcf9                 fdiv st(1), st(0)
// 008029d2  c1e810               shr eax, 0x10
// 008029d5  894c2414             mov dword ptr [esp + 0x14], ecx
// 008029d9  0fb6d0               movzx edx, al
// 008029dc  d9c9                 fxch st(1)
// 008029de  dd1424               fst qword ptr [esp]
// 008029e1  db442414             fild dword ptr [esp + 0x14]
// 008029e5  89542414             mov dword ptr [esp + 0x14], edx
// 008029e9  d8f2                 fdiv st(2)
// 008029eb  db442414             fild dword ptr [esp + 0x14]
// 008029ef  def3                 fdivrp st(3)
// 008029f1  d8d2                 fcom st(2)
// 008029f3  dfe0                 fnstsw ax
// 008029f5  f6c441               test ah, 0x41
// 008029f8  7504                 jne 0x8029fe
// 008029fa  d9c0                 fld st(0)
// 008029fc  eb02                 jmp 0x802a00
// 008029fe  d9c2                 fld st(2)
// 00802a00  d8da                 fcomp st(2)
// 00802a02  dfe0                 fnstsw ax
// 00802a04  f6c405               test ah, 5
// 00802a07  7a04                 jp 0x802a0d
// 00802a09  d9c1                 fld st(1)
// 00802a0b  eb0f                 jmp 0x802a1c
// 00802a0d  d8d2                 fcom st(2)
// 00802a0f  dfe0                 fnstsw ax
// 00802a11  f6c441               test ah, 0x41
// 00802a14  7504                 jne 0x802a1a
// 00802a16  d9c0                 fld st(0)
// 00802a18  eb02                 jmp 0x802a1c
// 00802a1a  d9c2                 fld st(2)
// 00802a1c  d9c9                 fxch st(1)
// 00802a1e  d8d3                 fcom st(3)
// 00802a20  dfe0                 fnstsw ax
// 00802a22  f6c405               test ah, 5
// 00802a25  7a04                 jp 0x802a2b
// 00802a27  d9c0                 fld st(0)
// 00802a29  eb02                 jmp 0x802a2d
// 00802a2b  d9c3                 fld st(3)
// 00802a2d  d8db                 fcomp st(3)
// 00802a2f  dfe0                 fnstsw ax
// 00802a31  f6c441               test ah, 0x41
// 00802a34  7417                 je 0x802a4d
// 00802a36  ddda                 fstp st(2)
// 00802a38  d9c9                 fxch st(1)
// 00802a3a  d8d2                 fcom st(2)
// 00802a3c  dfe0                 fnstsw ax
// 00802a3e  f6c405               test ah, 5
// 00802a41  7a04                 jp 0x802a47
// 00802a43  d9c0                 fld st(0)
// 00802a45  eb02                 jmp 0x802a49
// 00802a47  d9c2                 fld st(2)
// 00802a49  d9ca                 fxch st(2)
// 00802a4b  d9c9                 fxch st(1)
// 00802a4d  d9c2                 fld st(2)
// 00802a4f  d8c2                 fadd st(2)
// 00802a51  d9c0                 fld st(0)
// 00802a53  dd05f8018c00         fld qword ptr [0x8c01f8]
// 00802a59  dcc9                 fmul st(1), st(0)
// 00802a5b  d9c9                 fxch st(1)
// 00802a5d  dd542408             fst qword ptr [esp + 8]
// 00802a61  d9c5                 fld st(5)
// 00802a63  dded                 fucomp st(5)
// 00802a65  dfe0                 fnstsw ax
// 00802a67  f6c444               test ah, 0x44
// 00802a6a  7a39                 jp 0x802aa5
// 00802a6c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00802a70  ddd9                 fstp st(1)
// 00802a72  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00802a76  dddc                 fstp st(4)
// 00802a78  ddda                 fstp st(2)
// 00802a7a  c70000000000         mov dword ptr [eax], 0
// 00802a80  ddd8                 fstp st(0)
// 00802a82  c70100000000         mov dword ptr [ecx], 0
// 00802a88  ddd8                 fstp st(0)
// 00802a8a  ddd9                 fstp st(1)
// 00802a8c  dd05703b8b00         fld qword ptr [0x8b3b70]
// 00802a92  dec9                 fmulp st(1)
// 00802a94  e82774f1ff           call 0x719ec0
// 00802a99  8b542418             mov edx, dword ptr [esp + 0x18]
// 00802a9d  8902                 mov dword ptr [edx], eax
// 00802a9f  83c410               add esp, 0x10
// 00802aa2  c21000               ret 0x10
// 00802aa5  ded9                 fcompp 
// 00802aa7  dfe0                 fnstsw ax
// 00802aa9  dd0528e88b00         fld qword ptr [0x8be828]
// 00802aaf  f6c405               test ah, 5
// 00802ab2  7a0a                 jp 0x802abe
// 00802ab4  d9c3                 fld st(3)
// 00802ab6  dee5                 fsubrp st(5)
// 00802ab8  d9c4                 fld st(4)
// 00802aba  def2                 fdivrp st(2)
// 00802abc  eb14                 jmp 0x802ad2
// 00802abe  ddd9                 fstp st(1)
// 00802ac0  d9c2                 fld st(2)
// 00802ac2  d8e4                 fsub st(4)
// 00802ac4  d9c1                 fld st(1)
// 00802ac6  d8e4                 fsub st(4)
// 00802ac8  dee5                 fsubrp st(5)
// 00802aca  d9c0                 fld st(0)
// 00802acc  def5                 fdivrp st(5)
// 00802ace  d9cc                 fxch st(4)
// 00802ad0  d9c9                 fxch st(1)
// 00802ad2  d9c3                 fld st(3)
// 00802ad4  dd0424               fld qword ptr [esp]
// 00802ad7  dde1                 fucom st(1)
// 00802ad9  dfe0                 fnstsw ax
// 00802adb  ddd9                 fstp st(1)
// 00802add  f6c444               test ah, 0x44
// 00802ae0  7a0e                 jp 0x802af0
// 00802ae2  ddd8                 fstp st(0)
// 00802ae4  dddb                 fstp st(3)
// 00802ae6  ddda                 fstp st(2)
// 00802ae8  dee3                 fsubrp st(3)
// 00802aea  d9ca                 fxch st(2)
// 00802aec  def1                 fdivrp st(1)
// 00802aee  eb27                 jmp 0x802b17
// 00802af0  d9cc                 fxch st(4)
// 00802af2  ddeb                 fucomp st(3)
// 00802af4  dfe0                 fnstsw ax
// 00802af6  f6c444               test ah, 0x44
// 00802af9  7a0e                 jp 0x802b09
// 00802afb  ddda                 fstp st(2)
// 00802afd  d9cc                 fxch st(4)
// 00802aff  dee2                 fsubrp st(2)
// 00802b01  d9c9                 fxch st(1)
// 00802b03  def2                 fdivrp st(2)
// 00802b05  dec1                 faddp st(1)
// 00802b07  eb0e                 jmp 0x802b17
// 00802b09  dddd                 fstp st(5)
// 00802b0b  dddc                 fstp st(4)
// 00802b0d  dee9                 fsubp st(1)
// 00802b0f  def1                 fdivrp st(1)
// 00802b11  dc05e8b88c00         fadd qword ptr [0x8cb8e8]
// 00802b17  dc3538b19000         fdiv qword ptr [0x90b138]
// 00802b1d  d9ee                 fldz 
// 00802b1f  d8d9                 fcomp st(1)
// 00802b21  dfe0                 fnstsw ax
// 00802b23  f6c441               test ah, 0x41
// 00802b26  7506                 jne 0x802b2e
// 00802b28  dc05c0178b00         fadd qword ptr [0x8b17c0]
// 00802b2e  dd05703b8b00         fld qword ptr [0x8b3b70]
// 00802b34  dcc9                 fmul st(1), st(0)
// 00802b36  d9c9                 fxch st(1)
// 00802b38  e88373f1ff           call 0x719ec0
// 00802b3d  dcc9                 fmul st(1), st(0)
// 00802b3f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00802b43  d9c9                 fxch st(1)
// 00802b45  8902                 mov dword ptr [edx], eax
// 00802b47  e87473f1ff           call 0x719ec0
// 00802b4c  dd442408             fld qword ptr [esp + 8]
// 00802b50  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00802b54  d9c9                 fxch st(1)
// 00802b56  dec9                 fmulp st(1)
// 00802b58  8901                 mov dword ptr [ecx], eax
// 00802b5a  e86173f1ff           call 0x719ec0
// 00802b5f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00802b63  8902                 mov dword ptr [edx], eax
// 00802b65  83c410               add esp, 0x10
// 00802b68  c21000               ret 0x10
// copied from an identical function in another client (function ?RGBtoHSL@CXTColorPageCustom@@QAEXKPAH00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp