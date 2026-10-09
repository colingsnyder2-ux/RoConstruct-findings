// roc 2009-12 007130e0  unit: RBX::VHint::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007130e0
//
// 007130e0  8b11                 mov edx, dword ptr [ecx]
// 007130e2  8b442404             mov eax, dword ptr [esp + 4]
// 007130e6  3b10                 cmp edx, dword ptr [eax]
// 007130e8  750f                 jne 0x7130f9
// 007130ea  668b4904             mov cx, word ptr [ecx + 4]
// 007130ee  663b4804             cmp cx, word ptr [eax + 4]
// 007130f2  7505                 jne 0x7130f9
// 007130f4  33c0                 xor eax, eax
// 007130f6  c20400               ret 4
// 007130f9  b801000000           mov eax, 1
// 007130fe  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??9SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
