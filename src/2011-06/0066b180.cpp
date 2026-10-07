// roc 2011-06 0066b180  unit: RBX::Profiling::Profiler  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066b180
//
// 0066b180  56                   push esi
// 0066b181  57                   push edi
// 0066b182  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066b186  57                   push edi
// 0066b187  8bf1                 mov esi, ecx
// 0066b189  e8e2eb0100           call 0x689d70
// 0066b18e  8b4710               mov eax, dword ptr [edi + 0x10]
// 0066b191  894610               mov dword ptr [esi + 0x10], eax
// 0066b194  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0066b197  5f                   pop edi
// 0066b198  894e14               mov dword ptr [esi + 0x14], ecx
// 0066b19b  8bc6                 mov eax, esi
// 0066b19d  5e                   pop esi
// 0066b19e  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??4?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
