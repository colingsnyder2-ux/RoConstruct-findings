// roc 2011-06 0050c5c0  unit: RBX::Network::ServerReplicator  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050c5c0
//
// 0050c5c0  56                   push esi
// 0050c5c1  8bf1                 mov esi, ecx
// 0050c5c3  837e0800             cmp dword ptr [esi + 8], 0
// 0050c5c7  7430                 je 0x50c5f9
// 0050c5c9  8b06                 mov eax, dword ptr [esi]
// 0050c5cb  50                   push eax
// 0050c5cc  e833dd2f00           call 0x80a304
// 0050c5d1  83c404               add esp, 4
// 0050c5d4  c7460800000000       mov dword ptr [esi + 8], 0
// 0050c5db  837e0800             cmp dword ptr [esi + 8], 0
// 0050c5df  c70600000000         mov dword ptr [esi], 0
// 0050c5e5  c7460400000000       mov dword ptr [esi + 4], 0
// 0050c5ec  760b                 jbe 0x50c5f9
// 0050c5ee  8b0e                 mov ecx, dword ptr [esi]
// 0050c5f0  51                   push ecx
// 0050c5f1  e80edd2f00           call 0x80a304
// 0050c5f6  83c404               add esp, 4
// 0050c5f9  5e                   pop esi
// 0050c5fa  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??1?$OrderedList@URakNetGUID@RakNet@@U12@$1??$defaultOrderedListComparison@URakNetGUID@RakNet@@U12@@DataStructures@@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
