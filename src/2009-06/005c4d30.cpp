// roc 2009-06 005c4d30  unit: seg_005c0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4d30
//
// 005c4d30  55                   push ebp
// 005c4d31  8bec                 mov ebp, esp
// 005c4d33  51                   push ecx
// 005c4d34  894dfc               mov dword ptr [ebp - 4], ecx
// 005c4d37  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c4d3a  50                   push eax
// 005c4d3b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c4d3e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005c4d41  52                   push edx
// 005c4d42  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c4d45  e8a6030000           call 0x5c50f0
// 005c4d4a  8b4508               mov eax, dword ptr [ebp + 8]
// 005c4d4d  8be5                 mov esp, ebp
// 005c4d4f  5d                   pop ebp
// 005c4d50  c20400               ret 4
// copied from an identical function in another client (function ?end@?$list@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@QAE?AV?$_Iterator@$00@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp