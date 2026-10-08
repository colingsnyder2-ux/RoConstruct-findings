// roc 2011-06 004f1550  unit: RBX::Network::IdSerializer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f1550
//
// 004f1550  8a442408             mov al, byte ptr [esp + 8]
// 004f1554  56                   push esi
// 004f1555  8b742408             mov esi, dword ptr [esp + 8]
// 004f1559  6a01                 push 1
// 004f155b  6a08                 push 8
// 004f155d  8d4c2414             lea ecx, [esp + 0x14]
// 004f1561  51                   push ecx
// 004f1562  8bce                 mov ecx, esi
// 004f1564  88442418             mov byte ptr [esp + 0x18], al
// 004f1568  e863baffff           call 0x4ecfd0
// 004f156d  8bc6                 mov eax, esi
// 004f156f  5e                   pop esi
// 004f1570  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
