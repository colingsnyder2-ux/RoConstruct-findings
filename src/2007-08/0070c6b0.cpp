// from server: 100% by auto
// roc 2007-08 0070c6b0  unit: CXTColorBase  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070c6b0
//
// 0070c6b0  83ec10               sub esp, 0x10
// 0070c6b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0070c6b7  0fb6c8               movzx ecx, al
// 0070c6ba  894c2414             mov dword ptr [esp + 0x14], ecx
// 0070c6be  0fb6d4               movzx edx, ah
// 0070c6c1  db442414             fild dword ptr [esp + 0x14]
// 0070c6c5  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0070c6cb  c1e810               shr eax, 0x10
// 0070c6ce  89542414             mov dword ptr [esp + 0x14], edx
// 0070c6d2  dcf9                 fdiv st(1), st(0)
// 0070c6d4  0fb6c0               movzx eax, al
// 0070c6d7  d9c9                 fxch st(1)
// 0070c6d9  dd1424               fst qword ptr [esp]
// 0070c6dc  db442414             fild dword ptr [esp + 0x14]
// 0070c6e0  89442414             mov dword ptr [esp + 0x14], eax
// 0070c6e4  d8f2                 fdiv st(2)
// 0070c6e6  db442414             fild dword ptr [esp + 0x14]
// 0070c6ea  def3                 fdivrp st(3)
// 0070c6ec  d8d2                 fcom st(2)
// 0070c6ee  dfe0                 fnstsw ax
// 0070c6f0  f6c441               test ah, 0x41
// 0070c6f3  7504                 jne 0x70c6f9
// 0070c6f5  d9c0                 fld st(0)
// 0070c6f7  eb02                 jmp 0x70c6fb
// 0070c6f9  d9c2                 fld st(2)
// 0070c6fb  d8da                 fcomp st(2)
// 0070c6fd  dfe0                 fnstsw ax
// 0070c6ff  f6c405               test ah, 5
// 0070c702  7a04                 jp 0x70c708
// 0070c704  d9c1                 fld st(1)
// 0070c706  eb0f                 jmp 0x70c717
// 0070c708  d8d2                 fcom st(2)
// 0070c70a  dfe0                 fnstsw ax
// 0070c70c  f6c441               test ah, 0x41
// 0070c70f  7504                 jne 0x70c715
// 0070c711  d9c0                 fld st(0)
// 0070c713  eb02                 jmp 0x70c717
// 0070c715  d9c2                 fld st(2)
// 0070c717  d9c9                 fxch st(1)
// 0070c719  d8d3                 fcom st(3)
// 0070c71b  dfe0                 fnstsw ax
// 0070c71d  f6c405               test ah, 5
// 0070c720  7a04                 jp 0x70c726
// 0070c722  d9c0                 fld st(0)
// 0070c724  eb02                 jmp 0x70c728
// 0070c726  d9c3                 fld st(3)
// 0070c728  d8db                 fcomp st(3)
// 0070c72a  dfe0                 fnstsw ax
// 0070c72c  f6c441               test ah, 0x41
// 0070c72f  7417                 je 0x70c748
// 0070c731  ddda                 fstp st(2)
// 0070c733  d9c9                 fxch st(1)
// 0070c735  d8d2                 fcom st(2)
// 0070c737  dfe0                 fnstsw ax
// 0070c739  f6c405               test ah, 5
// 0070c73c  7a04                 jp 0x70c742
// 0070c73e  d9c0                 fld st(0)
// 0070c740  eb02                 jmp 0x70c744
// 0070c742  d9c2                 fld st(2)
// 0070c744  d9ca                 fxch st(2)
// 0070c746  d9c9                 fxch st(1)
// 0070c748  d9c2                 fld st(2)
// 0070c74a  d8c2                 fadd st(2)
// 0070c74c  d9c0                 fld st(0)
// 0070c74e  dd05485b7900         fld qword ptr [0x795b48]
// 0070c754  dcc9                 fmul st(1), st(0)
// 0070c756  d9c9                 fxch st(1)
// 0070c758  dd542408             fst qword ptr [esp + 8]
// 0070c75c  d9c5                 fld st(5)
// 0070c75e  dded                 fucomp st(5)
// 0070c760  dfe0                 fnstsw ax
// 0070c762  f6c444               test ah, 0x44
// 0070c765  7a39                 jp 0x70c7a0
// 0070c767  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070c76b  ddd9                 fstp st(1)
// 0070c76d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0070c771  dddc                 fstp st(4)
// 0070c773  ddda                 fstp st(2)
// 0070c775  c70100000000         mov dword ptr [ecx], 0
// 0070c77b  ddd8                 fstp st(0)
// 0070c77d  c70200000000         mov dword ptr [edx], 0
// 0070c783  ddd8                 fstp st(0)
// 0070c785  ddd9                 fstp st(1)
// 0070c787  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0070c78d  dec9                 fmulp st(1)
// 0070c78f  e8cc45f2ff           call 0x630d60
// 0070c794  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070c798  8901                 mov dword ptr [ecx], eax
// 0070c79a  83c410               add esp, 0x10
// 0070c79d  c21000               ret 0x10
// 0070c7a0  ded9                 fcompp 
// 0070c7a2  dfe0                 fnstsw ax
// 0070c7a4  dd05085c7900         fld qword ptr [0x795c08]
// 0070c7aa  f6c405               test ah, 5
// 0070c7ad  7a0a                 jp 0x70c7b9
// 0070c7af  d9c3                 fld st(3)
// 0070c7b1  dee5                 fsubrp st(5)
// 0070c7b3  d9c4                 fld st(4)
// 0070c7b5  def2                 fdivrp st(2)
// 0070c7b7  eb14                 jmp 0x70c7cd
// 0070c7b9  ddd9                 fstp st(1)
// 0070c7bb  d9c2                 fld st(2)
// 0070c7bd  d8e4                 fsub st(4)
// 0070c7bf  d9c1                 fld st(1)
// 0070c7c1  d8e4                 fsub st(4)
// 0070c7c3  dee5                 fsubrp st(5)
// 0070c7c5  d9c0                 fld st(0)
// 0070c7c7  def5                 fdivrp st(5)
// 0070c7c9  d9cc                 fxch st(4)
// 0070c7cb  d9c9                 fxch st(1)
// 0070c7cd  d9c3                 fld st(3)
// 0070c7cf  dd0424               fld qword ptr [esp]
// 0070c7d2  dde1                 fucom st(1)
// 0070c7d4  dfe0                 fnstsw ax
// 0070c7d6  ddd9                 fstp st(1)
// 0070c7d8  f6c444               test ah, 0x44
// 0070c7db  7a0e                 jp 0x70c7eb
// 0070c7dd  ddd8                 fstp st(0)
// 0070c7df  dddb                 fstp st(3)
// 0070c7e1  ddda                 fstp st(2)
// 0070c7e3  dee3                 fsubrp st(3)
// 0070c7e5  d9ca                 fxch st(2)
// 0070c7e7  def1                 fdivrp st(1)
// 0070c7e9  eb27                 jmp 0x70c812
// 0070c7eb  d9cc                 fxch st(4)
// 0070c7ed  ddeb                 fucomp st(3)
// 0070c7ef  dfe0                 fnstsw ax
// 0070c7f1  f6c444               test ah, 0x44
// 0070c7f4  7a0e                 jp 0x70c804
// 0070c7f6  ddda                 fstp st(2)
// 0070c7f8  d9cc                 fxch st(4)
// 0070c7fa  dee2                 fsubrp st(2)
// 0070c7fc  d9c9                 fxch st(1)
// 0070c7fe  def2                 fdivrp st(2)
// 0070c800  dec1                 faddp st(1)
// 0070c802  eb0e                 jmp 0x70c812
// 0070c804  dddd                 fstp st(5)
// 0070c806  dddc                 fstp st(4)
// 0070c808  dee9                 fsubp st(1)
// 0070c80a  def1                 fdivrp st(1)
// 0070c80c  dc0540f37900         fadd qword ptr [0x79f340]
// 0070c812  dc3538f37900         fdiv qword ptr [0x79f338]
// 0070c818  d9ee                 fldz 
// 0070c81a  d8d9                 fcomp st(1)
// 0070c81c  dfe0                 fnstsw ax
// 0070c81e  f6c441               test ah, 0x41
// 0070c821  7506                 jne 0x70c829
// 0070c823  dc0598317900         fadd qword ptr [0x793198]
// 0070c829  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0070c82f  dcc9                 fmul st(1), st(0)
// 0070c831  d9c9                 fxch st(1)
// 0070c833  e82845f2ff           call 0x630d60
// 0070c838  dcc9                 fmul st(1), st(0)
// 0070c83a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070c83e  d9c9                 fxch st(1)
// 0070c840  8901                 mov dword ptr [ecx], eax
// 0070c842  e81945f2ff           call 0x630d60
// 0070c847  dd442408             fld qword ptr [esp + 8]
// 0070c84b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0070c84f  d9c9                 fxch st(1)
// 0070c851  dec9                 fmulp st(1)
// 0070c853  8902                 mov dword ptr [edx], eax
// 0070c855  e80645f2ff           call 0x630d60
// 0070c85a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070c85e  8901                 mov dword ptr [ecx], eax
// 0070c860  83c410               add esp, 0x10
// 0070c863  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?RGBtoHSL@CXTColorPageCustom@@QAEXKPAH00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp
