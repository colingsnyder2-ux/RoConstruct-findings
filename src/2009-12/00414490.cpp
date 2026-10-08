// roc 2009-12 00414490  unit: CopyVerb  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00414490
//
// 00414490  51                   push ecx
// 00414491  56                   push esi
// 00414492  8bf1                 mov esi, ecx
// 00414494  8b460c               mov eax, dword ptr [esi + 0xc]
// 00414497  85c0                 test eax, eax
// 00414499  741f                 je 0x4144ba
// 0041449b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041449f  51                   push ecx
// 004144a0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004144a3  8d5608               lea edx, [esi + 8]
// 004144a6  52                   push edx
// 004144a7  51                   push ecx
// 004144a8  50                   push eax
// 004144a9  e8f2f10a00           call 0x4c36a0
// 004144ae  8b560c               mov edx, dword ptr [esi + 0xc]
// 004144b1  52                   push edx
// 004144b2  e8a3f33d00           call 0x7f385a
// 004144b7  83c414               add esp, 0x14
// 004144ba  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004144c1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004144c8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004144cf  5e                   pop esi
// 004144d0  59                   pop ecx
// 004144d1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
