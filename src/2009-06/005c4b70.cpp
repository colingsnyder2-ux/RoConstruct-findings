// roc 2009-06 005c4b70  unit: seg_005c0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4b70
//
// 005c4b70  55                   push ebp
// 005c4b71  8bec                 mov ebp, esp
// 005c4b73  83ec08               sub esp, 8
// 005c4b76  894df8               mov dword ptr [ebp - 8], ecx
// 005c4b79  51                   push ecx
// 005c4b7a  8bcc                 mov ecx, esp
// 005c4b7c  8965fc               mov dword ptr [ebp - 4], esp
// 005c4b7f  8d4508               lea eax, [ebp + 8]
// 005c4b82  50                   push eax
// 005c4b83  e848d7ffff           call 0x5c22d0
// 005c4b88  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c4b8b  e8d0010000           call 0x5c4d60
// 005c4b90  8d4d08               lea ecx, [ebp + 8]
// 005c4b93  51                   push ecx
// 005c4b94  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c4b97  83c110               add ecx, 0x10
// 005c4b9a  e831d7ffff           call 0x5c22d0
// 005c4b9f  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c4ba2  8be5                 mov esp, ebp
// 005c4ba4  5d                   pop ebp
// 005c4ba5  c20400               ret 4
// copied from an identical function in another client (function ??0?$_List_val@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@QAE@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp