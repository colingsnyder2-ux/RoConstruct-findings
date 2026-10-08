// from server: 100% by auto
// roc 2012-06 00792e40  unit: RBX::Profiling::Profiler  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00792e40
//
// 00792e40  56                   push esi
// 00792e41  57                   push edi
// 00792e42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00792e46  57                   push edi
// 00792e47  8bf1                 mov esi, ecx
// 00792e49  e822cc1b00           call 0x94fa70
// 00792e4e  8b4710               mov eax, dword ptr [edi + 0x10]
// 00792e51  894610               mov dword ptr [esi + 0x10], eax
// 00792e54  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00792e57  5f                   pop edi
// 00792e58  894e14               mov dword ptr [esi + 0x14], ecx
// 00792e5b  8bc6                 mov eax, esi
// 00792e5d  5e                   pop esi
// 00792e5e  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??4?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
