// roc 2007-08 005598a0  unit: RBX::DataModel  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005598a0
//
// 005598a0  53                   push ebx
// 005598a1  8bd9                 mov ebx, ecx
// 005598a3  56                   push esi
// 005598a4  8b7304               mov esi, dword ptr [ebx + 4]
// 005598a7  85f6                 test esi, esi
// 005598a9  7424                 je 0x5598cf
// 005598ab  57                   push edi
// 005598ac  8b7b08               mov edi, dword ptr [ebx + 8]
// 005598af  3bf7                 cmp esi, edi
// 005598b1  740f                 je 0x5598c2
// 005598b3  8bce                 mov ecx, esi
// 005598b5  ff15ace67700         call dword ptr [0x77e6ac]
// 005598bb  83c624               add esi, 0x24
// 005598be  3bf7                 cmp esi, edi
// 005598c0  75f1                 jne 0x5598b3
// 005598c2  8b4304               mov eax, dword ptr [ebx + 4]
// 005598c5  50                   push eax
// 005598c6  e897630d00           call 0x62fc62
// 005598cb  83c404               add esp, 4
// 005598ce  5f                   pop edi
// 005598cf  5e                   pop esi
// 005598d0  c7430400000000       mov dword ptr [ebx + 4], 0
// 005598d7  c7430800000000       mov dword ptr [ebx + 8], 0
// 005598de  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 005598e5  5b                   pop ebx
// 005598e6  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?_Tidy@?$vector@UStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@V?$allocator@UStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
