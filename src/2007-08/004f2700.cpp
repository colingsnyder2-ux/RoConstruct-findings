// from server: 100% by auto
// roc 2007-08 004f2700  unit: RBX::Render::AggregatingSceneManager  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f2700
//
// 004f2700  51                   push ecx
// 004f2701  56                   push esi
// 004f2702  8bf1                 mov esi, ecx
// 004f2704  8b4604               mov eax, dword ptr [esi + 4]
// 004f2707  85c0                 test eax, eax
// 004f2709  741c                 je 0x4f2727
// 004f270b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f270f  8b5608               mov edx, dword ptr [esi + 8]
// 004f2712  51                   push ecx
// 004f2713  56                   push esi
// 004f2714  52                   push edx
// 004f2715  50                   push eax
// 004f2716  e845f7ffff           call 0x4f1e60
// 004f271b  8b4604               mov eax, dword ptr [esi + 4]
// 004f271e  50                   push eax
// 004f271f  e83ed51300           call 0x62fc62
// 004f2724  83c414               add esp, 0x14
// 004f2727  c7460400000000       mov dword ptr [esi + 4], 0
// 004f272e  c7460800000000       mov dword ptr [esi + 8], 0
// 004f2735  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004f273c  5e                   pop esi
// 004f273d  59                   pop ecx
// 004f273e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
