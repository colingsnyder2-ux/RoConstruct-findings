// roc 2007-03 0061db00  unit: seg_00610000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061db00
//
// 0061db00  83ec2c               sub esp, 0x2c
// 0061db03  f605d0778b0001       test byte ptr [0x8b77d0], 1
// 0061db0a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061db0e  d9400c               fld dword ptr [eax + 0xc]
// 0061db11  d944243c             fld dword ptr [esp + 0x3c]
// 0061db15  d9c0                 fld st(0)
// 0061db17  deca                 fmulp st(2)
// 0061db19  dd05584f7900         fld qword ptr [0x794f58]
// 0061db1f  dcca                 fmul st(2), st(0)
// 0061db21  d9ca                 fxch st(2)
// 0061db23  d95c2430             fstp dword ptr [esp + 0x30]
// 0061db27  d84804               fmul dword ptr [eax + 4]
// 0061db2a  dec9                 fmulp st(1)
// 0061db2c  d91c24               fstp dword ptr [esp]
// 0061db2f  d9ee                 fldz 
// 0061db31  d9542404             fst dword ptr [esp + 4]
// 0061db35  d95c2408             fstp dword ptr [esp + 8]
// 0061db39  7514                 jne 0x61db4f
// 0061db3b  a128e67700           mov eax, dword ptr [0x77e628]
// 0061db40  830dd0778b0001       or dword ptr [0x8b77d0], 1
// 0061db47  dd00                 fld qword ptr [eax]
// 0061db49  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 0061db4f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0061db53  d9442430             fld dword ptr [esp + 0x30]
// 0061db57  68842c8c00           push 0x8c2c84
// 0061db5c  51                   push ecx
// 0061db5d  83ec08               sub esp, 8
// 0061db60  dd1c24               fstp qword ptr [esp]
// 0061db63  8d542410             lea edx, [esp + 0x10]
// 0061db67  52                   push edx
// 0061db68  68d4b08b00           push 0x8bb0d4
// 0061db6d  8d4c2424             lea ecx, [esp + 0x24]
// 0061db71  e89a10f0ff           call 0x51ec10
// 0061db76  50                   push eax
// 0061db77  8b442440             mov eax, dword ptr [esp + 0x40]
// 0061db7b  8d4810               lea ecx, [eax + 0x10]
// 0061db7e  51                   push ecx
// 0061db7f  83c004               add eax, 4
// 0061db82  50                   push eax
// 0061db83  e838c81100           call 0x73a3c0
// 0061db88  dc1dc8778b00         fcomp qword ptr [0x8b77c8]
// 0061db8e  83c414               add esp, 0x14
// 0061db91  dfe0                 fnstsw ax
// 0061db93  f6c444               test ah, 0x44
// 0061db96  7b09                 jnp 0x61dba1
// 0061db98  b801000000           mov eax, 1
// 0061db9d  83c42c               add esp, 0x2c
// 0061dba0  c3                   ret 
// 0061dba1  33c0                 xor eax, eax
// 0061dba3  83c42c               add esp, 0x2c
// 0061dba6  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTestCylinder@HitTest@RBX@@CA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp
