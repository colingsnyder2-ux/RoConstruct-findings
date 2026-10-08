// from server: 100% by auto
// roc 2008-06 005ace90  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ace90
//
// 005ace90  51                   push ecx
// 005ace91  56                   push esi
// 005ace92  8bf1                 mov esi, ecx
// 005ace94  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ace97  85c0                 test eax, eax
// 005ace99  741f                 je 0x5aceba
// 005ace9b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ace9f  51                   push ecx
// 005acea0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005acea3  8d5608               lea edx, [esi + 8]
// 005acea6  52                   push edx
// 005acea7  51                   push ecx
// 005acea8  50                   push eax
// 005acea9  e852fbffff           call 0x5aca00
// 005aceae  8b560c               mov edx, dword ptr [esi + 0xc]
// 005aceb1  52                   push edx
// 005aceb2  e8c3370f00           call 0x6a067a
// 005aceb7  83c414               add esp, 0x14
// 005aceba  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005acec1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005acec8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005acecf  5e                   pop esi
// 005aced0  59                   pop ecx
// 005aced1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
