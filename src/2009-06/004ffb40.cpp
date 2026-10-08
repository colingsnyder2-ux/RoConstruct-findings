// roc 2009-06 004ffb40  unit: RakPeer  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ffb40
//
// 004ffb40  56                   push esi
// 004ffb41  8bf1                 mov esi, ecx
// 004ffb43  8b4604               mov eax, dword ptr [esi + 4]
// 004ffb46  8b4008               mov eax, dword ptr [eax + 8]
// 004ffb49  894608               mov dword ptr [esi + 8], eax
// 004ffb4c  3b4604               cmp eax, dword ptr [esi + 4]
// 004ffb4f  741e                 je 0x4ffb6f
// 004ffb51  57                   push edi
// 004ffb52  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ffb55  8b7908               mov edi, dword ptr [ecx + 8]
// 004ffb58  8b5608               mov edx, dword ptr [esi + 8]
// 004ffb5b  52                   push edx
// 004ffb5c  e8d18e2100           call 0x718a32
// 004ffb61  8bc7                 mov eax, edi
// 004ffb63  83c404               add esp, 4
// 004ffb66  897e08               mov dword ptr [esi + 8], edi
// 004ffb69  3b4604               cmp eax, dword ptr [esi + 4]
// 004ffb6c  75e4                 jne 0x4ffb52
// 004ffb6e  5f                   pop edi
// 004ffb6f  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ffb72  51                   push ecx
// 004ffb73  e8ba8e2100           call 0x718a32
// 004ffb78  83c404               add esp, 4
// 004ffb7b  5e                   pop esi
// 004ffb7c  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ??1?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
