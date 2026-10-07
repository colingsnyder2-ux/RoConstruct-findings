// roc 2012-06 005bbbf0  unit: RakNet::RakPeer  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bbbf0
//
// 005bbbf0  64a100000000         mov eax, dword ptr fs:[0]
// 005bbbf6  6aff                 push -1
// 005bbbf8  684b16ab00           push 0xab164b
// 005bbbfd  50                   push eax
// 005bbbfe  64892500000000       mov dword ptr fs:[0], esp
// 005bbc05  56                   push esi
// 005bbc06  57                   push edi
// 005bbc07  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005bbc0b  85ff                 test edi, edi
// 005bbc0d  744e                 je 0x5bbc5d
// 005bbc0f  33c9                 xor ecx, ecx
// 005bbc11  8bc7                 mov eax, edi
// 005bbc13  ba10000000           mov edx, 0x10
// 005bbc18  f7e2                 mul edx
// 005bbc1a  0f90c1               seto cl
// 005bbc1d  f7d9                 neg ecx
// 005bbc1f  0bc8                 or ecx, eax
// 005bbc21  51                   push ecx
// 005bbc22  e8c9673c00           call 0x9823f0
// 005bbc27  8bf0                 mov esi, eax
// 005bbc29  83c404               add esp, 4
// 005bbc2c  89742418             mov dword ptr [esp + 0x18], esi
// 005bbc30  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bbc38  85f6                 test esi, esi
// 005bbc3a  7421                 je 0x5bbc5d
// 005bbc3c  68e01c5600           push 0x561ce0
// 005bbc41  57                   push edi
// 005bbc42  6a10                 push 0x10
// 005bbc44  56                   push esi
// 005bbc45  e8d6b5eeff           call 0x4a7220
// 005bbc4a  8bc6                 mov eax, esi
// 005bbc4c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbc50  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbc57  5f                   pop edi
// 005bbc58  5e                   pop esi
// 005bbc59  83c40c               add esp, 0xc
// 005bbc5c  c3                   ret 
// 005bbc5d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbc61  5f                   pop edi
// 005bbc62  33c0                 xor eax, eax
// 005bbc64  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbc6b  5e                   pop esi
// 005bbc6c  83c40c               add esp, 0xc
// 005bbc6f  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??$OP_NEW_ARRAY@URakNetGUID@RakNet@@@RakNet@@YAPAURakNetGUID@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
