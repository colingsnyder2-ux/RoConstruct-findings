// roc 2011-06 0063cfb0  unit: RBX::VScript::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063cfb0
//
// 0063cfb0  51                   push ecx
// 0063cfb1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063cfb5  56                   push esi
// 0063cfb6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063cfba  50                   push eax
// 0063cfbb  56                   push esi
// 0063cfbc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0063cfc4  e877fbffff           call 0x63cb40
// 0063cfc9  83c408               add esp, 8
// 0063cfcc  8bc6                 mov eax, esi
// 0063cfce  5e                   pop esi
// 0063cfcf  59                   pop ecx
// 0063cfd0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
