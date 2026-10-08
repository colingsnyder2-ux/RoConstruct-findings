// roc 2011-06 00420410  unit: RBX::DSVideoCaptureEngine  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00420410
//
// 00420410  53                   push ebx
// 00420411  8bd9                 mov ebx, ecx
// 00420413  56                   push esi
// 00420414  8b7304               mov esi, dword ptr [ebx + 4]
// 00420417  85f6                 test esi, esi
// 00420419  7424                 je 0x42043f
// 0042041b  57                   push edi
// 0042041c  8b7b08               mov edi, dword ptr [ebx + 8]
// 0042041f  3bf7                 cmp esi, edi
// 00420421  740f                 je 0x420432
// 00420423  8bce                 mov ecx, esi
// 00420425  ff15d004a400         call dword ptr [0xa404d0]
// 0042042b  83c61c               add esi, 0x1c
// 0042042e  3bf7                 cmp esi, edi
// 00420430  75f1                 jne 0x420423
// 00420432  8b4304               mov eax, dword ptr [ebx + 4]
// 00420435  50                   push eax
// 00420436  e81d9c3e00           call 0x80a058
// 0042043b  83c404               add esp, 4
// 0042043e  5f                   pop edi
// 0042043f  5e                   pop esi
// 00420440  c7430400000000       mov dword ptr [ebx + 4], 0
// 00420447  c7430800000000       mov dword ptr [ebx + 8], 0
// 0042044e  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 00420455  5b                   pop ebx
// 00420456  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
