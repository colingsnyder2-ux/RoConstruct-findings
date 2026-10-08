// from server: 100% by auto
// roc 2012-06 0071e220  unit: RBX::VInstance::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071e220
//
// 0071e220  51                   push ecx
// 0071e221  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071e225  56                   push esi
// 0071e226  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071e22a  50                   push eax
// 0071e22b  56                   push esi
// 0071e22c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0071e234  e877fbffff           call 0x71ddb0
// 0071e239  83c408               add esp, 8
// 0071e23c  8bc6                 mov eax, esi
// 0071e23e  5e                   pop esi
// 0071e23f  59                   pop ecx
// 0071e240  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
