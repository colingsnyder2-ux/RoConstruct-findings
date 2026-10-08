// roc 2007-08 004a0640  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0640
//
// 004a0640  8b442408             mov eax, dword ptr [esp + 8]
// 004a0644  56                   push esi
// 004a0645  8b742408             mov esi, dword ptr [esp + 8]
// 004a0649  6a01                 push 1
// 004a064b  6a20                 push 0x20
// 004a064d  50                   push eax
// 004a064e  8bce                 mov ecx, esi
// 004a0650  e84bf3ffff           call 0x49f9a0
// 004a0655  8bc6                 mov eax, esi
// 004a0657  5e                   pop esi
// 004a0658  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??5Network@RBX@@YAAAVBitStream@RakNet@@AAV23@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
