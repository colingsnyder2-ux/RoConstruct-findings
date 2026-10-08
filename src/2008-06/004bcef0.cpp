// roc 2008-06 004bcef0  unit: ProfiledRakPeer  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bcef0
//
// 004bcef0  56                   push esi
// 004bcef1  57                   push edi
// 004bcef2  8bf1                 mov esi, ecx
// 004bcef4  e837cbfeff           call 0x4a9a30
// 004bcef9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004bcefd  84c0                 test al, al
// 004bceff  741b                 je 0x4bcf1c
// 004bcf01  6a01                 push 1
// 004bcf03  6a20                 push 0x20
// 004bcf05  57                   push edi
// 004bcf06  8bce                 mov ecx, esi
// 004bcf08  e80383feff           call 0x4a5210
// 004bcf0d  6a01                 push 1
// 004bcf0f  6a10                 push 0x10
// 004bcf11  8d4704               lea eax, [edi + 4]
// 004bcf14  50                   push eax
// 004bcf15  8bce                 mov ecx, esi
// 004bcf17  e8f482feff           call 0x4a5210
// 004bcf1c  6a01                 push 1
// 004bcf1e  6a10                 push 0x10
// 004bcf20  83c708               add edi, 8
// 004bcf23  57                   push edi
// 004bcf24  8bce                 mov ecx, esi
// 004bcf26  e8e582feff           call 0x4a5210
// 004bcf2b  5f                   pop edi
// 004bcf2c  5e                   pop esi
// 004bcf2d  c20400               ret 4
// library rbxgs-raknet/ReplicaManager.cpp (function ??$Read@UNetworkID@@@BitStream@RakNet@@QAE_NAAUNetworkID@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReplicaManager.cpp
