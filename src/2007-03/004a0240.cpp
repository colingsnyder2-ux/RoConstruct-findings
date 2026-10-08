// roc 2007-03 004a0240  unit: seg_004a0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0240
//
// 004a0240  53                   push ebx
// 004a0241  56                   push esi
// 004a0242  8bf1                 mov esi, ecx
// 004a0244  8b4604               mov eax, dword ptr [esi + 4]
// 004a0247  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a024b  57                   push edi
// 004a024c  8b38                 mov edi, dword ptr [eax]
// 004a024e  8b5704               mov edx, dword ptr [edi + 4]
// 004a0251  51                   push ecx
// 004a0252  52                   push edx
// 004a0253  57                   push edi
// 004a0254  8bce                 mov ecx, esi
// 004a0256  e875c3f8ff           call 0x42c5d0
// 004a025b  6a01                 push 1
// 004a025d  8bce                 mov ecx, esi
// 004a025f  8bd8                 mov ebx, eax
// 004a0261  e80ad4ffff           call 0x49d670
// 004a0266  895f04               mov dword ptr [edi + 4], ebx
// 004a0269  8b4304               mov eax, dword ptr [ebx + 4]
// 004a026c  5f                   pop edi
// 004a026d  5e                   pop esi
// 004a026e  8918                 mov dword ptr [eax], ebx
// 004a0270  5b                   pop ebx
// 004a0271  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?push_front@?$list@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@std@@QAEXABUChatMessage@Network@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
