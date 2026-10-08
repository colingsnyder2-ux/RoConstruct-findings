// roc 2007-03 00559d60  unit: seg_00550000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00559d60
//
// 00559d60  53                   push ebx
// 00559d61  8bd9                 mov ebx, ecx
// 00559d63  56                   push esi
// 00559d64  8b7304               mov esi, dword ptr [ebx + 4]
// 00559d67  85f6                 test esi, esi
// 00559d69  7424                 je 0x559d8f
// 00559d6b  57                   push edi
// 00559d6c  8b7b08               mov edi, dword ptr [ebx + 8]
// 00559d6f  3bf7                 cmp esi, edi
// 00559d71  740f                 je 0x559d82
// 00559d73  8bce                 mov ecx, esi
// 00559d75  ff158ce77700         call dword ptr [0x77e78c]
// 00559d7b  83c624               add esi, 0x24
// 00559d7e  3bf7                 cmp esi, edi
// 00559d80  75f1                 jne 0x559d73
// 00559d82  8b4304               mov eax, dword ptr [ebx + 4]
// 00559d85  50                   push eax
// 00559d86  e865430c00           call 0x61e0f0
// 00559d8b  83c404               add esp, 4
// 00559d8e  5f                   pop edi
// 00559d8f  5e                   pop esi
// 00559d90  c7430400000000       mov dword ptr [ebx + 4], 0
// 00559d97  c7430800000000       mov dword ptr [ebx + 8], 0
// 00559d9e  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 00559da5  5b                   pop ebx
// 00559da6  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?_Tidy@?$vector@UStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@V?$allocator@UStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
