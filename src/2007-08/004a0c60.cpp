// roc 2007-08 004a0c60  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0c60
//
// 004a0c60  56                   push esi
// 004a0c61  8b742408             mov esi, dword ptr [esp + 8]
// 004a0c65  57                   push edi
// 004a0c66  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a0c6a  6a01                 push 1
// 004a0c6c  6a20                 push 0x20
// 004a0c6e  57                   push edi
// 004a0c6f  8bce                 mov ecx, esi
// 004a0c71  e82aedffff           call 0x49f9a0
// 004a0c76  6a01                 push 1
// 004a0c78  6a20                 push 0x20
// 004a0c7a  8d4704               lea eax, [edi + 4]
// 004a0c7d  50                   push eax
// 004a0c7e  8bce                 mov ecx, esi
// 004a0c80  e81bedffff           call 0x49f9a0
// 004a0c85  6a01                 push 1
// 004a0c87  6a20                 push 0x20
// 004a0c89  83c708               add edi, 8
// 004a0c8c  57                   push edi
// 004a0c8d  8bce                 mov ecx, esi
// 004a0c8f  e80cedffff           call 0x49f9a0
// 004a0c94  5f                   pop edi
// 004a0c95  8bc6                 mov eax, esi
// 004a0c97  5e                   pop esi
// 004a0c98  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??5Network@RBX@@YAAAVBitStream@RakNet@@AAV23@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
