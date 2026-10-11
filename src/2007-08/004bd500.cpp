// from server: 100% by auto
// roc 2007-08 004bd500  unit: RakPeer  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bd500
//
// 004bd500  6aff                 push -1
// 004bd502  6818b77400           push 0x74b718
// 004bd507  64a100000000         mov eax, dword ptr fs:[0]
// 004bd50d  50                   push eax
// 004bd50e  51                   push ecx
// 004bd50f  56                   push esi
// 004bd510  a188518b00           mov eax, dword ptr [0x8b5188]
// 004bd515  33c4                 xor eax, esp
// 004bd517  50                   push eax
// 004bd518  8d44240c             lea eax, [esp + 0xc]
// 004bd51c  64a300000000         mov dword ptr fs:[0], eax
// 004bd522  8bf1                 mov esi, ecx
// 004bd524  89742408             mov dword ptr [esp + 8], esi
// 004bd528  8b4608               mov eax, dword ptr [esi + 8]
// 004bd52b  85c0                 test eax, eax
// 004bd52d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004bd535  7426                 je 0x4bd55d
// 004bd537  3d00020000           cmp eax, 0x200
// 004bd53c  7618                 jbe 0x4bd556
// 004bd53e  8b06                 mov eax, dword ptr [esi]
// 004bd540  50                   push eax
// 004bd541  e81c271700           call 0x62fc62
// 004bd546  83c404               add esp, 4
// 004bd549  c7460800000000       mov dword ptr [esi + 8], 0
// 004bd550  c70600000000         mov dword ptr [esi], 0
// 004bd556  c7460400000000       mov dword ptr [esi + 4], 0
// 004bd55d  837e0800             cmp dword ptr [esi + 8], 0
// 004bd561  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004bd569  760b                 jbe 0x4bd576
// 004bd56b  8b06                 mov eax, dword ptr [esi]
// 004bd56d  50                   push eax
// 004bd56e  e8ef261700           call 0x62fc62
// 004bd573  83c404               add esp, 4
// 004bd576  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bd57a  64890d00000000       mov dword ptr fs:[0], ecx
// 004bd581  59                   pop ecx
// 004bd582  5e                   pop esi
// 004bd583  83c410               add esp, 0x10
// 004bd586  c3                   ret 

// from server: 79% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReplicaManager.cpp