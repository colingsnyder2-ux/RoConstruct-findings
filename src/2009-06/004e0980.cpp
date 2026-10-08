// roc 2009-06 004e0980  unit: RBX::Network::IdSerializer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e0980
//
// 004e0980  8b11                 mov edx, dword ptr [ecx]
// 004e0982  8b442404             mov eax, dword ptr [esp + 4]
// 004e0986  3b10                 cmp edx, dword ptr [eax]
// 004e0988  7512                 jne 0x4e099c
// 004e098a  668b4904             mov cx, word ptr [ecx + 4]
// 004e098e  663b4804             cmp cx, word ptr [eax + 4]
// 004e0992  7508                 jne 0x4e099c
// 004e0994  b801000000           mov eax, 1
// 004e0999  c20400               ret 4
// 004e099c  33c0                 xor eax, eax
// 004e099e  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??8SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
