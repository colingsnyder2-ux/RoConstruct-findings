// roc 2007-03 00686990  unit: seg_00680000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686990
//
// 00686990  8b442404             mov eax, dword ptr [esp + 4]
// 00686994  56                   push esi
// 00686995  8bf1                 mov esi, ecx
// 00686997  8906                 mov dword ptr [esi], eax
// 00686999  e8e2f5ffff           call 0x685f80
// 0068699e  8bc6                 mov eax, esi
// 006869a0  5e                   pop esi
// 006869a1  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??0?$w32_regex_traits_char_layer@D@re_detail@boost@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
