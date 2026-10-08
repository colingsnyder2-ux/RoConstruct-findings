// from server: 100% by auto
// roc 2012-06 004a78a0  unit: CTaskSchedulerPaneView  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a78a0
//
// 004a78a0  51                   push ecx
// 004a78a1  56                   push esi
// 004a78a2  8bf1                 mov esi, ecx
// 004a78a4  8b4604               mov eax, dword ptr [esi + 4]
// 004a78a7  85c0                 test eax, eax
// 004a78a9  741c                 je 0x4a78c7
// 004a78ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a78af  8b5608               mov edx, dword ptr [esi + 8]
// 004a78b2  51                   push ecx
// 004a78b3  56                   push esi
// 004a78b4  52                   push edx
// 004a78b5  50                   push eax
// 004a78b6  e875120700           call 0x518b30
// 004a78bb  8b4604               mov eax, dword ptr [esi + 4]
// 004a78be  50                   push eax
// 004a78bf  e850a84d00           call 0x982114
// 004a78c4  83c414               add esp, 0x14
// 004a78c7  c7460400000000       mov dword ptr [esi + 4], 0
// 004a78ce  c7460800000000       mov dword ptr [esi + 8], 0
// 004a78d5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004a78dc  5e                   pop esi
// 004a78dd  59                   pop ecx
// 004a78de  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
