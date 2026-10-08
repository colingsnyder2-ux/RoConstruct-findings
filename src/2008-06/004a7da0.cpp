// from server: 100% by auto
// roc 2008-06 004a7da0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7da0
//
// 004a7da0  51                   push ecx
// 004a7da1  56                   push esi
// 004a7da2  8bf1                 mov esi, ecx
// 004a7da4  8b460c               mov eax, dword ptr [esi + 0xc]
// 004a7da7  85c0                 test eax, eax
// 004a7da9  741f                 je 0x4a7dca
// 004a7dab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a7daf  51                   push ecx
// 004a7db0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004a7db3  8d5608               lea edx, [esi + 8]
// 004a7db6  52                   push edx
// 004a7db7  51                   push ecx
// 004a7db8  50                   push eax
// 004a7db9  e822fcffff           call 0x4a79e0
// 004a7dbe  8b560c               mov edx, dword ptr [esi + 0xc]
// 004a7dc1  52                   push edx
// 004a7dc2  e8b3881f00           call 0x6a067a
// 004a7dc7  83c414               add esp, 0x14
// 004a7dca  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004a7dd1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004a7dd8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004a7ddf  5e                   pop esi
// 004a7de0  59                   pop ecx
// 004a7de1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
