// roc 2007-08 004ba310  unit: RakPeer  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba310
//
// 004ba310  53                   push ebx
// 004ba311  56                   push esi
// 004ba312  8bf1                 mov esi, ecx
// 004ba314  8d9e84020000         lea ebx, [esi + 0x284]
// 004ba31a  57                   push edi
// 004ba31b  8bcb                 mov ecx, ebx
// 004ba31d  33ff                 xor edi, edi
// 004ba31f  e86c701b00           call 0x671390
// 004ba324  39bea0020000         cmp dword ptr [esi + 0x2a0], edi
// 004ba32a  7632                 jbe 0x4ba35e
// 004ba32c  8d642400             lea esp, [esp]
// 004ba330  8b869c020000         mov eax, dword ptr [esi + 0x29c]
// 004ba336  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 004ba339  8b11                 mov edx, dword ptr [ecx]
// 004ba33b  52                   push edx
// 004ba33c  e821591700           call 0x62fc62
// 004ba341  8b869c020000         mov eax, dword ptr [esi + 0x29c]
// 004ba347  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 004ba34a  51                   push ecx
// 004ba34b  e812591700           call 0x62fc62
// 004ba350  83c701               add edi, 1
// 004ba353  83c408               add esp, 8
// 004ba356  3bbea0020000         cmp edi, dword ptr [esi + 0x2a0]
// 004ba35c  72d2                 jb 0x4ba330
// 004ba35e  8b86a4020000         mov eax, dword ptr [esi + 0x2a4]
// 004ba364  85c0                 test eax, eax
// 004ba366  7434                 je 0x4ba39c
// 004ba368  3d00020000           cmp eax, 0x200
// 004ba36d  7623                 jbe 0x4ba392
// 004ba36f  8b969c020000         mov edx, dword ptr [esi + 0x29c]
// 004ba375  52                   push edx
// 004ba376  e8e7581700           call 0x62fc62
// 004ba37b  83c404               add esp, 4
// 004ba37e  c786a402000000000000 mov dword ptr [esi + 0x2a4], 0
// 004ba388  c7869c02000000000000 mov dword ptr [esi + 0x29c], 0
// 004ba392  c786a002000000000000 mov dword ptr [esi + 0x2a0], 0
// 004ba39c  5f                   pop edi
// 004ba39d  5e                   pop esi
// 004ba39e  8bcb                 mov ecx, ebx
// 004ba3a0  5b                   pop ebx
// 004ba3a1  e92afe0000           jmp 0x4ca1d0
// library openrbx-raknet/RakPeer.cpp (function ?ClearBanList@RakPeer@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
