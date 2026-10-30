// roc 2009-06 005c4d60  unit: seg_005c0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4d60
//
// 005c4d60  55                   push ebp
// 005c4d61  8bec                 mov ebp, esp
// 005c4d63  83ec08               sub esp, 8
// 005c4d66  894df8               mov dword ptr [ebp - 8], ecx
// 005c4d69  51                   push ecx
// 005c4d6a  8bcc                 mov ecx, esp
// 005c4d6c  8965fc               mov dword ptr [ebp - 4], esp
// 005c4d6f  8d4508               lea eax, [ebp + 8]
// 005c4d72  50                   push eax
// 005c4d73  e858d5ffff           call 0x5c22d0
// 005c4d78  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c4d7b  e8101fffff           call 0x5b6c90
// 005c4d80  8d4d08               lea ecx, [ebp + 8]
// 005c4d83  51                   push ecx
// 005c4d84  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c4d87  83c10c               add ecx, 0xc
// 005c4d8a  e841d5ffff           call 0x5c22d0
// 005c4d8f  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c4d92  8be5                 mov esp, ebp
// 005c4d94  5d                   pop ebp
// 005c4d95  c20400               ret 4
// copied from an identical function in another client (function ??0?$_List_ptr@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@IAE@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp