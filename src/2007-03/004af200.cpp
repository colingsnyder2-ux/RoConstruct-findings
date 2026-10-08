// roc 2007-03 004af200  unit: seg_004a0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004af200
//
// 004af200  56                   push esi
// 004af201  57                   push edi
// 004af202  8bf1                 mov esi, ecx
// 004af204  e887aaffff           call 0x4a9c90
// 004af209  84c0                 test al, al
// 004af20b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004af20f  741b                 je 0x4af22c
// 004af211  6a01                 push 1
// 004af213  6a20                 push 0x20
// 004af215  57                   push edi
// 004af216  8bce                 mov ecx, esi
// 004af218  e85387feff           call 0x497970
// 004af21d  6a01                 push 1
// 004af21f  6a10                 push 0x10
// 004af221  8d4704               lea eax, [edi + 4]
// 004af224  50                   push eax
// 004af225  8bce                 mov ecx, esi
// 004af227  e84487feff           call 0x497970
// 004af22c  6a01                 push 1
// 004af22e  6a10                 push 0x10
// 004af230  83c708               add edi, 8
// 004af233  57                   push edi
// 004af234  8bce                 mov ecx, esi
// 004af236  e83587feff           call 0x497970
// 004af23b  5f                   pop edi
// 004af23c  5e                   pop esi
// 004af23d  c20400               ret 4
// library rbxgs-raknet/ReplicaManager.cpp (function ??$Read@UNetworkID@@@BitStream@RakNet@@QAE_NAAUNetworkID@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReplicaManager.cpp
