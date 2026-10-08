// roc 2007-08 004a0610  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0610
//
// 004a0610  d9442408             fld dword ptr [esp + 8]
// 004a0614  56                   push esi
// 004a0615  8b742408             mov esi, dword ptr [esp + 8]
// 004a0619  d95c240c             fstp dword ptr [esp + 0xc]
// 004a061d  6a01                 push 1
// 004a061f  6a20                 push 0x20
// 004a0621  8d442414             lea eax, [esp + 0x14]
// 004a0625  50                   push eax
// 004a0626  8bce                 mov ecx, esi
// 004a0628  e863f7ffff           call 0x49fd90
// 004a062d  8bc6                 mov eax, esi
// 004a062f  5e                   pop esi
// 004a0630  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
