// roc 2007-08 004ba0a0  unit: RakPeer  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba0a0
//
// 004ba0a0  56                   push esi
// 004ba0a1  57                   push edi
// 004ba0a2  8bf1                 mov esi, ecx
// 004ba0a4  e83796feff           call 0x4a36e0
// 004ba0a9  84c0                 test al, al
// 004ba0ab  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ba0af  741b                 je 0x4ba0cc
// 004ba0b1  6a01                 push 1
// 004ba0b3  6a20                 push 0x20
// 004ba0b5  57                   push edi
// 004ba0b6  8bce                 mov ecx, esi
// 004ba0b8  e8e358feff           call 0x49f9a0
// 004ba0bd  6a01                 push 1
// 004ba0bf  6a10                 push 0x10
// 004ba0c1  8d4704               lea eax, [edi + 4]
// 004ba0c4  50                   push eax
// 004ba0c5  8bce                 mov ecx, esi
// 004ba0c7  e8d458feff           call 0x49f9a0
// 004ba0cc  6a01                 push 1
// 004ba0ce  6a10                 push 0x10
// 004ba0d0  83c708               add edi, 8
// 004ba0d3  57                   push edi
// 004ba0d4  8bce                 mov ecx, esi
// 004ba0d6  e8c558feff           call 0x49f9a0
// 004ba0db  5f                   pop edi
// 004ba0dc  5e                   pop esi
// 004ba0dd  c20400               ret 4
// library rbxgs-raknet/ReplicaManager.cpp (function ??$Read@UNetworkID@@@BitStream@RakNet@@QAE_NAAUNetworkID@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReplicaManager.cpp
