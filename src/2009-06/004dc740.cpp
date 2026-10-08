// roc 2009-06 004dc740  unit: RBX::Network::ConcurrentRakPeer::PacketJob  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dc740
//
// 004dc740  807c240800           cmp byte ptr [esp + 8], 0
// 004dc745  56                   push esi
// 004dc746  8b742408             mov esi, dword ptr [esp + 8]
// 004dc74a  8bce                 mov ecx, esi
// 004dc74c  7409                 je 0x4dc757
// 004dc74e  e84dd4ffff           call 0x4d9ba0
// 004dc753  8bc6                 mov eax, esi
// 004dc755  5e                   pop esi
// 004dc756  c3                   ret 
// 004dc757  e824d4ffff           call 0x4d9b80
// 004dc75c  8bc6                 mov eax, esi
// 004dc75e  5e                   pop esi
// 004dc75f  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
