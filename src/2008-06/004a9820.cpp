// roc 2008-06 004a9820  unit: seg_004a0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9820
//
// 004a9820  8b11                 mov edx, dword ptr [ecx]
// 004a9822  8b442404             mov eax, dword ptr [esp + 4]
// 004a9826  3b10                 cmp edx, dword ptr [eax]
// 004a9828  7512                 jne 0x4a983c
// 004a982a  668b4904             mov cx, word ptr [ecx + 4]
// 004a982e  663b4804             cmp cx, word ptr [eax + 4]
// 004a9832  7508                 jne 0x4a983c
// 004a9834  b801000000           mov eax, 1
// 004a9839  c20400               ret 4
// 004a983c  33c0                 xor eax, eax
// 004a983e  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??8SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
