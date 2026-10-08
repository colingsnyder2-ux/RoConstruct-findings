// from server: 100% by auto
// roc 2008-06 006e8d20  unit: CPatchedControlComboBox  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8d20
//
// 006e8d20  8b442404             mov eax, dword ptr [esp + 4]
// 006e8d24  56                   push esi
// 006e8d25  8bf1                 mov esi, ecx
// 006e8d27  8906                 mov dword ptr [esi], eax
// 006e8d29  e842f5ffff           call 0x6e8270
// 006e8d2e  8bc6                 mov eax, esi
// 006e8d30  5e                   pop esi
// 006e8d31  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??0?$w32_regex_traits_char_layer@D@re_detail@boost@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
