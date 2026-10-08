// from server: 100% by auto
// roc 2007-08 00492940  unit: RBX::Network::Players  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00492940
//
// 00492940  51                   push ecx
// 00492941  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00492945  56                   push esi
// 00492946  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0049294a  50                   push eax
// 0049294b  56                   push esi
// 0049294c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00492954  e887f8fcff           call 0x4621e0
// 00492959  83c408               add esp, 8
// 0049295c  8bc6                 mov eax, esi
// 0049295e  5e                   pop esi
// 0049295f  59                   pop ecx
// 00492960  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
