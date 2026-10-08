// roc 2012-06 007f6d10  unit: RBX::Humanoid  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007f6d10
//
// 007f6d10  8b11                 mov edx, dword ptr [ecx]
// 007f6d12  8b442404             mov eax, dword ptr [esp + 4]
// 007f6d16  3b10                 cmp edx, dword ptr [eax]
// 007f6d18  750f                 jne 0x7f6d29
// 007f6d1a  668b4904             mov cx, word ptr [ecx + 4]
// 007f6d1e  663b4804             cmp cx, word ptr [eax + 4]
// 007f6d22  7505                 jne 0x7f6d29
// 007f6d24  33c0                 xor eax, eax
// 007f6d26  c20400               ret 4
// 007f6d29  b801000000           mov eax, 1
// 007f6d2e  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??9SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
