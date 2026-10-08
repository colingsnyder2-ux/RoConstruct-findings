// from server: 100% by auto
// roc 2009-06 00623440  unit: ArchiveBinder  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623440
//
// 00623440  6a14                 push 0x14
// 00623442  e8f1550f00           call 0x718a38
// 00623447  83c404               add esp, 4
// 0062344a  85c0                 test eax, eax
// 0062344c  7406                 je 0x623454
// 0062344e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00623452  8908                 mov dword ptr [eax], ecx
// 00623454  8d4804               lea ecx, [eax + 4]
// 00623457  85c9                 test ecx, ecx
// 00623459  7406                 je 0x623461
// 0062345b  8b542408             mov edx, dword ptr [esp + 8]
// 0062345f  8911                 mov dword ptr [ecx], edx
// 00623461  8d4808               lea ecx, [eax + 8]
// 00623464  85c9                 test ecx, ecx
// 00623466  7416                 je 0x62347e
// 00623468  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0062346c  56                   push esi
// 0062346d  8b32                 mov esi, dword ptr [edx]
// 0062346f  8931                 mov dword ptr [ecx], esi
// 00623471  8b7204               mov esi, dword ptr [edx + 4]
// 00623474  897104               mov dword ptr [ecx + 4], esi
// 00623477  8b5208               mov edx, dword ptr [edx + 8]
// 0062347a  895108               mov dword ptr [ecx + 8], edx
// 0062347d  5e                   pop esi
// 0062347e  c20c00               ret 0xc
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?_Buynode@?$list@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@2@PAU342@0ABUbound_object@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
