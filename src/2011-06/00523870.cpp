// roc 2011-06 00523870  unit: RBX::Network::ProfiledRakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00523870
//
// 00523870  64a100000000         mov eax, dword ptr fs:[0]
// 00523876  6aff                 push -1
// 00523878  685be19d00           push 0x9de15b
// 0052387d  50                   push eax
// 0052387e  64892500000000       mov dword ptr fs:[0], esp
// 00523885  56                   push esi
// 00523886  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052388a  57                   push edi
// 0052388b  85f6                 test esi, esi
// 0052388d  7462                 je 0x5238f1
// 0052388f  33c9                 xor ecx, ecx
// 00523891  8bc6                 mov eax, esi
// 00523893  ba08000000           mov edx, 8
// 00523898  f7e2                 mul edx
// 0052389a  0f90c1               seto cl
// 0052389d  f7d9                 neg ecx
// 0052389f  0bc8                 or ecx, eax
// 005238a1  33c0                 xor eax, eax
// 005238a3  83c104               add ecx, 4
// 005238a6  0f92c0               setb al
// 005238a9  f7d8                 neg eax
// 005238ab  0bc1                 or eax, ecx
// 005238ad  50                   push eax
// 005238ae  e88d6a2e00           call 0x80a340
// 005238b3  83c404               add esp, 4
// 005238b6  89442418             mov dword ptr [esp + 0x18], eax
// 005238ba  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005238c2  85c0                 test eax, eax
// 005238c4  742b                 je 0x5238f1
// 005238c6  6800f45000           push 0x50f400
// 005238cb  6810a34000           push 0x40a310
// 005238d0  56                   push esi
// 005238d1  8d7804               lea edi, [eax + 4]
// 005238d4  6a08                 push 8
// 005238d6  57                   push edi
// 005238d7  8930                 mov dword ptr [eax], esi
// 005238d9  e8127a2e00           call 0x80b2f0
// 005238de  8bc7                 mov eax, edi
// 005238e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005238e4  64890d00000000       mov dword ptr fs:[0], ecx
// 005238eb  5f                   pop edi
// 005238ec  5e                   pop esi
// 005238ed  83c40c               add esp, 0xc
// 005238f0  c3                   ret 
// 005238f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005238f5  5f                   pop edi
// 005238f6  33c0                 xor eax, eax
// 005238f8  64890d00000000       mov dword ptr fs:[0], ecx
// 005238ff  5e                   pop esi
// 00523900  83c40c               add esp, 0xc
// 00523903  c3                   ret 
// library rbx2016-raknet/CloudCommon.cpp (function ??$OP_NEW_ARRAY@UCloudKey@RakNet@@@RakNet@@YAPAUCloudKey@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
