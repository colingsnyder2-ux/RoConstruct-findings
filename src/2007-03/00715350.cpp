// roc 2007-03 00715350  unit: seg_00710000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715350
//
// 00715350  83ec0c               sub esp, 0xc
// 00715353  0fb601               movzx eax, byte ptr [ecx]
// 00715356  890424               mov dword ptr [esp], eax
// 00715359  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0071535d  db0424               fild dword ptr [esp]
// 00715360  dd0510c47800         fld qword ptr [0x78c410]
// 00715366  0fb64102             movzx eax, byte ptr [ecx + 2]
// 0071536a  dcf9                 fdiv st(1), st(0)
// 0071536c  891424               mov dword ptr [esp], edx
// 0071536f  d9c9                 fxch st(1)
// 00715371  dd542404             fst qword ptr [esp + 4]
// 00715375  db0424               fild dword ptr [esp]
// 00715378  890424               mov dword ptr [esp], eax
// 0071537b  d8f2                 fdiv st(2)
// 0071537d  db0424               fild dword ptr [esp]
// 00715380  def3                 fdivrp st(3)
// 00715382  d8d2                 fcom st(2)
// 00715384  dfe0                 fnstsw ax
// 00715386  f6c441               test ah, 0x41
// 00715389  7504                 jne 0x71538f
// 0071538b  d9c0                 fld st(0)
// 0071538d  eb02                 jmp 0x715391
// 0071538f  d9c2                 fld st(2)
// 00715391  d8da                 fcomp st(2)
// 00715393  dfe0                 fnstsw ax
// 00715395  f6c405               test ah, 5
// 00715398  7a04                 jp 0x71539e
// 0071539a  d9c1                 fld st(1)
// 0071539c  eb0f                 jmp 0x7153ad
// 0071539e  d8d2                 fcom st(2)
// 007153a0  dfe0                 fnstsw ax
// 007153a2  f6c441               test ah, 0x41
// 007153a5  7504                 jne 0x7153ab
// 007153a7  d9c0                 fld st(0)
// 007153a9  eb02                 jmp 0x7153ad
// 007153ab  d9c2                 fld st(2)
// 007153ad  d9c9                 fxch st(1)
// 007153af  d8d3                 fcom st(3)
// 007153b1  dfe0                 fnstsw ax
// 007153b3  f6c405               test ah, 5
// 007153b6  7a04                 jp 0x7153bc
// 007153b8  d9c0                 fld st(0)
// 007153ba  eb02                 jmp 0x7153be
// 007153bc  d9c3                 fld st(3)
// 007153be  d8db                 fcomp st(3)
// 007153c0  dfe0                 fnstsw ax
// 007153c2  f6c441               test ah, 0x41
// 007153c5  7417                 je 0x7153de
// 007153c7  ddda                 fstp st(2)
// 007153c9  d9c9                 fxch st(1)
// 007153cb  d8d2                 fcom st(2)
// 007153cd  dfe0                 fnstsw ax
// 007153cf  f6c405               test ah, 5
// 007153d2  7a04                 jp 0x7153d8
// 007153d4  d9c0                 fld st(0)
// 007153d6  eb02                 jmp 0x7153da
// 007153d8  d9c2                 fld st(2)
// 007153da  d9ca                 fxch st(2)
// 007153dc  d9c9                 fxch st(1)
// 007153de  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007153e2  d9c2                 fld st(2)
// 007153e4  d8c2                 fadd st(2)
// 007153e6  d9c0                 fld st(0)
// 007153e8  dd05584f7900         fld qword ptr [0x794f58]
// 007153ee  dcc9                 fmul st(1), st(0)
// 007153f0  d9c9                 fxch st(1)
// 007153f2  dd11                 fst qword ptr [ecx]
// 007153f4  d9c5                 fld st(5)
// 007153f6  dded                 fucomp st(5)
// 007153f8  dfe0                 fnstsw ax
// 007153fa  f6c444               test ah, 0x44
// 007153fd  7a22                 jp 0x715421
// 007153ff  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715403  dddd                 fstp st(5)
// 00715405  8b442414             mov eax, dword ptr [esp + 0x14]
// 00715409  dddc                 fstp st(4)
// 0071540b  ddda                 fstp st(2)
// 0071540d  ddd8                 fstp st(0)
// 0071540f  ddd8                 fstp st(0)
// 00715411  ddd9                 fstp st(1)
// 00715413  ddd8                 fstp st(0)
// 00715415  d9ee                 fldz 
// 00715417  dd12                 fst qword ptr [edx]
// 00715419  dd18                 fstp qword ptr [eax]
// 0071541b  83c40c               add esp, 0xc
// 0071541e  c20c00               ret 0xc
// 00715421  ded9                 fcompp 
// 00715423  dfe0                 fnstsw ax
// 00715425  dd0518507900         fld qword ptr [0x795018]
// 0071542b  f6c405               test ah, 5
// 0071542e  7a12                 jp 0x715442
// 00715430  d9c3                 fld st(3)
// 00715432  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00715436  dee5                 fsubrp st(5)
// 00715438  d9c4                 fld st(4)
// 0071543a  def2                 fdivrp st(2)
// 0071543c  d9c9                 fxch st(1)
// 0071543e  dd19                 fstp qword ptr [ecx]
// 00715440  eb18                 jmp 0x71545a
// 00715442  ddd9                 fstp st(1)
// 00715444  8b542414             mov edx, dword ptr [esp + 0x14]
// 00715448  d9c2                 fld st(2)
// 0071544a  d8e4                 fsub st(4)
// 0071544c  d9c1                 fld st(1)
// 0071544e  d8e4                 fsub st(4)
// 00715450  dee5                 fsubrp st(5)
// 00715452  d9c0                 fld st(0)
// 00715454  def5                 fdivrp st(5)
// 00715456  d9cc                 fxch st(4)
// 00715458  dd1a                 fstp qword ptr [edx]
// 0071545a  d9c2                 fld st(2)
// 0071545c  dd442404             fld qword ptr [esp + 4]
// 00715460  dde1                 fucom st(1)
// 00715462  dfe0                 fnstsw ax
// 00715464  ddd9                 fstp st(1)
// 00715466  f6c444               test ah, 0x44
// 00715469  7a0c                 jp 0x715477
// 0071546b  ddd8                 fstp st(0)
// 0071546d  ddda                 fstp st(2)
// 0071546f  ddd9                 fstp st(1)
// 00715471  dee2                 fsubrp st(2)
// 00715473  def9                 fdivp st(1)
// 00715475  eb25                 jmp 0x71549c
// 00715477  d9cb                 fxch st(3)
// 00715479  ddea                 fucomp st(2)
// 0071547b  dfe0                 fnstsw ax
// 0071547d  f6c444               test ah, 0x44
// 00715480  7a0c                 jp 0x71548e
// 00715482  ddd9                 fstp st(1)
// 00715484  d9cb                 fxch st(3)
// 00715486  dee1                 fsubrp st(1)
// 00715488  def1                 fdivrp st(1)
// 0071548a  dec1                 faddp st(1)
// 0071548c  eb0e                 jmp 0x71549c
// 0071548e  dddc                 fstp st(4)
// 00715490  dddb                 fstp st(3)
// 00715492  dee2                 fsubrp st(2)
// 00715494  def9                 fdivp st(1)
// 00715496  dc0588e97900         fadd qword ptr [0x79e988]
// 0071549c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007154a0  dd19                 fstp qword ptr [ecx]
// 007154a2  dd01                 fld qword ptr [ecx]
// 007154a4  dc3580e97900         fdiv qword ptr [0x79e980]
// 007154aa  dd11                 fst qword ptr [ecx]
// 007154ac  d9ee                 fldz 
// 007154ae  d8d9                 fcomp st(1)
// 007154b0  dfe0                 fnstsw ax
// 007154b2  f6c441               test ah, 0x41
// 007154b5  750e                 jne 0x7154c5
// 007154b7  dc05a81f7900         fadd qword ptr [0x791fa8]
// 007154bd  dd19                 fstp qword ptr [ecx]
// 007154bf  83c40c               add esp, 0xc
// 007154c2  c20c00               ret 0xc
// 007154c5  ddd8                 fstp st(0)
// 007154c7  83c40c               add esp, 0xc
// 007154ca  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?toHSL@CXTColorRef@@QBEXAAN00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
