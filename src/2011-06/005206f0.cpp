// roc 2011-06 005206f0  unit: RBX::Network::ProfiledRakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005206f0
//
// 005206f0  64a100000000         mov eax, dword ptr fs:[0]
// 005206f6  6aff                 push -1
// 005206f8  685be19d00           push 0x9de15b
// 005206fd  50                   push eax
// 005206fe  64892500000000       mov dword ptr fs:[0], esp
// 00520705  56                   push esi
// 00520706  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052070a  57                   push edi
// 0052070b  85f6                 test esi, esi
// 0052070d  7462                 je 0x520771
// 0052070f  33c9                 xor ecx, ecx
// 00520711  8bc6                 mov eax, esi
// 00520713  ba04000000           mov edx, 4
// 00520718  f7e2                 mul edx
// 0052071a  0f90c1               seto cl
// 0052071d  f7d9                 neg ecx
// 0052071f  0bc8                 or ecx, eax
// 00520721  33c0                 xor eax, eax
// 00520723  83c104               add ecx, 4
// 00520726  0f92c0               setb al
// 00520729  f7d8                 neg eax
// 0052072b  0bc1                 or eax, ecx
// 0052072d  50                   push eax
// 0052072e  e80d9c2e00           call 0x80a340
// 00520733  83c404               add esp, 4
// 00520736  89442418             mov dword ptr [esp + 0x18], eax
// 0052073a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00520742  85c0                 test eax, eax
// 00520744  742b                 je 0x520771
// 00520746  6840695100           push 0x516940
// 0052074b  6830645100           push 0x516430
// 00520750  56                   push esi
// 00520751  8d7804               lea edi, [eax + 4]
// 00520754  6a04                 push 4
// 00520756  57                   push edi
// 00520757  8930                 mov dword ptr [eax], esi
// 00520759  e892ab2e00           call 0x80b2f0
// 0052075e  8bc7                 mov eax, edi
// 00520760  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00520764  64890d00000000       mov dword ptr fs:[0], ecx
// 0052076b  5f                   pop edi
// 0052076c  5e                   pop esi
// 0052076d  83c40c               add esp, 0xc
// 00520770  c3                   ret 
// 00520771  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00520775  5f                   pop edi
// 00520776  33c0                 xor eax, eax
// 00520778  64890d00000000       mov dword ptr fs:[0], ecx
// 0052077f  5e                   pop esi
// 00520780  83c40c               add esp, 0xc
// 00520783  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??$OP_NEW_ARRAY@VRakString@RakNet@@@RakNet@@YAPAVRakString@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
