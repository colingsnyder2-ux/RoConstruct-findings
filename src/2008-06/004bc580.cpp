// roc 2008-06 004bc580  unit: ProfiledRakPeer  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bc580
//
// 004bc580  56                   push esi
// 004bc581  8bf1                 mov esi, ecx
// 004bc583  8b4604               mov eax, dword ptr [esi + 4]
// 004bc586  8b4008               mov eax, dword ptr [eax + 8]
// 004bc589  894608               mov dword ptr [esi + 8], eax
// 004bc58c  3b4604               cmp eax, dword ptr [esi + 4]
// 004bc58f  741e                 je 0x4bc5af
// 004bc591  57                   push edi
// 004bc592  8b4e08               mov ecx, dword ptr [esi + 8]
// 004bc595  8b7908               mov edi, dword ptr [ecx + 8]
// 004bc598  8b5608               mov edx, dword ptr [esi + 8]
// 004bc59b  52                   push edx
// 004bc59c  e8d9401e00           call 0x6a067a
// 004bc5a1  8bc7                 mov eax, edi
// 004bc5a3  83c404               add esp, 4
// 004bc5a6  897e08               mov dword ptr [esi + 8], edi
// 004bc5a9  3b4604               cmp eax, dword ptr [esi + 4]
// 004bc5ac  75e4                 jne 0x4bc592
// 004bc5ae  5f                   pop edi
// 004bc5af  8b4e08               mov ecx, dword ptr [esi + 8]
// 004bc5b2  51                   push ecx
// 004bc5b3  e8c2401e00           call 0x6a067a
// 004bc5b8  83c404               add esp, 4
// 004bc5bb  5e                   pop esi
// 004bc5bc  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ??1?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
