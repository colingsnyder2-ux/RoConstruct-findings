// roc 2007-03 004fa5b0  unit: seg_004f0000  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fa5b0
//
// 004fa5b0  6aff                 push -1
// 004fa5b2  68d4067500           push 0x7506d4
// 004fa5b7  64a100000000         mov eax, dword ptr fs:[0]
// 004fa5bd  50                   push eax
// 004fa5be  81eca8000000         sub esp, 0xa8
// 004fa5c4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fa5c9  33c4                 xor eax, esp
// 004fa5cb  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 004fa5d2  56                   push esi
// 004fa5d3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fa5d8  33c4                 xor eax, esp
// 004fa5da  50                   push eax
// 004fa5db  8d8424b0000000       lea eax, [esp + 0xb0]
// 004fa5e2  64a300000000         mov dword ptr fs:[0], eax
// 004fa5e8  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 004fa5ef  6a00                 push 0
// 004fa5f1  6a01                 push 1
// 004fa5f3  56                   push esi
// 004fa5f4  8d4c246c             lea ecx, [esp + 0x6c]
// 004fa5f8  e8e3710000           call 0x5017e0
// 004fa5fd  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 004fa604  85c0                 test eax, eax
// 004fa606  c78424b800000000000000 mov dword ptr [esp + 0xb8], 0
// 004fa611  7f35                 jg 0x4fa648
// 004fa613  68c4fc7900           push 0x79fcc4
// 004fa618  8d4c2410             lea ecx, [esp + 0x10]
// 004fa61c  ff1578e77700         call dword ptr [0x77e778]
// 004fa622  56                   push esi
// 004fa623  8d442410             lea eax, [esp + 0x10]
// 004fa627  50                   push eax
// 004fa628  8d4c2430             lea ecx, [esp + 0x30]
// 004fa62c  c68424c000000001     mov byte ptr [esp + 0xc0], 1
// 004fa634  e8b74ef7ff           call 0x46f4f0
// 004fa639  6824b18400           push 0x84b124
// 004fa63e  8d4c242c             lea ecx, [esp + 0x2c]
// 004fa642  51                   push ecx
// 004fa643  e8e6491200           call 0x61f02e
// 004fa648  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 004fa650  7617                 jbe 0x4fa669
// 004fa652  6840bf8400           push 0x84bf40
// 004fa657  8d54240c             lea edx, [esp + 0xc]
// 004fa65b  52                   push edx
// 004fa65c  c744241098967900     mov dword ptr [esp + 0x10], 0x799698
// 004fa664  e8c5491200           call 0x61f02e
// 004fa669  6a08                 push 8
// 004fa66b  50                   push eax
// 004fa66c  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 004fa673  50                   push eax
// 004fa674  56                   push esi
// 004fa675  e8b6f1ffff           call 0x4f9830
// 004fa67a  83c410               add esp, 0x10
// 004fa67d  8d4c2460             lea ecx, [esp + 0x60]
// 004fa681  8bf0                 mov esi, eax
// 004fa683  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 004fa68e  e8fd6e0000           call 0x501590
// 004fa693  8bc6                 mov eax, esi
// 004fa695  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 004fa69c  64890d00000000       mov dword ptr fs:[0], ecx
// 004fa6a3  59                   pop ecx
// 004fa6a4  5e                   pop esi
// 004fa6a5  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 004fa6ac  33cc                 xor ecx, esp
// 004fa6ae  e8f3471200           call 0x61eea6
// 004fa6b3  81c4b4000000         add esp, 0xb4
// 004fa6b9  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?resolveFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
