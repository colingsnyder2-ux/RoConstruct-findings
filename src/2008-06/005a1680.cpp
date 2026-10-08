// from server: 100% by auto
// roc 2008-06 005a1680  unit: RBX::PartTool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1680
//
// 005a1680  51                   push ecx
// 005a1681  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a1685  56                   push esi
// 005a1686  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a168a  50                   push eax
// 005a168b  56                   push esi
// 005a168c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a1694  e8d709f0ff           call 0x4a2070
// 005a1699  83c408               add esp, 8
// 005a169c  8bc6                 mov eax, esi
// 005a169e  5e                   pop esi
// 005a169f  59                   pop ecx
// 005a16a0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
