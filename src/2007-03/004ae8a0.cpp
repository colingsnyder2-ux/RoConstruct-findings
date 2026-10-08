// roc 2007-03 004ae8a0  unit: seg_004a0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ae8a0
//
// 004ae8a0  56                   push esi
// 004ae8a1  8bf1                 mov esi, ecx
// 004ae8a3  8b4604               mov eax, dword ptr [esi + 4]
// 004ae8a6  8b4008               mov eax, dword ptr [eax + 8]
// 004ae8a9  3b4604               cmp eax, dword ptr [esi + 4]
// 004ae8ac  894608               mov dword ptr [esi + 8], eax
// 004ae8af  741e                 je 0x4ae8cf
// 004ae8b1  57                   push edi
// 004ae8b2  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ae8b5  8b7908               mov edi, dword ptr [ecx + 8]
// 004ae8b8  8b5608               mov edx, dword ptr [esi + 8]
// 004ae8bb  52                   push edx
// 004ae8bc  e82ff81600           call 0x61e0f0
// 004ae8c1  8bc7                 mov eax, edi
// 004ae8c3  83c404               add esp, 4
// 004ae8c6  897e08               mov dword ptr [esi + 8], edi
// 004ae8c9  3b4604               cmp eax, dword ptr [esi + 4]
// 004ae8cc  75e4                 jne 0x4ae8b2
// 004ae8ce  5f                   pop edi
// 004ae8cf  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ae8d2  51                   push ecx
// 004ae8d3  e818f81600           call 0x61e0f0
// 004ae8d8  83c404               add esp, 4
// 004ae8db  5e                   pop esi
// 004ae8dc  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ??1?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
