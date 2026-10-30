// roc 2011-06 008ea300  unit: CXTColorBase  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea300
//
// 008ea300  83ec10               sub esp, 0x10
// 008ea303  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ea307  0fb6c8               movzx ecx, al
// 008ea30a  894c2414             mov dword ptr [esp + 0x14], ecx
// 008ea30e  8bd0                 mov edx, eax
// 008ea310  c1ea08               shr edx, 8
// 008ea313  db442414             fild dword ptr [esp + 0x14]
// 008ea317  0fb6ca               movzx ecx, dl
// 008ea31a  dd052891a600         fld qword ptr [0xa69128]
// 008ea320  dcf9                 fdiv st(1), st(0)
// 008ea322  c1e810               shr eax, 0x10
// 008ea325  894c2414             mov dword ptr [esp + 0x14], ecx
// 008ea329  0fb6d0               movzx edx, al
// 008ea32c  d9c9                 fxch st(1)
// 008ea32e  dd1424               fst qword ptr [esp]
// 008ea331  db442414             fild dword ptr [esp + 0x14]
// 008ea335  89542414             mov dword ptr [esp + 0x14], edx
// 008ea339  d8f2                 fdiv st(2)
// 008ea33b  db442414             fild dword ptr [esp + 0x14]
// 008ea33f  def3                 fdivrp st(3)
// 008ea341  d8d2                 fcom st(2)
// 008ea343  dfe0                 fnstsw ax
// 008ea345  f6c441               test ah, 0x41
// 008ea348  7504                 jne 0x8ea34e
// 008ea34a  d9c0                 fld st(0)
// 008ea34c  eb02                 jmp 0x8ea350
// 008ea34e  d9c2                 fld st(2)
// 008ea350  d8da                 fcomp st(2)
// 008ea352  dfe0                 fnstsw ax
// 008ea354  f6c405               test ah, 5
// 008ea357  7a04                 jp 0x8ea35d
// 008ea359  d9c1                 fld st(1)
// 008ea35b  eb0f                 jmp 0x8ea36c
// 008ea35d  d8d2                 fcom st(2)
// 008ea35f  dfe0                 fnstsw ax
// 008ea361  f6c441               test ah, 0x41
// 008ea364  7504                 jne 0x8ea36a
// 008ea366  d9c0                 fld st(0)
// 008ea368  eb02                 jmp 0x8ea36c
// 008ea36a  d9c2                 fld st(2)
// 008ea36c  d9c9                 fxch st(1)
// 008ea36e  d8d3                 fcom st(3)
// 008ea370  dfe0                 fnstsw ax
// 008ea372  f6c405               test ah, 5
// 008ea375  7a04                 jp 0x8ea37b
// 008ea377  d9c0                 fld st(0)
// 008ea379  eb02                 jmp 0x8ea37d
// 008ea37b  d9c3                 fld st(3)
// 008ea37d  d8db                 fcomp st(3)
// 008ea37f  dfe0                 fnstsw ax
// 008ea381  f6c441               test ah, 0x41
// 008ea384  7417                 je 0x8ea39d
// 008ea386  ddda                 fstp st(2)
// 008ea388  d9c9                 fxch st(1)
// 008ea38a  d8d2                 fcom st(2)
// 008ea38c  dfe0                 fnstsw ax
// 008ea38e  f6c405               test ah, 5
// 008ea391  7a04                 jp 0x8ea397
// 008ea393  d9c0                 fld st(0)
// 008ea395  eb02                 jmp 0x8ea399
// 008ea397  d9c2                 fld st(2)
// 008ea399  d9ca                 fxch st(2)
// 008ea39b  d9c9                 fxch st(1)
// 008ea39d  d9c2                 fld st(2)
// 008ea39f  d8c2                 fadd st(2)
// 008ea3a1  d9c0                 fld st(0)
// 008ea3a3  dd0508afa700         fld qword ptr [0xa7af08]
// 008ea3a9  dcc9                 fmul st(1), st(0)
// 008ea3ab  d9c9                 fxch st(1)
// 008ea3ad  dd542408             fst qword ptr [esp + 8]
// 008ea3b1  d9c5                 fld st(5)
// 008ea3b3  dded                 fucomp st(5)
// 008ea3b5  dfe0                 fnstsw ax
// 008ea3b7  f6c444               test ah, 0x44
// 008ea3ba  7a39                 jp 0x8ea3f5
// 008ea3bc  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ea3c0  ddd9                 fstp st(1)
// 008ea3c2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ea3c6  dddc                 fstp st(4)
// 008ea3c8  ddda                 fstp st(2)
// 008ea3ca  c70000000000         mov dword ptr [eax], 0
// 008ea3d0  ddd8                 fstp st(0)
// 008ea3d2  c70100000000         mov dword ptr [ecx], 0
// 008ea3d8  ddd8                 fstp st(0)
// 008ea3da  ddd9                 fstp st(1)
// 008ea3dc  dd052891a600         fld qword ptr [0xa69128]
// 008ea3e2  dec9                 fmulp st(1)
// 008ea3e4  e84711f2ff           call 0x80b530
// 008ea3e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ea3ed  8902                 mov dword ptr [edx], eax
// 008ea3ef  83c410               add esp, 0x10
// 008ea3f2  c21000               ret 0x10
// 008ea3f5  ded9                 fcompp 
// 008ea3f7  dfe0                 fnstsw ax
// 008ea3f9  dd052810a700         fld qword ptr [0xa71028]
// 008ea3ff  f6c405               test ah, 5
// 008ea402  7a0a                 jp 0x8ea40e
// 008ea404  d9c3                 fld st(3)
// 008ea406  dee5                 fsubrp st(5)
// 008ea408  d9c4                 fld st(4)
// 008ea40a  def2                 fdivrp st(2)
// 008ea40c  eb14                 jmp 0x8ea422
// 008ea40e  ddd9                 fstp st(1)
// 008ea410  d9c2                 fld st(2)
// 008ea412  d8e4                 fsub st(4)
// 008ea414  d9c1                 fld st(1)
// 008ea416  d8e4                 fsub st(4)
// 008ea418  dee5                 fsubrp st(5)
// 008ea41a  d9c0                 fld st(0)
// 008ea41c  def5                 fdivrp st(5)
// 008ea41e  d9cc                 fxch st(4)
// 008ea420  d9c9                 fxch st(1)
// 008ea422  d9c3                 fld st(3)
// 008ea424  dd0424               fld qword ptr [esp]
// 008ea427  dde1                 fucom st(1)
// 008ea429  dfe0                 fnstsw ax
// 008ea42b  ddd9                 fstp st(1)
// 008ea42d  f6c444               test ah, 0x44
// 008ea430  7a0e                 jp 0x8ea440
// 008ea432  ddd8                 fstp st(0)
// 008ea434  dddb                 fstp st(3)
// 008ea436  ddda                 fstp st(2)
// 008ea438  dee3                 fsubrp st(3)
// 008ea43a  d9ca                 fxch st(2)
// 008ea43c  def1                 fdivrp st(1)
// 008ea43e  eb27                 jmp 0x8ea467
// 008ea440  d9cc                 fxch st(4)
// 008ea442  ddeb                 fucomp st(3)
// 008ea444  dfe0                 fnstsw ax
// 008ea446  f6c444               test ah, 0x44
// 008ea449  7a0e                 jp 0x8ea459
// 008ea44b  ddda                 fstp st(2)
// 008ea44d  d9cc                 fxch st(4)
// 008ea44f  dee2                 fsubrp st(2)
// 008ea451  d9c9                 fxch st(1)
// 008ea453  def2                 fdivrp st(2)
// 008ea455  dec1                 faddp st(1)
// 008ea457  eb0e                 jmp 0x8ea467
// 008ea459  dddd                 fstp st(5)
// 008ea45b  dddc                 fstp st(4)
// 008ea45d  dee9                 fsubp st(1)
// 008ea45f  def1                 fdivrp st(1)
// 008ea461  dc0590fba700         fadd qword ptr [0xa7fb90]
// 008ea467  dc35c893ad00         fdiv qword ptr [0xad93c8]
// 008ea46d  d9ee                 fldz 
// 008ea46f  d8d9                 fcomp st(1)
// 008ea471  dfe0                 fnstsw ax
// 008ea473  f6c441               test ah, 0x41
// 008ea476  7506                 jne 0x8ea47e
// 008ea478  dc058862a600         fadd qword ptr [0xa66288]
// 008ea47e  dd052891a600         fld qword ptr [0xa69128]
// 008ea484  dcc9                 fmul st(1), st(0)
// 008ea486  d9c9                 fxch st(1)
// 008ea488  e8a310f2ff           call 0x80b530
// 008ea48d  dcc9                 fmul st(1), st(0)
// 008ea48f  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ea493  d9c9                 fxch st(1)
// 008ea495  8902                 mov dword ptr [edx], eax
// 008ea497  e89410f2ff           call 0x80b530
// 008ea49c  dd442408             fld qword ptr [esp + 8]
// 008ea4a0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ea4a4  d9c9                 fxch st(1)
// 008ea4a6  dec9                 fmulp st(1)
// 008ea4a8  8901                 mov dword ptr [ecx], eax
// 008ea4aa  e88110f2ff           call 0x80b530
// 008ea4af  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ea4b3  8902                 mov dword ptr [edx], eax
// 008ea4b5  83c410               add esp, 0x10
// 008ea4b8  c21000               ret 0x10
// copied from an identical function in another client (function ?RGBtoHSL@CXTPColorPageCustom@@QAEXKPAH00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp