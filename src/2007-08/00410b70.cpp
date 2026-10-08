// from server: 100% by auto
// roc 2007-08 00410b70  unit: CopyVerb  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00410b70
//
// 00410b70  8b4108               mov eax, dword ptr [ecx + 8]
// 00410b73  83ec08               sub esp, 8
// 00410b76  56                   push esi
// 00410b77  8d7104               lea esi, [ecx + 4]
// 00410b7a  8b08                 mov ecx, dword ptr [eax]
// 00410b7c  50                   push eax
// 00410b7d  56                   push esi
// 00410b7e  51                   push ecx
// 00410b7f  56                   push esi
// 00410b80  8d442414             lea eax, [esp + 0x14]
// 00410b84  50                   push eax
// 00410b85  8bce                 mov ecx, esi
// 00410b87  e8c4f6ffff           call 0x410250
// 00410b8c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00410b8f  51                   push ecx
// 00410b90  e8cdf02100           call 0x62fc62
// 00410b95  83c404               add esp, 4
// 00410b98  33c0                 xor eax, eax
// 00410b9a  894604               mov dword ptr [esi + 4], eax
// 00410b9d  894608               mov dword ptr [esi + 8], eax
// 00410ba0  5e                   pop esi
// 00410ba1  83c408               add esp, 8
// 00410ba4  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??1?$w32_regex_traits_char_layer@G@re_detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
