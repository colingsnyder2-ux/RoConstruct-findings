// roc 2008-06 004bc5c0  unit: ProfiledRakPeer  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bc5c0
//
// 004bc5c0  56                   push esi
// 004bc5c1  8bf1                 mov esi, ecx
// 004bc5c3  8b4608               mov eax, dword ptr [esi + 8]
// 004bc5c6  8b4808               mov ecx, dword ptr [eax + 8]
// 004bc5c9  8b5608               mov edx, dword ptr [esi + 8]
// 004bc5cc  894e0c               mov dword ptr [esi + 0xc], ecx
// 004bc5cf  8b4208               mov eax, dword ptr [edx + 8]
// 004bc5d2  b901000000           mov ecx, 1
// 004bc5d7  3b4608               cmp eax, dword ptr [esi + 8]
// 004bc5da  7433                 je 0x4bc60f
// 004bc5dc  8d642400             lea esp, [esp]
// 004bc5e0  8b4008               mov eax, dword ptr [eax + 8]
// 004bc5e3  41                   inc ecx
// 004bc5e4  3b4608               cmp eax, dword ptr [esi + 8]
// 004bc5e7  75f7                 jne 0x4bc5e0
// 004bc5e9  83f908               cmp ecx, 8
// 004bc5ec  7e21                 jle 0x4bc60f
// 004bc5ee  53                   push ebx
// 004bc5ef  57                   push edi
// 004bc5f0  8d59f8               lea ebx, [ecx - 8]
// 004bc5f3  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bc5f6  8b7808               mov edi, dword ptr [eax + 8]
// 004bc5f9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004bc5fc  51                   push ecx
// 004bc5fd  e878401e00           call 0x6a067a
// 004bc602  83c404               add esp, 4
// 004bc605  83eb01               sub ebx, 1
// 004bc608  897e0c               mov dword ptr [esi + 0xc], edi
// 004bc60b  75e6                 jne 0x4bc5f3
// 004bc60d  5f                   pop edi
// 004bc60e  5b                   pop ebx
// 004bc60f  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bc612  8b5608               mov edx, dword ptr [esi + 8]
// 004bc615  894208               mov dword ptr [edx + 8], eax
// 004bc618  8b4608               mov eax, dword ptr [esi + 8]
// 004bc61b  89460c               mov dword ptr [esi + 0xc], eax
// 004bc61e  8906                 mov dword ptr [esi], eax
// 004bc620  894604               mov dword ptr [esi + 4], eax
// 004bc623  33c0                 xor eax, eax
// 004bc625  894614               mov dword ptr [esi + 0x14], eax
// 004bc628  894610               mov dword ptr [esi + 0x10], eax
// 004bc62b  5e                   pop esi
// 004bc62c  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ?Clear@?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
