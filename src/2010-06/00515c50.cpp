// roc 2010-06 00515c50  unit: RakPeer  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00515c50
//
// 00515c50  56                   push esi
// 00515c51  8bf1                 mov esi, ecx
// 00515c53  8b4604               mov eax, dword ptr [esi + 4]
// 00515c56  8b4008               mov eax, dword ptr [eax + 8]
// 00515c59  894608               mov dword ptr [esi + 8], eax
// 00515c5c  3b4604               cmp eax, dword ptr [esi + 4]
// 00515c5f  741e                 je 0x515c7f
// 00515c61  57                   push edi
// 00515c62  8b4e08               mov ecx, dword ptr [esi + 8]
// 00515c65  8b7908               mov edi, dword ptr [ecx + 8]
// 00515c68  8b5608               mov edx, dword ptr [esi + 8]
// 00515c6b  52                   push edx
// 00515c6c  e8291d2900           call 0x7a799a
// 00515c71  8bc7                 mov eax, edi
// 00515c73  83c404               add esp, 4
// 00515c76  897e08               mov dword ptr [esi + 8], edi
// 00515c79  3b4604               cmp eax, dword ptr [esi + 4]
// 00515c7c  75e4                 jne 0x515c62
// 00515c7e  5f                   pop edi
// 00515c7f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00515c82  51                   push ecx
// 00515c83  e8121d2900           call 0x7a799a
// 00515c88  83c404               add esp, 4
// 00515c8b  5e                   pop esi
// 00515c8c  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ??1?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
