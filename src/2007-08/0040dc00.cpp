// roc 2007-08 0040dc00  unit: CChatPrompt  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040dc00
//
// 0040dc00  51                   push ecx
// 0040dc01  53                   push ebx
// 0040dc02  55                   push ebp
// 0040dc03  56                   push esi
// 0040dc04  8b742418             mov esi, dword ptr [esp + 0x18]
// 0040dc08  85f6                 test esi, esi
// 0040dc0a  57                   push edi
// 0040dc0b  8bf9                 mov edi, ecx
// 0040dc0d  7406                 je 0x40dc15
// 0040dc0f  3b742424             cmp esi, dword ptr [esp + 0x24]
// 0040dc13  7406                 je 0x40dc1b
// 0040dc15  ff15d8e67700         call dword ptr [0x77e6d8]
// 0040dc1b  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0040dc1f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0040dc23  3beb                 cmp ebp, ebx
// 0040dc25  7447                 je 0x40dc6e
// 0040dc27  8b542418             mov edx, dword ptr [esp + 0x18]
// 0040dc2b  8b7708               mov esi, dword ptr [edi + 8]
// 0040dc2e  c644242400           mov byte ptr [esp + 0x24], 0
// 0040dc33  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040dc37  50                   push eax
// 0040dc38  c644241400           mov byte ptr [esp + 0x14], 0
// 0040dc3d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040dc41  51                   push ecx
// 0040dc42  52                   push edx
// 0040dc43  55                   push ebp
// 0040dc44  56                   push esi
// 0040dc45  53                   push ebx
// 0040dc46  e805f8ffff           call 0x40d450
// 0040dc4b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0040dc4f  8b4f08               mov ecx, dword ptr [edi + 8]
// 0040dc52  50                   push eax
// 0040dc53  2bf3                 sub esi, ebx
// 0040dc55  57                   push edi
// 0040dc56  c1fe03               sar esi, 3
// 0040dc59  51                   push ecx
// 0040dc5a  8d74f500             lea esi, [ebp + esi*8]
// 0040dc5e  56                   push esi
// 0040dc5f  e8ecfeffff           call 0x40db50
// 0040dc64  897708               mov dword ptr [edi + 8], esi
// 0040dc67  8b742444             mov esi, dword ptr [esp + 0x44]
// 0040dc6b  83c428               add esp, 0x28
// 0040dc6e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040dc72  5f                   pop edi
// 0040dc73  8930                 mov dword ptr [eax], esi
// 0040dc75  5e                   pop esi
// 0040dc76  896804               mov dword ptr [eax + 4], ebp
// 0040dc79  5d                   pop ebp
// 0040dc7a  5b                   pop ebx
// 0040dc7b  59                   pop ecx
// 0040dc7c  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
