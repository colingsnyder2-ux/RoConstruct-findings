// roc 2012-06 005bb820  unit: RakNet::RakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb820
//
// 005bb820  64a100000000         mov eax, dword ptr fs:[0]
// 005bb826  6aff                 push -1
// 005bb828  684b16ab00           push 0xab164b
// 005bb82d  50                   push eax
// 005bb82e  64892500000000       mov dword ptr fs:[0], esp
// 005bb835  56                   push esi
// 005bb836  8b742414             mov esi, dword ptr [esp + 0x14]
// 005bb83a  57                   push edi
// 005bb83b  85f6                 test esi, esi
// 005bb83d  7462                 je 0x5bb8a1
// 005bb83f  33c9                 xor ecx, ecx
// 005bb841  8bc6                 mov eax, esi
// 005bb843  ba04000000           mov edx, 4
// 005bb848  f7e2                 mul edx
// 005bb84a  0f90c1               seto cl
// 005bb84d  f7d9                 neg ecx
// 005bb84f  0bc8                 or ecx, eax
// 005bb851  33c0                 xor eax, eax
// 005bb853  83c104               add ecx, 4
// 005bb856  0f92c0               setb al
// 005bb859  f7d8                 neg eax
// 005bb85b  0bc1                 or eax, ecx
// 005bb85d  50                   push eax
// 005bb85e  e88d6b3c00           call 0x9823f0
// 005bb863  83c404               add esp, 4
// 005bb866  89442418             mov dword ptr [esp + 0x18], eax
// 005bb86a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bb872  85c0                 test eax, eax
// 005bb874  742b                 je 0x5bb8a1
// 005bb876  68807e5a00           push 0x5a7e80
// 005bb87b  6870795a00           push 0x5a7970
// 005bb880  56                   push esi
// 005bb881  8d7804               lea edi, [eax + 4]
// 005bb884  6a04                 push 4
// 005bb886  57                   push edi
// 005bb887  8930                 mov dword ptr [eax], esi
// 005bb889  e8ec7a3c00           call 0x98337a
// 005bb88e  8bc7                 mov eax, edi
// 005bb890  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bb894  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb89b  5f                   pop edi
// 005bb89c  5e                   pop esi
// 005bb89d  83c40c               add esp, 0xc
// 005bb8a0  c3                   ret 
// 005bb8a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bb8a5  5f                   pop edi
// 005bb8a6  33c0                 xor eax, eax
// 005bb8a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb8af  5e                   pop esi
// 005bb8b0  83c40c               add esp, 0xc
// 005bb8b3  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??$OP_NEW_ARRAY@VRakString@RakNet@@@RakNet@@YAPAVRakString@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
