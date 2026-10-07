// roc 2011-06 0052e660  unit: RBX::Network::ProfiledRakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e660
//
// 0052e660  64a100000000         mov eax, dword ptr fs:[0]
// 0052e666  6aff                 push -1
// 0052e668  685be19d00           push 0x9de15b
// 0052e66d  50                   push eax
// 0052e66e  64892500000000       mov dword ptr fs:[0], esp
// 0052e675  56                   push esi
// 0052e676  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052e67a  57                   push edi
// 0052e67b  85f6                 test esi, esi
// 0052e67d  7462                 je 0x52e6e1
// 0052e67f  33c9                 xor ecx, ecx
// 0052e681  8bc6                 mov eax, esi
// 0052e683  ba10000000           mov edx, 0x10
// 0052e688  f7e2                 mul edx
// 0052e68a  0f90c1               seto cl
// 0052e68d  f7d9                 neg ecx
// 0052e68f  0bc8                 or ecx, eax
// 0052e691  33c0                 xor eax, eax
// 0052e693  83c104               add ecx, 4
// 0052e696  0f92c0               setb al
// 0052e699  f7d8                 neg eax
// 0052e69b  0bc1                 or eax, ecx
// 0052e69d  50                   push eax
// 0052e69e  e89dbc2d00           call 0x80a340
// 0052e6a3  83c404               add esp, 4
// 0052e6a6  89442418             mov dword ptr [esp + 0x18], eax
// 0052e6aa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052e6b2  85c0                 test eax, eax
// 0052e6b4  742b                 je 0x52e6e1
// 0052e6b6  6840b68600           push 0x86b640
// 0052e6bb  6820c14200           push 0x42c120
// 0052e6c0  56                   push esi
// 0052e6c1  8d7804               lea edi, [eax + 4]
// 0052e6c4  6a10                 push 0x10
// 0052e6c6  57                   push edi
// 0052e6c7  8930                 mov dword ptr [eax], esi
// 0052e6c9  e822cc2d00           call 0x80b2f0
// 0052e6ce  8bc7                 mov eax, edi
// 0052e6d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e6d4  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e6db  5f                   pop edi
// 0052e6dc  5e                   pop esi
// 0052e6dd  83c40c               add esp, 0xc
// 0052e6e0  c3                   ret 
// 0052e6e1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e6e5  5f                   pop edi
// 0052e6e6  33c0                 xor eax, eax
// 0052e6e8  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e6ef  5e                   pop esi
// 0052e6f0  83c40c               add esp, 0xc
// 0052e6f3  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??$OP_NEW_ARRAY@UTimeAndValue2@BPSTracker@RakNet@@@RakNet@@YAPAUTimeAndValue2@BPSTracker@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
