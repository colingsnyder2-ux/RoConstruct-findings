// roc 2007-03 006efa00  unit: seg_006e0000  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006efa00
//
// 006efa00  83ec10               sub esp, 0x10
// 006efa03  8b442414             mov eax, dword ptr [esp + 0x14]
// 006efa07  0fb6c8               movzx ecx, al
// 006efa0a  894c2414             mov dword ptr [esp + 0x14], ecx
// 006efa0e  0fb6d4               movzx edx, ah
// 006efa11  db442414             fild dword ptr [esp + 0x14]
// 006efa15  dd0510c47800         fld qword ptr [0x78c410]
// 006efa1b  c1e810               shr eax, 0x10
// 006efa1e  89542414             mov dword ptr [esp + 0x14], edx
// 006efa22  dcf9                 fdiv st(1), st(0)
// 006efa24  0fb6c0               movzx eax, al
// 006efa27  d9c9                 fxch st(1)
// 006efa29  dd1424               fst qword ptr [esp]
// 006efa2c  db442414             fild dword ptr [esp + 0x14]
// 006efa30  89442414             mov dword ptr [esp + 0x14], eax
// 006efa34  d8f2                 fdiv st(2)
// 006efa36  db442414             fild dword ptr [esp + 0x14]
// 006efa3a  def3                 fdivrp st(3)
// 006efa3c  d8d2                 fcom st(2)
// 006efa3e  dfe0                 fnstsw ax
// 006efa40  f6c441               test ah, 0x41
// 006efa43  7504                 jne 0x6efa49
// 006efa45  d9c0                 fld st(0)
// 006efa47  eb02                 jmp 0x6efa4b
// 006efa49  d9c2                 fld st(2)
// 006efa4b  d8da                 fcomp st(2)
// 006efa4d  dfe0                 fnstsw ax
// 006efa4f  f6c405               test ah, 5
// 006efa52  7a04                 jp 0x6efa58
// 006efa54  d9c1                 fld st(1)
// 006efa56  eb0f                 jmp 0x6efa67
// 006efa58  d8d2                 fcom st(2)
// 006efa5a  dfe0                 fnstsw ax
// 006efa5c  f6c441               test ah, 0x41
// 006efa5f  7504                 jne 0x6efa65
// 006efa61  d9c0                 fld st(0)
// 006efa63  eb02                 jmp 0x6efa67
// 006efa65  d9c2                 fld st(2)
// 006efa67  d9c9                 fxch st(1)
// 006efa69  d8d3                 fcom st(3)
// 006efa6b  dfe0                 fnstsw ax
// 006efa6d  f6c405               test ah, 5
// 006efa70  7a04                 jp 0x6efa76
// 006efa72  d9c0                 fld st(0)
// 006efa74  eb02                 jmp 0x6efa78
// 006efa76  d9c3                 fld st(3)
// 006efa78  d8db                 fcomp st(3)
// 006efa7a  dfe0                 fnstsw ax
// 006efa7c  f6c441               test ah, 0x41
// 006efa7f  7417                 je 0x6efa98
// 006efa81  ddda                 fstp st(2)
// 006efa83  d9c9                 fxch st(1)
// 006efa85  d8d2                 fcom st(2)
// 006efa87  dfe0                 fnstsw ax
// 006efa89  f6c405               test ah, 5
// 006efa8c  7a04                 jp 0x6efa92
// 006efa8e  d9c0                 fld st(0)
// 006efa90  eb02                 jmp 0x6efa94
// 006efa92  d9c2                 fld st(2)
// 006efa94  d9ca                 fxch st(2)
// 006efa96  d9c9                 fxch st(1)
// 006efa98  d9c2                 fld st(2)
// 006efa9a  d8c2                 fadd st(2)
// 006efa9c  d9c0                 fld st(0)
// 006efa9e  dd05584f7900         fld qword ptr [0x794f58]
// 006efaa4  dcc9                 fmul st(1), st(0)
// 006efaa6  d9c9                 fxch st(1)
// 006efaa8  dd542408             fst qword ptr [esp + 8]
// 006efaac  d9c5                 fld st(5)
// 006efaae  dded                 fucomp st(5)
// 006efab0  dfe0                 fnstsw ax
// 006efab2  f6c444               test ah, 0x44
// 006efab5  7a39                 jp 0x6efaf0
// 006efab7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006efabb  ddd9                 fstp st(1)
// 006efabd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006efac1  dddc                 fstp st(4)
// 006efac3  ddda                 fstp st(2)
// 006efac5  c70100000000         mov dword ptr [ecx], 0
// 006efacb  ddd8                 fstp st(0)
// 006efacd  c70200000000         mov dword ptr [edx], 0
// 006efad3  ddd8                 fstp st(0)
// 006efad5  ddd9                 fstp st(1)
// 006efad7  dd0510c47800         fld qword ptr [0x78c410]
// 006efadd  dec9                 fmulp st(1)
// 006efadf  e81cf7f2ff           call 0x61f200
// 006efae4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006efae8  8901                 mov dword ptr [ecx], eax
// 006efaea  83c410               add esp, 0x10
// 006efaed  c21000               ret 0x10
// 006efaf0  ded9                 fcompp 
// 006efaf2  dfe0                 fnstsw ax
// 006efaf4  dd0518507900         fld qword ptr [0x795018]
// 006efafa  f6c405               test ah, 5
// 006efafd  7a0a                 jp 0x6efb09
// 006efaff  d9c3                 fld st(3)
// 006efb01  dee5                 fsubrp st(5)
// 006efb03  d9c4                 fld st(4)
// 006efb05  def2                 fdivrp st(2)
// 006efb07  eb14                 jmp 0x6efb1d
// 006efb09  ddd9                 fstp st(1)
// 006efb0b  d9c2                 fld st(2)
// 006efb0d  d8e4                 fsub st(4)
// 006efb0f  d9c1                 fld st(1)
// 006efb11  d8e4                 fsub st(4)
// 006efb13  dee5                 fsubrp st(5)
// 006efb15  d9c0                 fld st(0)
// 006efb17  def5                 fdivrp st(5)
// 006efb19  d9cc                 fxch st(4)
// 006efb1b  d9c9                 fxch st(1)
// 006efb1d  d9c3                 fld st(3)
// 006efb1f  dd0424               fld qword ptr [esp]
// 006efb22  dde1                 fucom st(1)
// 006efb24  dfe0                 fnstsw ax
// 006efb26  ddd9                 fstp st(1)
// 006efb28  f6c444               test ah, 0x44
// 006efb2b  7a0e                 jp 0x6efb3b
// 006efb2d  ddd8                 fstp st(0)
// 006efb2f  dddb                 fstp st(3)
// 006efb31  ddda                 fstp st(2)
// 006efb33  dee3                 fsubrp st(3)
// 006efb35  d9ca                 fxch st(2)
// 006efb37  def1                 fdivrp st(1)
// 006efb39  eb27                 jmp 0x6efb62
// 006efb3b  d9cc                 fxch st(4)
// 006efb3d  ddeb                 fucomp st(3)
// 006efb3f  dfe0                 fnstsw ax
// 006efb41  f6c444               test ah, 0x44
// 006efb44  7a0e                 jp 0x6efb54
// 006efb46  ddda                 fstp st(2)
// 006efb48  d9cc                 fxch st(4)
// 006efb4a  dee2                 fsubrp st(2)
// 006efb4c  d9c9                 fxch st(1)
// 006efb4e  def2                 fdivrp st(2)
// 006efb50  dec1                 faddp st(1)
// 006efb52  eb0e                 jmp 0x6efb62
// 006efb54  dddd                 fstp st(5)
// 006efb56  dddc                 fstp st(4)
// 006efb58  dee9                 fsubp st(1)
// 006efb5a  def1                 fdivrp st(1)
// 006efb5c  dc0588e97900         fadd qword ptr [0x79e988]
// 006efb62  dc3580e97900         fdiv qword ptr [0x79e980]
// 006efb68  d9ee                 fldz 
// 006efb6a  d8d9                 fcomp st(1)
// 006efb6c  dfe0                 fnstsw ax
// 006efb6e  f6c441               test ah, 0x41
// 006efb71  7506                 jne 0x6efb79
// 006efb73  dc05a81f7900         fadd qword ptr [0x791fa8]
// 006efb79  dd0510c47800         fld qword ptr [0x78c410]
// 006efb7f  dcc9                 fmul st(1), st(0)
// 006efb81  d9c9                 fxch st(1)
// 006efb83  e878f6f2ff           call 0x61f200
// 006efb88  dcc9                 fmul st(1), st(0)
// 006efb8a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006efb8e  d9c9                 fxch st(1)
// 006efb90  8901                 mov dword ptr [ecx], eax
// 006efb92  e869f6f2ff           call 0x61f200
// 006efb97  dd442408             fld qword ptr [esp + 8]
// 006efb9b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006efb9f  d9c9                 fxch st(1)
// 006efba1  dec9                 fmulp st(1)
// 006efba3  8902                 mov dword ptr [edx], eax
// 006efba5  e856f6f2ff           call 0x61f200
// 006efbaa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006efbae  8901                 mov dword ptr [ecx], eax
// 006efbb0  83c410               add esp, 0x10
// 006efbb3  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?RGBtoHSL@CXTColorPageCustom@@QAEXKPAH00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp
