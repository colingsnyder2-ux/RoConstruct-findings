// roc 2012-06 009ca270  unit: ATL::CRegObject  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca270
//
// 009ca270  8b442404             mov eax, dword ptr [esp + 4]
// 009ca274  56                   push esi
// 009ca275  8bf1                 mov esi, ecx
// 009ca277  8906                 mov dword ptr [esi], eax
// 009ca279  e852f5ffff           call 0x9c97d0
// 009ca27e  8bc6                 mov eax, esi
// 009ca280  5e                   pop esi
// 009ca281  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??0?$w32_regex_traits_char_layer@D@re_detail@boost@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
