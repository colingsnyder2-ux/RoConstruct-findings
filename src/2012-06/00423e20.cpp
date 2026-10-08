// roc 2012-06 00423e20  unit: RBX::DSVideoCaptureEngine  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00423e20
//
// 00423e20  53                   push ebx
// 00423e21  8bd9                 mov ebx, ecx
// 00423e23  56                   push esi
// 00423e24  8b7304               mov esi, dword ptr [ebx + 4]
// 00423e27  85f6                 test esi, esi
// 00423e29  7424                 je 0x423e4f
// 00423e2b  57                   push edi
// 00423e2c  8b7b08               mov edi, dword ptr [ebx + 8]
// 00423e2f  3bf7                 cmp esi, edi
// 00423e31  740f                 je 0x423e42
// 00423e33  8bce                 mov ecx, esi
// 00423e35  ff153c26b200         call dword ptr [0xb2263c]
// 00423e3b  83c61c               add esi, 0x1c
// 00423e3e  3bf7                 cmp esi, edi
// 00423e40  75f1                 jne 0x423e33
// 00423e42  8b4304               mov eax, dword ptr [ebx + 4]
// 00423e45  50                   push eax
// 00423e46  e8c9e25500           call 0x982114
// 00423e4b  83c404               add esp, 4
// 00423e4e  5f                   pop edi
// 00423e4f  5e                   pop esi
// 00423e50  c7430400000000       mov dword ptr [ebx + 4], 0
// 00423e57  c7430800000000       mov dword ptr [ebx + 8], 0
// 00423e5e  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 00423e65  5b                   pop ebx
// 00423e66  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
