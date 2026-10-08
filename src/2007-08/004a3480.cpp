// roc 2007-08 004a3480  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a3480
//
// 004a3480  8b11                 mov edx, dword ptr [ecx]
// 004a3482  8b442404             mov eax, dword ptr [esp + 4]
// 004a3486  3b10                 cmp edx, dword ptr [eax]
// 004a3488  7512                 jne 0x4a349c
// 004a348a  668b4904             mov cx, word ptr [ecx + 4]
// 004a348e  663b4804             cmp cx, word ptr [eax + 4]
// 004a3492  7508                 jne 0x4a349c
// 004a3494  b801000000           mov eax, 1
// 004a3499  c20400               ret 4
// 004a349c  33c0                 xor eax, eax
// 004a349e  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??8SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
