// roc 2011-06 00851db0  unit: CSourceStream  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851db0
//
// 00851db0  8b442404             mov eax, dword ptr [esp + 4]
// 00851db4  56                   push esi
// 00851db5  8bf1                 mov esi, ecx
// 00851db7  8906                 mov dword ptr [esi], eax
// 00851db9  e852f5ffff           call 0x851310
// 00851dbe  8bc6                 mov eax, esi
// 00851dc0  5e                   pop esi
// 00851dc1  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??0?$w32_regex_traits_char_layer@D@re_detail@boost@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
