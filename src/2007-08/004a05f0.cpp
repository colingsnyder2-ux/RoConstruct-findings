// roc 2007-08 004a05f0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a05f0
//
// 004a05f0  8b442408             mov eax, dword ptr [esp + 8]
// 004a05f4  56                   push esi
// 004a05f5  8b742408             mov esi, dword ptr [esp + 8]
// 004a05f9  6a01                 push 1
// 004a05fb  6a08                 push 8
// 004a05fd  50                   push eax
// 004a05fe  8bce                 mov ecx, esi
// 004a0600  e89bf3ffff           call 0x49f9a0
// 004a0605  8bc6                 mov eax, esi
// 004a0607  5e                   pop esi
// 004a0608  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??5Network@RBX@@YAAAVBitStream@RakNet@@AAV23@AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
