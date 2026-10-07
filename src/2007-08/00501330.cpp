// roc 2007-08 00501330  unit: G3D::Shader  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00501330
//
// 00501330  6aff                 push -1
// 00501332  6808ef7400           push 0x74ef08
// 00501337  64a100000000         mov eax, dword ptr fs:[0]
// 0050133d  50                   push eax
// 0050133e  81ec8c000000         sub esp, 0x8c
// 00501344  a188518b00           mov eax, dword ptr [0x8b5188]
// 00501349  33c4                 xor eax, esp
// 0050134b  89842488000000       mov dword ptr [esp + 0x88], eax
// 00501352  56                   push esi
// 00501353  a188518b00           mov eax, dword ptr [0x8b5188]
// 00501358  33c4                 xor eax, esp
// 0050135a  50                   push eax
// 0050135b  8d842494000000       lea eax, [esp + 0x94]
// 00501362  64a300000000         mov dword ptr fs:[0], eax
// 00501368  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 0050136f  b801000000           mov eax, 1
// 00501374  89442408             mov dword ptr [esp + 8], eax
// 00501378  8844241c             mov byte ptr [esp + 0x1c], al
// 0050137c  8d442408             lea eax, [esp + 8]
// 00501380  50                   push eax
// 00501381  8d4c2424             lea ecx, [esp + 0x24]
// 00501385  c644241000           mov byte ptr [esp + 0x10], 0
// 0050138a  c744241450000000     mov dword ptr [esp + 0x14], 0x50
// 00501392  c744241804000000     mov dword ptr [esp + 0x18], 4
// 0050139a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005013a2  e8297a0000           call 0x508dd0
// 005013a7  8d4c2420             lea ecx, [esp + 0x20]
// 005013ab  51                   push ecx
// 005013ac  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 005013b7  e834f3ffff           call 0x5006f0
// 005013bc  83c404               add esp, 4
// 005013bf  56                   push esi
// 005013c0  8d4c2424             lea ecx, [esp + 0x24]
// 005013c4  e8c7790000           call 0x508d90
// 005013c9  8d4c2420             lea ecx, [esp + 0x20]
// 005013cd  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 005013d8  e853bff6ff           call 0x46d330
// 005013dd  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 005013e4  64890d00000000       mov dword ptr fs:[0], ecx
// 005013eb  59                   pop ecx
// 005013ec  5e                   pop esi
// 005013ed  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 005013f4  33cc                 xor ecx, esp
// 005013f6  e823f61200           call 0x630a1e
// 005013fb  81c498000000         add esp, 0x98
// 00501401  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?describeSystem@System@G3D@@SAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
