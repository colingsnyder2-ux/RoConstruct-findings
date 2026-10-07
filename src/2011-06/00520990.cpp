// roc 2011-06 00520990  unit: RBX::Network::ProfiledRakPeer  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00520990
//
// 00520990  64a100000000         mov eax, dword ptr fs:[0]
// 00520996  6aff                 push -1
// 00520998  685be19d00           push 0x9de15b
// 0052099d  50                   push eax
// 0052099e  64892500000000       mov dword ptr fs:[0], esp
// 005209a5  56                   push esi
// 005209a6  57                   push edi
// 005209a7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005209ab  85ff                 test edi, edi
// 005209ad  744e                 je 0x5209fd
// 005209af  33c9                 xor ecx, ecx
// 005209b1  8bc7                 mov eax, edi
// 005209b3  ba10000000           mov edx, 0x10
// 005209b8  f7e2                 mul edx
// 005209ba  0f90c1               seto cl
// 005209bd  f7d9                 neg ecx
// 005209bf  0bc8                 or ecx, eax
// 005209c1  51                   push ecx
// 005209c2  e879992e00           call 0x80a340
// 005209c7  8bf0                 mov esi, eax
// 005209c9  83c404               add esp, 4
// 005209cc  89742418             mov dword ptr [esp + 0x18], esi
// 005209d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005209d8  85f6                 test esi, esi
// 005209da  7421                 je 0x5209fd
// 005209dc  68206a4c00           push 0x4c6a20
// 005209e1  57                   push edi
// 005209e2  6a10                 push 0x10
// 005209e4  56                   push esi
// 005209e5  e8c639eeff           call 0x4043b0
// 005209ea  8bc6                 mov eax, esi
// 005209ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005209f0  64890d00000000       mov dword ptr fs:[0], ecx
// 005209f7  5f                   pop edi
// 005209f8  5e                   pop esi
// 005209f9  83c40c               add esp, 0xc
// 005209fc  c3                   ret 
// 005209fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00520a01  5f                   pop edi
// 00520a02  33c0                 xor eax, eax
// 00520a04  64890d00000000       mov dword ptr fs:[0], ecx
// 00520a0b  5e                   pop esi
// 00520a0c  83c40c               add esp, 0xc
// 00520a0f  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??$OP_NEW_ARRAY@URakNetGUID@RakNet@@@RakNet@@YAPAURakNetGUID@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
