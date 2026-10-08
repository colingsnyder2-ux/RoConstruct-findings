// roc 2008-06 004bce80  unit: ProfiledRakPeer  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bce80
//
// 004bce80  83ec0c               sub esp, 0xc
// 004bce83  56                   push esi
// 004bce84  8bf1                 mov esi, ecx
// 004bce86  e8a5cbfeff           call 0x4a9a30
// 004bce8b  84c0                 test al, al
// 004bce8d  7439                 je 0x4bcec8
// 004bce8f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004bce93  8b442414             mov eax, dword ptr [esp + 0x14]
// 004bce97  6a01                 push 1
// 004bce99  6a20                 push 0x20
// 004bce9b  8d542410             lea edx, [esp + 0x10]
// 004bce9f  894c2414             mov dword ptr [esp + 0x14], ecx
// 004bcea3  52                   push edx
// 004bcea4  8bce                 mov ecx, esi
// 004bcea6  89442414             mov dword ptr [esp + 0x14], eax
// 004bceaa  e85187feff           call 0x4a5600
// 004bceaf  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 004bceb4  6a01                 push 1
// 004bceb6  6a10                 push 0x10
// 004bceb8  8d4c240c             lea ecx, [esp + 0xc]
// 004bcebc  51                   push ecx
// 004bcebd  8bce                 mov ecx, esi
// 004bcebf  89442410             mov dword ptr [esp + 0x10], eax
// 004bcec3  e83887feff           call 0x4a5600
// 004bcec8  0fb754241c           movzx edx, word ptr [esp + 0x1c]
// 004bcecd  6a01                 push 1
// 004bcecf  6a10                 push 0x10
// 004bced1  8d44240c             lea eax, [esp + 0xc]
// 004bced5  50                   push eax
// 004bced6  8bce                 mov ecx, esi
// 004bced8  89542410             mov dword ptr [esp + 0x10], edx
// 004bcedc  e81f87feff           call 0x4a5600
// 004bcee1  5e                   pop esi
// 004bcee2  83c40c               add esp, 0xc
// 004bcee5  c20c00               ret 0xc
// library rbxgs-raknet/ReplicaManager.cpp (function ??$Write@UNetworkID@@@BitStream@RakNet@@QAEXUNetworkID@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReplicaManager.cpp
