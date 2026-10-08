// roc 2007-08 004a0590  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0590
//
// 004a0590  8b442408             mov eax, dword ptr [esp + 8]
// 004a0594  56                   push esi
// 004a0595  8b742408             mov esi, dword ptr [esp + 8]
// 004a0599  6a01                 push 1
// 004a059b  6a20                 push 0x20
// 004a059d  8d4c2414             lea ecx, [esp + 0x14]
// 004a05a1  51                   push ecx
// 004a05a2  8bce                 mov ecx, esi
// 004a05a4  89442418             mov dword ptr [esp + 0x18], eax
// 004a05a8  e8e3f7ffff           call 0x49fd90
// 004a05ad  8bc6                 mov eax, esi
// 004a05af  5e                   pop esi
// 004a05b0  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
