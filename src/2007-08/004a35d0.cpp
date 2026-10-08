// roc 2007-08 004a35d0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a35d0
//
// 004a35d0  803d0ce78b0000       cmp byte ptr [0x8be70c], 0
// 004a35d7  742b                 je 0x4a3604
// 004a35d9  8b11                 mov edx, dword ptr [ecx]
// 004a35db  8b442404             mov eax, dword ptr [esp + 4]
// 004a35df  3b10                 cmp edx, dword ptr [eax]
// 004a35e1  751c                 jne 0x4a35ff
// 004a35e3  668b5104             mov dx, word ptr [ecx + 4]
// 004a35e7  663b5004             cmp dx, word ptr [eax + 4]
// 004a35eb  7512                 jne 0x4a35ff
// 004a35ed  668b4908             mov cx, word ptr [ecx + 8]
// 004a35f1  663b4808             cmp cx, word ptr [eax + 8]
// 004a35f5  7508                 jne 0x4a35ff
// 004a35f7  b801000000           mov eax, 1
// 004a35fc  c20400               ret 4
// 004a35ff  33c0                 xor eax, eax
// 004a3601  c20400               ret 4
// 004a3604  668b5108             mov dx, word ptr [ecx + 8]
// 004a3608  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a360c  33c0                 xor eax, eax
// 004a360e  663b5108             cmp dx, word ptr [ecx + 8]
// 004a3612  0f94c0               sete al
// 004a3615  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??8NetworkID@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
