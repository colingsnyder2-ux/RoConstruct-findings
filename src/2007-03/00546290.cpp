// roc 2007-03 00546290  unit: seg_00540000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00546290
//
// 00546290  53                   push ebx
// 00546291  56                   push esi
// 00546292  8bf1                 mov esi, ecx
// 00546294  8b4604               mov eax, dword ptr [esi + 4]
// 00546297  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054629b  57                   push edi
// 0054629c  8b38                 mov edi, dword ptr [eax]
// 0054629e  8b5704               mov edx, dword ptr [edi + 4]
// 005462a1  51                   push ecx
// 005462a2  52                   push edx
// 005462a3  57                   push edi
// 005462a4  8bce                 mov ecx, esi
// 005462a6  e845f8ffff           call 0x545af0
// 005462ab  6a01                 push 1
// 005462ad  8bce                 mov ecx, esi
// 005462af  8bd8                 mov ebx, eax
// 005462b1  e8daf4ffff           call 0x545790
// 005462b6  895f04               mov dword ptr [edi + 4], ebx
// 005462b9  8b4304               mov eax, dword ptr [ebx + 4]
// 005462bc  5f                   pop edi
// 005462bd  5e                   pop esi
// 005462be  8918                 mov dword ptr [eax], ebx
// 005462c0  5b                   pop ebx
// 005462c1  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?push_front@?$list@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@std@@QAEXABUChatMessage@Network@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
