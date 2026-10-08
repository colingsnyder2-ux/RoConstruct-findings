// roc 2009-06 004dd280  unit: RBX::Network::ConcurrentRakPeer::PacketJob  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dd280
//
// 004dd280  8a442408             mov al, byte ptr [esp + 8]
// 004dd284  56                   push esi
// 004dd285  8b742408             mov esi, dword ptr [esp + 8]
// 004dd289  6a01                 push 1
// 004dd28b  6a08                 push 8
// 004dd28d  8d4c2414             lea ecx, [esp + 0x14]
// 004dd291  51                   push ecx
// 004dd292  8bce                 mov ecx, esi
// 004dd294  88442418             mov byte ptr [esp + 0x18], al
// 004dd298  e8a3c9ffff           call 0x4d9c40
// 004dd29d  8bc6                 mov eax, esi
// 004dd29f  5e                   pop esi
// 004dd2a0  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
