// roc 2007-08 004a0230  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0230
//
// 004a0230  807c240800           cmp byte ptr [esp + 8], 0
// 004a0235  56                   push esi
// 004a0236  8b742408             mov esi, dword ptr [esp + 8]
// 004a023a  8bce                 mov ecx, esi
// 004a023c  7409                 je 0x4a0247
// 004a023e  e8adfaffff           call 0x49fcf0
// 004a0243  8bc6                 mov eax, esi
// 004a0245  5e                   pop esi
// 004a0246  c3                   ret 
// 004a0247  e884faffff           call 0x49fcd0
// 004a024c  8bc6                 mov eax, esi
// 004a024e  5e                   pop esi
// 004a024f  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
