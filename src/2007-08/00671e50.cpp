// from server: 100% by auto
// roc 2007-08 00671e50  unit: CPropertyGridItemBrickColor  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671e50
//
// 00671e50  8b442404             mov eax, dword ptr [esp + 4]
// 00671e54  56                   push esi
// 00671e55  8bf1                 mov esi, ecx
// 00671e57  8906                 mov dword ptr [esi], eax
// 00671e59  e842f5ffff           call 0x6713a0
// 00671e5e  8bc6                 mov eax, esi
// 00671e60  5e                   pop esi
// 00671e61  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??0?$w32_regex_traits_char_layer@D@re_detail@boost@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
