// roc 2009-12 0054f2c0  unit: RBX::Network::IdSerializer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0054f2c0
//
// 0054f2c0  8b11                 mov edx, dword ptr [ecx]
// 0054f2c2  8b442404             mov eax, dword ptr [esp + 4]
// 0054f2c6  3b10                 cmp edx, dword ptr [eax]
// 0054f2c8  7512                 jne 0x54f2dc
// 0054f2ca  668b4904             mov cx, word ptr [ecx + 4]
// 0054f2ce  663b4804             cmp cx, word ptr [eax + 4]
// 0054f2d2  7508                 jne 0x54f2dc
// 0054f2d4  b801000000           mov eax, 1
// 0054f2d9  c20400               ret 4
// 0054f2dc  33c0                 xor eax, eax
// 0054f2de  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??8SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
