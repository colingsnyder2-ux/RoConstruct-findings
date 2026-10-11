// from server: 100% by auto
// roc 2007-08 004ca170  unit: seg_004c0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca170
//
// 004ca170  6aff                 push -1
// 004ca172  6818b77400           push 0x74b718
// 004ca177  64a100000000         mov eax, dword ptr fs:[0]
// 004ca17d  50                   push eax
// 004ca17e  51                   push ecx
// 004ca17f  56                   push esi
// 004ca180  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ca185  33c4                 xor eax, esp
// 004ca187  50                   push eax
// 004ca188  8d44240c             lea eax, [esp + 0xc]
// 004ca18c  64a300000000         mov dword ptr fs:[0], eax
// 004ca192  8bf1                 mov esi, ecx
// 004ca194  89742408             mov dword ptr [esp + 8], esi
// 004ca198  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004ca1a0  e82bfdffff           call 0x4c9ed0
// 004ca1a5  837e0800             cmp dword ptr [esi + 8], 0
// 004ca1a9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004ca1b1  760b                 jbe 0x4ca1be
// 004ca1b3  8b06                 mov eax, dword ptr [esi]
// 004ca1b5  50                   push eax
// 004ca1b6  e8a75a1600           call 0x62fc62
// 004ca1bb  83c404               add esp, 4
// 004ca1be  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ca1c2  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca1c9  59                   pop ecx
// 004ca1ca  5e                   pop esi
// 004ca1cb  83c410               add esp, 0x10
// 004ca1ce  c3                   ret 

// from server: 67% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp