// roc 2012-06 00575630  unit: AsyncResult  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00575630
//
// 00575630  51                   push ecx
// 00575631  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00575635  56                   push esi
// 00575636  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057563a  50                   push eax
// 0057563b  56                   push esi
// 0057563c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00575644  e8677e2a00           call 0x81d4b0
// 00575649  83c408               add esp, 8
// 0057564c  8bc6                 mov eax, esi
// 0057564e  5e                   pop esi
// 0057564f  59                   pop ecx
// 00575650  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
