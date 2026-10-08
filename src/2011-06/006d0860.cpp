// roc 2011-06 006d0860  unit: seg_006d0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d0860
//
// 006d0860  8b11                 mov edx, dword ptr [ecx]
// 006d0862  8b442404             mov eax, dword ptr [esp + 4]
// 006d0866  3b10                 cmp edx, dword ptr [eax]
// 006d0868  7512                 jne 0x6d087c
// 006d086a  668b4904             mov cx, word ptr [ecx + 4]
// 006d086e  663b4804             cmp cx, word ptr [eax + 4]
// 006d0872  7508                 jne 0x6d087c
// 006d0874  b801000000           mov eax, 1
// 006d0879  c20400               ret 4
// 006d087c  33c0                 xor eax, eax
// 006d087e  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??8SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
