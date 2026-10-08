// from server: 100% by auto
// roc 2010-06 00756340  unit: RBX::Block  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00756340
//
// 00756340  51                   push ecx
// 00756341  56                   push esi
// 00756342  8bf1                 mov esi, ecx
// 00756344  8b460c               mov eax, dword ptr [esi + 0xc]
// 00756347  85c0                 test eax, eax
// 00756349  741f                 je 0x75636a
// 0075634b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0075634f  51                   push ecx
// 00756350  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00756353  8d5608               lea edx, [esi + 8]
// 00756356  52                   push edx
// 00756357  51                   push ecx
// 00756358  50                   push eax
// 00756359  e892fcffff           call 0x755ff0
// 0075635e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00756361  52                   push edx
// 00756362  e833160500           call 0x7a799a
// 00756367  83c414               add esp, 0x14
// 0075636a  8b06                 mov eax, dword ptr [esi]
// 0075636c  50                   push eax
// 0075636d  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00756374  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0075637b  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00756382  e813160500           call 0x7a799a
// 00756387  83c404               add esp, 4
// 0075638a  5e                   pop esi
// 0075638b  59                   pop ecx
// 0075638c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
