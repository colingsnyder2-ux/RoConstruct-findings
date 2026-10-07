// roc 2009-06 00761640  unit: ATL::CRegObject  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761640
//
// 00761640  8b442404             mov eax, dword ptr [esp + 4]
// 00761644  56                   push esi
// 00761645  8bf1                 mov esi, ecx
// 00761647  8906                 mov dword ptr [esi], eax
// 00761649  e862f5ffff           call 0x760bb0
// 0076164e  8bc6                 mov eax, esi
// 00761650  5e                   pop esi
// 00761651  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??0?$w32_regex_traits_char_layer@D@re_detail@boost@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
