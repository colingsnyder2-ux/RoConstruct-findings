// roc 2007-03 0060a120  unit: seg_00600000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060a120
//
// 0060a120  53                   push ebx
// 0060a121  55                   push ebp
// 0060a122  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0060a126  85ed                 test ebp, ebp
// 0060a128  56                   push esi
// 0060a129  8bf1                 mov esi, ecx
// 0060a12b  7406                 je 0x60a133
// 0060a12d  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0060a131  7406                 je 0x60a139
// 0060a133  ff1544e97700         call dword ptr [0x77e944]
// 0060a139  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0060a13d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0060a141  3bd8                 cmp ebx, eax
// 0060a143  7425                 je 0x60a16a
// 0060a145  8b4e08               mov ecx, dword ptr [esi + 8]
// 0060a148  57                   push edi
// 0060a149  53                   push ebx
// 0060a14a  51                   push ecx
// 0060a14b  50                   push eax
// 0060a14c  e86fecffff           call 0x608dc0
// 0060a151  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060a155  52                   push edx
// 0060a156  8bf8                 mov edi, eax
// 0060a158  8b4608               mov eax, dword ptr [esi + 8]
// 0060a15b  56                   push esi
// 0060a15c  50                   push eax
// 0060a15d  57                   push edi
// 0060a15e  e87df0ffff           call 0x6091e0
// 0060a163  83c41c               add esp, 0x1c
// 0060a166  897e08               mov dword ptr [esi + 8], edi
// 0060a169  5f                   pop edi
// 0060a16a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060a16e  5e                   pop esi
// 0060a16f  8928                 mov dword ptr [eax], ebp
// 0060a171  5d                   pop ebp
// 0060a172  895804               mov dword ptr [eax + 4], ebx
// 0060a175  5b                   pop ebx
// 0060a176  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
