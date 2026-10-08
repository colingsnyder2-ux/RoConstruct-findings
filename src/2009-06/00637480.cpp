// from server: 100% by auto
// roc 2009-06 00637480  unit: RBX::VScriptContext::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00637480
//
// 00637480  51                   push ecx
// 00637481  56                   push esi
// 00637482  8bf1                 mov esi, ecx
// 00637484  8b460c               mov eax, dword ptr [esi + 0xc]
// 00637487  85c0                 test eax, eax
// 00637489  741f                 je 0x6374aa
// 0063748b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063748f  51                   push ecx
// 00637490  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00637493  8d5608               lea edx, [esi + 8]
// 00637496  52                   push edx
// 00637497  51                   push ecx
// 00637498  50                   push eax
// 00637499  e802f8ffff           call 0x636ca0
// 0063749e  8b560c               mov edx, dword ptr [esi + 0xc]
// 006374a1  52                   push edx
// 006374a2  e88b150e00           call 0x718a32
// 006374a7  83c414               add esp, 0x14
// 006374aa  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006374b1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 006374b8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006374bf  5e                   pop esi
// 006374c0  59                   pop ecx
// 006374c1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
