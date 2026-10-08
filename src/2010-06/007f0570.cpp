// from server: 100% by auto
// roc 2010-06 007f0570  unit: CPatchedControlComboBox  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0570
//
// 007f0570  8b442404             mov eax, dword ptr [esp + 4]
// 007f0574  56                   push esi
// 007f0575  8bf1                 mov esi, ecx
// 007f0577  8906                 mov dword ptr [esi], eax
// 007f0579  e842f5ffff           call 0x7efac0
// 007f057e  8bc6                 mov eax, esi
// 007f0580  5e                   pop esi
// 007f0581  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??0?$w32_regex_traits_char_layer@D@re_detail@boost@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
