// roc 2009-06 005c6930  unit: seg_005c0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c6930
//
// 005c6930  55                   push ebp
// 005c6931  8bec                 mov ebp, esp
// 005c6933  83ec0c               sub esp, 0xc
// 005c6936  894df4               mov dword ptr [ebp - 0xc], ecx
// 005c6939  8d45f8               lea eax, [ebp - 8]
// 005c693c  50                   push eax
// 005c693d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c6940  e82b090000           call 0x5c7270
// 005c6945  8bc8                 mov ecx, eax
// 005c6947  e8b40c0000           call 0x5c7600
// 005c694c  8be5                 mov esp, ebp
// 005c694e  5d                   pop ebp
// 005c694f  c3                   ret 
// copied from an identical function in another client (function ?front@?$list@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@QAEAAPAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp