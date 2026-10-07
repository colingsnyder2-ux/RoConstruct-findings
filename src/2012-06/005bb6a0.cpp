// roc 2012-06 005bb6a0  unit: RakNet::RakPeer  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb6a0
//
// 005bb6a0  6aff                 push -1
// 005bb6a2  685b0aab00           push 0xab0a5b
// 005bb6a7  64a100000000         mov eax, dword ptr fs:[0]
// 005bb6ad  50                   push eax
// 005bb6ae  64892500000000       mov dword ptr fs:[0], esp
// 005bb6b5  81ec14010000         sub esp, 0x114
// 005bb6bb  56                   push esi
// 005bb6bc  68d4050000           push 0x5d4
// 005bb6c1  8d4c2408             lea ecx, [esp + 8]
// 005bb6c5  e806bffaff           call 0x5675d0
// 005bb6ca  8bb42428010000       mov esi, dword ptr [esp + 0x128]
// 005bb6d1  c6460501             mov byte ptr [esi + 5], 1
// 005bb6d5  8a4604               mov al, byte ptr [esi + 4]
// 005bb6d8  c784242001000000000000 mov dword ptr [esp + 0x120], 0
// 005bb6e3  84c0                 test al, al
// 005bb6e5  754a                 jne 0x5bb731
// 005bb6e7  57                   push edi
// 005bb6e8  8dbe6c050000         lea edi, [esi + 0x56c]
// 005bb6ee  8bff                 mov edi, edi
// 005bb6f0  8b8664050000         mov eax, dword ptr [esi + 0x564]
// 005bb6f6  85c0                 test eax, eax
// 005bb6f8  740d                 je 0x5bb707
// 005bb6fa  8b8e68050000         mov ecx, dword ptr [esi + 0x568]
// 005bb700  51                   push ecx
// 005bb701  56                   push esi
// 005bb702  ffd0                 call eax
// 005bb704  83c408               add esp, 8
// 005bb707  8b16                 mov edx, dword ptr [esi]
// 005bb709  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 005bb70f  8d442408             lea eax, [esp + 8]
// 005bb713  50                   push eax
// 005bb714  6a00                 push 0
// 005bb716  6a00                 push 0
// 005bb718  6a00                 push 0
// 005bb71a  6a00                 push 0
// 005bb71c  8bce                 mov ecx, esi
// 005bb71e  ffd2                 call edx
// 005bb720  6a0a                 push 0xa
// 005bb722  8bcf                 mov ecx, edi
// 005bb724  e877dc0000           call 0x5c93a0
// 005bb729  8a4604               mov al, byte ptr [esi + 4]
// 005bb72c  84c0                 test al, al
// 005bb72e  74c0                 je 0x5bb6f0
// 005bb730  5f                   pop edi
// 005bb731  8d4c2404             lea ecx, [esp + 4]
// 005bb735  c6460500             mov byte ptr [esi + 5], 0
// 005bb739  c7842420010000ffffffff mov dword ptr [esp + 0x120], 0xffffffff
// 005bb744  e867bffaff           call 0x5676b0
// 005bb749  8b8c2418010000       mov ecx, dword ptr [esp + 0x118]
// 005bb750  33c0                 xor eax, eax
// 005bb752  5e                   pop esi
// 005bb753  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb75a  81c420010000         add esp, 0x120
// 005bb760  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ?UpdateNetworkLoop@RakNet@@YGIPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
