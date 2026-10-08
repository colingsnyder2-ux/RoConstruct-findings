// roc 2007-03 0040a690  unit: seg_00400000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040a690
//
// 0040a690  53                   push ebx
// 0040a691  8bd9                 mov ebx, ecx
// 0040a693  56                   push esi
// 0040a694  8b7304               mov esi, dword ptr [ebx + 4]
// 0040a697  85f6                 test esi, esi
// 0040a699  7424                 je 0x40a6bf
// 0040a69b  57                   push edi
// 0040a69c  8b7b08               mov edi, dword ptr [ebx + 8]
// 0040a69f  3bf7                 cmp esi, edi
// 0040a6a1  740f                 je 0x40a6b2
// 0040a6a3  8bce                 mov ecx, esi
// 0040a6a5  ff158ce77700         call dword ptr [0x77e78c]
// 0040a6ab  83c61c               add esi, 0x1c
// 0040a6ae  3bf7                 cmp esi, edi
// 0040a6b0  75f1                 jne 0x40a6a3
// 0040a6b2  8b4304               mov eax, dword ptr [ebx + 4]
// 0040a6b5  50                   push eax
// 0040a6b6  e8353a2100           call 0x61e0f0
// 0040a6bb  83c404               add esp, 4
// 0040a6be  5f                   pop edi
// 0040a6bf  5e                   pop esi
// 0040a6c0  c7430400000000       mov dword ptr [ebx + 4], 0
// 0040a6c7  c7430800000000       mov dword ptr [ebx + 8], 0
// 0040a6ce  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 0040a6d5  5b                   pop ebx
// 0040a6d6  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
