// roc 2007-08 004b9740  unit: RakPeer  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9740
//
// 004b9740  56                   push esi
// 004b9741  8bf1                 mov esi, ecx
// 004b9743  8b4604               mov eax, dword ptr [esi + 4]
// 004b9746  8b4008               mov eax, dword ptr [eax + 8]
// 004b9749  3b4604               cmp eax, dword ptr [esi + 4]
// 004b974c  894608               mov dword ptr [esi + 8], eax
// 004b974f  741e                 je 0x4b976f
// 004b9751  57                   push edi
// 004b9752  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9755  8b7908               mov edi, dword ptr [ecx + 8]
// 004b9758  8b5608               mov edx, dword ptr [esi + 8]
// 004b975b  52                   push edx
// 004b975c  e801651700           call 0x62fc62
// 004b9761  8bc7                 mov eax, edi
// 004b9763  83c404               add esp, 4
// 004b9766  897e08               mov dword ptr [esi + 8], edi
// 004b9769  3b4604               cmp eax, dword ptr [esi + 4]
// 004b976c  75e4                 jne 0x4b9752
// 004b976e  5f                   pop edi
// 004b976f  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9772  51                   push ecx
// 004b9773  e8ea641700           call 0x62fc62
// 004b9778  83c404               add esp, 4
// 004b977b  5e                   pop esi
// 004b977c  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ??1?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
