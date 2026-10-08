// roc 2012-06 007f6ce0  unit: RBX::Humanoid  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007f6ce0
//
// 007f6ce0  8b11                 mov edx, dword ptr [ecx]
// 007f6ce2  8b442404             mov eax, dword ptr [esp + 4]
// 007f6ce6  3b10                 cmp edx, dword ptr [eax]
// 007f6ce8  7512                 jne 0x7f6cfc
// 007f6cea  668b4904             mov cx, word ptr [ecx + 4]
// 007f6cee  663b4804             cmp cx, word ptr [eax + 4]
// 007f6cf2  7508                 jne 0x7f6cfc
// 007f6cf4  b801000000           mov eax, 1
// 007f6cf9  c20400               ret 4
// 007f6cfc  33c0                 xor eax, eax
// 007f6cfe  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??8SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
