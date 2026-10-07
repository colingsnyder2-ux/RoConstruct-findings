// roc 2007-08 005399d0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005399d0
//
// 005399d0  51                   push ecx
// 005399d1  56                   push esi
// 005399d2  8bf1                 mov esi, ecx
// 005399d4  8b4604               mov eax, dword ptr [esi + 4]
// 005399d7  85c0                 test eax, eax
// 005399d9  741c                 je 0x5399f7
// 005399db  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005399df  8b5608               mov edx, dword ptr [esi + 8]
// 005399e2  51                   push ecx
// 005399e3  56                   push esi
// 005399e4  52                   push edx
// 005399e5  50                   push eax
// 005399e6  e8f5f4ffff           call 0x538ee0
// 005399eb  8b4604               mov eax, dword ptr [esi + 4]
// 005399ee  50                   push eax
// 005399ef  e86e620f00           call 0x62fc62
// 005399f4  83c414               add esp, 0x14
// 005399f7  c7460400000000       mov dword ptr [esi + 4], 0
// 005399fe  c7460800000000       mov dword ptr [esi + 8], 0
// 00539a05  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00539a0c  5e                   pop esi
// 00539a0d  59                   pop ecx
// 00539a0e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
