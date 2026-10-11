// roc 2007-03 005c0c80  unit: seg_005c0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0c80
//
// 005c0c80  53                   push ebx
// 005c0c81  55                   push ebp
// 005c0c82  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005c0c86  85ed                 test ebp, ebp
// 005c0c88  56                   push esi
// 005c0c89  8bf1                 mov esi, ecx
// 005c0c8b  7406                 je 0x5c0c93
// 005c0c8d  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 005c0c91  7406                 je 0x5c0c99
// 005c0c93  ff1544e97700         call dword ptr [0x77e944]
// 005c0c99  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005c0c9d  8b442420             mov eax, dword ptr [esp + 0x20]
// 005c0ca1  3bd8                 cmp ebx, eax
// 005c0ca3  7425                 je 0x5c0cca
// 005c0ca5  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c0ca8  57                   push edi
// 005c0ca9  53                   push ebx
// 005c0caa  51                   push ecx
// 005c0cab  50                   push eax
// 005c0cac  e89ffeffff           call 0x5c0b50
// 005c0cb1  8b542420             mov edx, dword ptr [esp + 0x20]
// 005c0cb5  52                   push edx
// 005c0cb6  8bf8                 mov edi, eax
// 005c0cb8  8b4608               mov eax, dword ptr [esi + 8]
// 005c0cbb  56                   push esi
// 005c0cbc  50                   push eax
// 005c0cbd  57                   push edi
// 005c0cbe  e8ed99f7ff           call 0x53a6b0
// 005c0cc3  83c41c               add esp, 0x1c
// 005c0cc6  897e08               mov dword ptr [esi + 8], edi
// 005c0cc9  5f                   pop edi
// 005c0cca  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c0cce  5e                   pop esi
// 005c0ccf  8928                 mov dword ptr [eax], ebp
// 005c0cd1  5d                   pop ebp
// 005c0cd2  895804               mov dword ptr [eax + 4], ebx
// 005c0cd5  5b                   pop ebx
// 005c0cd6  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
