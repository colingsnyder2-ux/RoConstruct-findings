// roc 2012-06 005bf2f0  unit: RakNet::RakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bf2f0
//
// 005bf2f0  64a100000000         mov eax, dword ptr fs:[0]
// 005bf2f6  6aff                 push -1
// 005bf2f8  684b16ab00           push 0xab164b
// 005bf2fd  50                   push eax
// 005bf2fe  64892500000000       mov dword ptr fs:[0], esp
// 005bf305  56                   push esi
// 005bf306  8b742414             mov esi, dword ptr [esp + 0x14]
// 005bf30a  57                   push edi
// 005bf30b  85f6                 test esi, esi
// 005bf30d  7462                 je 0x5bf371
// 005bf30f  33c9                 xor ecx, ecx
// 005bf311  8bc6                 mov eax, esi
// 005bf313  ba08000000           mov edx, 8
// 005bf318  f7e2                 mul edx
// 005bf31a  0f90c1               seto cl
// 005bf31d  f7d9                 neg ecx
// 005bf31f  0bc8                 or ecx, eax
// 005bf321  33c0                 xor eax, eax
// 005bf323  83c104               add ecx, 4
// 005bf326  0f92c0               setb al
// 005bf329  f7d8                 neg eax
// 005bf32b  0bc1                 or eax, ecx
// 005bf32d  50                   push eax
// 005bf32e  e8bd303c00           call 0x9823f0
// 005bf333  83c404               add esp, 4
// 005bf336  89442418             mov dword ptr [esp + 0x18], eax
// 005bf33a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bf342  85c0                 test eax, eax
// 005bf344  742b                 je 0x5bf371
// 005bf346  68e0ed5b00           push 0x5bede0
// 005bf34b  6850ce4700           push 0x47ce50
// 005bf350  56                   push esi
// 005bf351  8d7804               lea edi, [eax + 4]
// 005bf354  6a08                 push 8
// 005bf356  57                   push edi
// 005bf357  8930                 mov dword ptr [eax], esi
// 005bf359  e81c403c00           call 0x98337a
// 005bf35e  8bc7                 mov eax, edi
// 005bf360  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bf364  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf36b  5f                   pop edi
// 005bf36c  5e                   pop esi
// 005bf36d  83c40c               add esp, 0xc
// 005bf370  c3                   ret 
// 005bf371  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bf375  5f                   pop edi
// 005bf376  33c0                 xor eax, eax
// 005bf378  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf37f  5e                   pop esi
// 005bf380  83c40c               add esp, 0xc
// 005bf383  c3                   ret 
// library rbx2016-raknet/CloudCommon.cpp (function ??$OP_NEW_ARRAY@UCloudKey@RakNet@@@RakNet@@YAPAUCloudKey@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
