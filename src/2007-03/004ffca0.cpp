// roc 2007-03 004ffca0  unit: seg_004f0000  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ffca0
//
// 004ffca0  85f6                 test esi, esi
// 004ffca2  0f84c4000000         je 0x4ffd6c
// 004ffca8  57                   push edi
// 004ffca9  8b3dace97700         mov edi, dword ptr [0x77e9ac]
// 004ffcaf  53                   push ebx
// 004ffcb0  68a43d7800           push 0x783da4
// 004ffcb5  56                   push esi
// 004ffcb6  ffd7                 call edi
// 004ffcb8  83c40c               add esp, 0xc
// 004ffcbb  85c0                 test eax, eax
// 004ffcbd  7507                 jne 0x4ffcc6
// 004ffcbf  b800000080           mov eax, 0x80000000
// 004ffcc4  5f                   pop edi
// 004ffcc5  c3                   ret 
// 004ffcc6  53                   push ebx
// 004ffcc7  68143e7800           push 0x783e14
// 004ffccc  56                   push esi
// 004ffccd  ffd7                 call edi
// 004ffccf  83c40c               add esp, 0xc
// 004ffcd2  85c0                 test eax, eax
// 004ffcd4  7507                 jne 0x4ffcdd
// 004ffcd6  b805000080           mov eax, 0x80000005
// 004ffcdb  5f                   pop edi
// 004ffcdc  c3                   ret 
// 004ffcdd  53                   push ebx
// 004ffcde  68b83d7800           push 0x783db8
// 004ffce3  56                   push esi
// 004ffce4  ffd7                 call edi
// 004ffce6  83c40c               add esp, 0xc
// 004ffce9  85c0                 test eax, eax
// 004ffceb  7507                 jne 0x4ffcf4
// 004ffced  b801000080           mov eax, 0x80000001
// 004ffcf2  5f                   pop edi
// 004ffcf3  c3                   ret 
// 004ffcf4  53                   push ebx
// 004ffcf5  68cc3d7800           push 0x783dcc
// 004ffcfa  56                   push esi
// 004ffcfb  ffd7                 call edi
// 004ffcfd  83c40c               add esp, 0xc
// 004ffd00  85c0                 test eax, eax
// 004ffd02  7507                 jne 0x4ffd0b
// 004ffd04  b802000080           mov eax, 0x80000002
// 004ffd09  5f                   pop edi
// 004ffd0a  c3                   ret 
// 004ffd0b  53                   push ebx
// 004ffd0c  68ec3d7800           push 0x783dec
// 004ffd11  56                   push esi
// 004ffd12  ffd7                 call edi
// 004ffd14  83c40c               add esp, 0xc
// 004ffd17  85c0                 test eax, eax
// 004ffd19  7507                 jne 0x4ffd22
// 004ffd1b  b804000080           mov eax, 0x80000004
// 004ffd20  5f                   pop edi
// 004ffd21  c3                   ret 
// 004ffd22  53                   push ebx
// 004ffd23  6890037a00           push 0x7a0390
// 004ffd28  56                   push esi
// 004ffd29  ffd7                 call edi
// 004ffd2b  83c40c               add esp, 0xc
// 004ffd2e  85c0                 test eax, eax
// 004ffd30  7507                 jne 0x4ffd39
// 004ffd32  b860000080           mov eax, 0x80000060
// 004ffd37  5f                   pop edi
// 004ffd38  c3                   ret 
// 004ffd39  53                   push ebx
// 004ffd3a  6878037a00           push 0x7a0378
// 004ffd3f  56                   push esi
// 004ffd40  ffd7                 call edi
// 004ffd42  83c40c               add esp, 0xc
// 004ffd45  85c0                 test eax, eax
// 004ffd47  7507                 jne 0x4ffd50
// 004ffd49  b850000080           mov eax, 0x80000050
// 004ffd4e  5f                   pop edi
// 004ffd4f  c3                   ret 
// 004ffd50  53                   push ebx
// 004ffd51  68a43d7800           push 0x783da4
// 004ffd56  56                   push esi
// 004ffd57  ffd7                 call edi
// 004ffd59  83c40c               add esp, 0xc
// 004ffd5c  f7d8                 neg eax
// 004ffd5e  1bc0                 sbb eax, eax
// 004ffd60  2500000080           and eax, 0x80000000
// 004ffd65  0500000080           add eax, 0x80000000
// 004ffd6a  5f                   pop edi
// 004ffd6b  c3                   ret 
// 004ffd6c  33c0                 xor eax, eax
// 004ffd6e  c3                   ret 
// library rbxgs-g3d/G3Dcpp\RegistryUtil.cpp (function ?getKeyFromString@G3D@@YAPAUHKEY__@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/RegistryUtil.cpp
