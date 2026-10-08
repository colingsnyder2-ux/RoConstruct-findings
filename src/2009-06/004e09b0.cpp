// roc 2009-06 004e09b0  unit: RBX::Network::IdSerializer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e09b0
//
// 004e09b0  8b11                 mov edx, dword ptr [ecx]
// 004e09b2  8b442404             mov eax, dword ptr [esp + 4]
// 004e09b6  3b10                 cmp edx, dword ptr [eax]
// 004e09b8  750f                 jne 0x4e09c9
// 004e09ba  668b4904             mov cx, word ptr [ecx + 4]
// 004e09be  663b4804             cmp cx, word ptr [eax + 4]
// 004e09c2  7505                 jne 0x4e09c9
// 004e09c4  33c0                 xor eax, eax
// 004e09c6  c20400               ret 4
// 004e09c9  b801000000           mov eax, 1
// 004e09ce  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??9SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
