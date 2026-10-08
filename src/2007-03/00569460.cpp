// roc 2007-03 00569460  unit: seg_00560000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00569460
//
// 00569460  56                   push esi
// 00569461  8bf1                 mov esi, ecx
// 00569463  8b4e04               mov ecx, dword ptr [esi + 4]
// 00569466  8b01                 mov eax, dword ptr [ecx]
// 00569468  8909                 mov dword ptr [ecx], ecx
// 0056946a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056946d  894904               mov dword ptr [ecx + 4], ecx
// 00569470  3b4604               cmp eax, dword ptr [esi + 4]
// 00569473  c7460800000000       mov dword ptr [esi + 8], 0
// 0056947a  7417                 je 0x569493
// 0056947c  57                   push edi
// 0056947d  8d4900               lea ecx, [ecx]
// 00569480  8b38                 mov edi, dword ptr [eax]
// 00569482  50                   push eax
// 00569483  e8684c0b00           call 0x61e0f0
// 00569488  83c404               add esp, 4
// 0056948b  3b7e04               cmp edi, dword ptr [esi + 4]
// 0056948e  8bc7                 mov eax, edi
// 00569490  75ee                 jne 0x569480
// 00569492  5f                   pop edi
// 00569493  8b4604               mov eax, dword ptr [esi + 4]
// 00569496  50                   push eax
// 00569497  e8544c0b00           call 0x61e0f0
// 0056949c  83c404               add esp, 4
// 0056949f  c7460400000000       mov dword ptr [esi + 4], 0
// 005694a6  5e                   pop esi
// 005694a7  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Tidy@?$list@PAVFlagStand@RBX@@V?$allocator@PAVFlagStand@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
