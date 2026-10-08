// roc 2010-06 004fdb80  unit: RBX::Network::IdSerializer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fdb80
//
// 004fdb80  8b11                 mov edx, dword ptr [ecx]
// 004fdb82  8b442404             mov eax, dword ptr [esp + 4]
// 004fdb86  3b10                 cmp edx, dword ptr [eax]
// 004fdb88  750f                 jne 0x4fdb99
// 004fdb8a  668b4904             mov cx, word ptr [ecx + 4]
// 004fdb8e  663b4804             cmp cx, word ptr [eax + 4]
// 004fdb92  7505                 jne 0x4fdb99
// 004fdb94  33c0                 xor eax, eax
// 004fdb96  c20400               ret 4
// 004fdb99  b801000000           mov eax, 1
// 004fdb9e  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??9SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
