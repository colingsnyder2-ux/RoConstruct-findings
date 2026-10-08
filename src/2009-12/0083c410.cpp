// roc 2009-12 0083c410  unit: CXTPAccessible  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c410
//
// 0083c410  8b442404             mov eax, dword ptr [esp + 4]
// 0083c414  56                   push esi
// 0083c415  8bf1                 mov esi, ecx
// 0083c417  8906                 mov dword ptr [esi], eax
// 0083c419  e862f5ffff           call 0x83b980
// 0083c41e  8bc6                 mov eax, esi
// 0083c420  5e                   pop esi
// 0083c421  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??0?$w32_regex_traits_char_layer@D@re_detail@boost@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
