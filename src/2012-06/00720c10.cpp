// roc 2012-06 00720c10  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00720c10
//
// 00720c10  51                   push ecx
// 00720c11  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00720c15  56                   push esi
// 00720c16  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00720c1a  50                   push eax
// 00720c1b  56                   push esi
// 00720c1c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00720c24  e887dddfff           call 0x51e9b0
// 00720c29  83c408               add esp, 8
// 00720c2c  8bc6                 mov eax, esi
// 00720c2e  5e                   pop esi
// 00720c2f  59                   pop ecx
// 00720c30  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
