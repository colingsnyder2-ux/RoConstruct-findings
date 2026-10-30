// roc 2009-06 005b3b40  unit: seg_005b0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b3b40
//
// 005b3b40  55                   push ebp
// 005b3b41  8bec                 mov ebp, esp
// 005b3b43  51                   push ecx
// 005b3b44  894dfc               mov dword ptr [ebp - 4], ecx
// 005b3b47  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b3b4a  50                   push eax
// 005b3b4b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b3b4e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005b3b51  52                   push edx
// 005b3b52  e8f9de0000           call 0x5c1a50
// 005b3b57  83c404               add esp, 4
// 005b3b5a  8b00                 mov eax, dword ptr [eax]
// 005b3b5c  50                   push eax
// 005b3b5d  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b3b60  e88b150100           call 0x5c50f0
// 005b3b65  8b4508               mov eax, dword ptr [ebp + 8]
// 005b3b68  8be5                 mov esp, ebp
// 005b3b6a  5d                   pop ebp
// 005b3b6b  c20400               ret 4
// copied from an identical function in another client (function ?begin@?$list@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@QAE?AV?$_Iterator@$00@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp