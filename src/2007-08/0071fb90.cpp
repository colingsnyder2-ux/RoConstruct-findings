// roc 2007-08 0071fb90  unit: CXTPDockingPaneAutoHidePanel  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fb90
//
// 0071fb90  83ec0c               sub esp, 0xc
// 0071fb93  0fb601               movzx eax, byte ptr [ecx]
// 0071fb96  890424               mov dword ptr [esp], eax
// 0071fb99  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0071fb9d  db0424               fild dword ptr [esp]
// 0071fba0  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0071fba6  0fb64102             movzx eax, byte ptr [ecx + 2]
// 0071fbaa  dcf9                 fdiv st(1), st(0)
// 0071fbac  891424               mov dword ptr [esp], edx
// 0071fbaf  d9c9                 fxch st(1)
// 0071fbb1  dd542404             fst qword ptr [esp + 4]
// 0071fbb5  db0424               fild dword ptr [esp]
// 0071fbb8  890424               mov dword ptr [esp], eax
// 0071fbbb  d8f2                 fdiv st(2)
// 0071fbbd  db0424               fild dword ptr [esp]
// 0071fbc0  def3                 fdivrp st(3)
// 0071fbc2  d8d2                 fcom st(2)
// 0071fbc4  dfe0                 fnstsw ax
// 0071fbc6  f6c441               test ah, 0x41
// 0071fbc9  7504                 jne 0x71fbcf
// 0071fbcb  d9c0                 fld st(0)
// 0071fbcd  eb02                 jmp 0x71fbd1
// 0071fbcf  d9c2                 fld st(2)
// 0071fbd1  d8da                 fcomp st(2)
// 0071fbd3  dfe0                 fnstsw ax
// 0071fbd5  f6c405               test ah, 5
// 0071fbd8  7a04                 jp 0x71fbde
// 0071fbda  d9c1                 fld st(1)
// 0071fbdc  eb0f                 jmp 0x71fbed
// 0071fbde  d8d2                 fcom st(2)
// 0071fbe0  dfe0                 fnstsw ax
// 0071fbe2  f6c441               test ah, 0x41
// 0071fbe5  7504                 jne 0x71fbeb
// 0071fbe7  d9c0                 fld st(0)
// 0071fbe9  eb02                 jmp 0x71fbed
// 0071fbeb  d9c2                 fld st(2)
// 0071fbed  d9c9                 fxch st(1)
// 0071fbef  d8d3                 fcom st(3)
// 0071fbf1  dfe0                 fnstsw ax
// 0071fbf3  f6c405               test ah, 5
// 0071fbf6  7a04                 jp 0x71fbfc
// 0071fbf8  d9c0                 fld st(0)
// 0071fbfa  eb02                 jmp 0x71fbfe
// 0071fbfc  d9c3                 fld st(3)
// 0071fbfe  d8db                 fcomp st(3)
// 0071fc00  dfe0                 fnstsw ax
// 0071fc02  f6c441               test ah, 0x41
// 0071fc05  7417                 je 0x71fc1e
// 0071fc07  ddda                 fstp st(2)
// 0071fc09  d9c9                 fxch st(1)
// 0071fc0b  d8d2                 fcom st(2)
// 0071fc0d  dfe0                 fnstsw ax
// 0071fc0f  f6c405               test ah, 5
// 0071fc12  7a04                 jp 0x71fc18
// 0071fc14  d9c0                 fld st(0)
// 0071fc16  eb02                 jmp 0x71fc1a
// 0071fc18  d9c2                 fld st(2)
// 0071fc1a  d9ca                 fxch st(2)
// 0071fc1c  d9c9                 fxch st(1)
// 0071fc1e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071fc22  d9c2                 fld st(2)
// 0071fc24  d8c2                 fadd st(2)
// 0071fc26  d9c0                 fld st(0)
// 0071fc28  dd05485b7900         fld qword ptr [0x795b48]
// 0071fc2e  dcc9                 fmul st(1), st(0)
// 0071fc30  d9c9                 fxch st(1)
// 0071fc32  dd11                 fst qword ptr [ecx]
// 0071fc34  d9c5                 fld st(5)
// 0071fc36  dded                 fucomp st(5)
// 0071fc38  dfe0                 fnstsw ax
// 0071fc3a  f6c444               test ah, 0x44
// 0071fc3d  7a22                 jp 0x71fc61
// 0071fc3f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071fc43  dddd                 fstp st(5)
// 0071fc45  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071fc49  dddc                 fstp st(4)
// 0071fc4b  ddda                 fstp st(2)
// 0071fc4d  ddd8                 fstp st(0)
// 0071fc4f  ddd8                 fstp st(0)
// 0071fc51  ddd9                 fstp st(1)
// 0071fc53  ddd8                 fstp st(0)
// 0071fc55  d9ee                 fldz 
// 0071fc57  dd12                 fst qword ptr [edx]
// 0071fc59  dd18                 fstp qword ptr [eax]
// 0071fc5b  83c40c               add esp, 0xc
// 0071fc5e  c20c00               ret 0xc
// 0071fc61  ded9                 fcompp 
// 0071fc63  dfe0                 fnstsw ax
// 0071fc65  dd05085c7900         fld qword ptr [0x795c08]
// 0071fc6b  f6c405               test ah, 5
// 0071fc6e  7a12                 jp 0x71fc82
// 0071fc70  d9c3                 fld st(3)
// 0071fc72  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071fc76  dee5                 fsubrp st(5)
// 0071fc78  d9c4                 fld st(4)
// 0071fc7a  def2                 fdivrp st(2)
// 0071fc7c  d9c9                 fxch st(1)
// 0071fc7e  dd19                 fstp qword ptr [ecx]
// 0071fc80  eb18                 jmp 0x71fc9a
// 0071fc82  ddd9                 fstp st(1)
// 0071fc84  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071fc88  d9c2                 fld st(2)
// 0071fc8a  d8e4                 fsub st(4)
// 0071fc8c  d9c1                 fld st(1)
// 0071fc8e  d8e4                 fsub st(4)
// 0071fc90  dee5                 fsubrp st(5)
// 0071fc92  d9c0                 fld st(0)
// 0071fc94  def5                 fdivrp st(5)
// 0071fc96  d9cc                 fxch st(4)
// 0071fc98  dd1a                 fstp qword ptr [edx]
// 0071fc9a  d9c2                 fld st(2)
// 0071fc9c  dd442404             fld qword ptr [esp + 4]
// 0071fca0  dde1                 fucom st(1)
// 0071fca2  dfe0                 fnstsw ax
// 0071fca4  ddd9                 fstp st(1)
// 0071fca6  f6c444               test ah, 0x44
// 0071fca9  7a0c                 jp 0x71fcb7
// 0071fcab  ddd8                 fstp st(0)
// 0071fcad  ddda                 fstp st(2)
// 0071fcaf  ddd9                 fstp st(1)
// 0071fcb1  dee2                 fsubrp st(2)
// 0071fcb3  def9                 fdivp st(1)
// 0071fcb5  eb25                 jmp 0x71fcdc
// 0071fcb7  d9cb                 fxch st(3)
// 0071fcb9  ddea                 fucomp st(2)
// 0071fcbb  dfe0                 fnstsw ax
// 0071fcbd  f6c444               test ah, 0x44
// 0071fcc0  7a0c                 jp 0x71fcce
// 0071fcc2  ddd9                 fstp st(1)
// 0071fcc4  d9cb                 fxch st(3)
// 0071fcc6  dee1                 fsubrp st(1)
// 0071fcc8  def1                 fdivrp st(1)
// 0071fcca  dec1                 faddp st(1)
// 0071fccc  eb0e                 jmp 0x71fcdc
// 0071fcce  dddc                 fstp st(4)
// 0071fcd0  dddb                 fstp st(3)
// 0071fcd2  dee2                 fsubrp st(2)
// 0071fcd4  def9                 fdivp st(1)
// 0071fcd6  dc0540f37900         fadd qword ptr [0x79f340]
// 0071fcdc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071fce0  dd19                 fstp qword ptr [ecx]
// 0071fce2  dd01                 fld qword ptr [ecx]
// 0071fce4  dc3538f37900         fdiv qword ptr [0x79f338]
// 0071fcea  dd11                 fst qword ptr [ecx]
// 0071fcec  d9ee                 fldz 
// 0071fcee  d8d9                 fcomp st(1)
// 0071fcf0  dfe0                 fnstsw ax
// 0071fcf2  f6c441               test ah, 0x41
// 0071fcf5  750e                 jne 0x71fd05
// 0071fcf7  dc0598317900         fadd qword ptr [0x793198]
// 0071fcfd  dd19                 fstp qword ptr [ecx]
// 0071fcff  83c40c               add esp, 0xc
// 0071fd02  c20c00               ret 0xc
// 0071fd05  ddd8                 fstp st(0)
// 0071fd07  83c40c               add esp, 0xc
// 0071fd0a  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTColorRef.cpp (function ?toHSL@CXTColorRef@@QBEXAAN00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorRef.cpp
