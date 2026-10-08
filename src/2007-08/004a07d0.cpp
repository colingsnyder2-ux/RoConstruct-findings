// roc 2007-08 004a07d0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a07d0
//
// 004a07d0  56                   push esi
// 004a07d1  8b742408             mov esi, dword ptr [esp + 8]
// 004a07d5  57                   push edi
// 004a07d6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a07da  d907                 fld dword ptr [edi]
// 004a07dc  6a01                 push 1
// 004a07de  6a20                 push 0x20
// 004a07e0  d95c2418             fstp dword ptr [esp + 0x18]
// 004a07e4  8d442418             lea eax, [esp + 0x18]
// 004a07e8  50                   push eax
// 004a07e9  8bce                 mov ecx, esi
// 004a07eb  e8a0f5ffff           call 0x49fd90
// 004a07f0  d94704               fld dword ptr [edi + 4]
// 004a07f3  6a01                 push 1
// 004a07f5  d95c2414             fstp dword ptr [esp + 0x14]
// 004a07f9  6a20                 push 0x20
// 004a07fb  8d4c2418             lea ecx, [esp + 0x18]
// 004a07ff  51                   push ecx
// 004a0800  8bce                 mov ecx, esi
// 004a0802  e889f5ffff           call 0x49fd90
// 004a0807  d94708               fld dword ptr [edi + 8]
// 004a080a  6a01                 push 1
// 004a080c  d95c2414             fstp dword ptr [esp + 0x14]
// 004a0810  6a20                 push 0x20
// 004a0812  8d542418             lea edx, [esp + 0x18]
// 004a0816  52                   push edx
// 004a0817  8bce                 mov ecx, esi
// 004a0819  e872f5ffff           call 0x49fd90
// 004a081e  5f                   pop edi
// 004a081f  8bc6                 mov eax, esi
// 004a0821  5e                   pop esi
// 004a0822  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
