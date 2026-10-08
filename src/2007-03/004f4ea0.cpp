// roc 2007-03 004f4ea0  unit: seg_004f0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f4ea0
//
// 004f4ea0  6aff                 push -1
// 004f4ea2  6878fd7400           push 0x74fd78
// 004f4ea7  64a100000000         mov eax, dword ptr fs:[0]
// 004f4ead  50                   push eax
// 004f4eae  81ec8c000000         sub esp, 0x8c
// 004f4eb4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f4eb9  33c4                 xor eax, esp
// 004f4ebb  89842488000000       mov dword ptr [esp + 0x88], eax
// 004f4ec2  56                   push esi
// 004f4ec3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f4ec8  33c4                 xor eax, esp
// 004f4eca  50                   push eax
// 004f4ecb  8d842494000000       lea eax, [esp + 0x94]
// 004f4ed2  64a300000000         mov dword ptr fs:[0], eax
// 004f4ed8  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 004f4edf  b801000000           mov eax, 1
// 004f4ee4  89442408             mov dword ptr [esp + 8], eax
// 004f4ee8  8844241c             mov byte ptr [esp + 0x1c], al
// 004f4eec  8d442408             lea eax, [esp + 8]
// 004f4ef0  50                   push eax
// 004f4ef1  8d4c2424             lea ecx, [esp + 0x24]
// 004f4ef5  c644241000           mov byte ptr [esp + 0x10], 0
// 004f4efa  c744241450000000     mov dword ptr [esp + 0x14], 0x50
// 004f4f02  c744241804000000     mov dword ptr [esp + 0x18], 4
// 004f4f0a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004f4f12  e869920000           call 0x4fe180
// 004f4f17  8d4c2420             lea ecx, [esp + 0x20]
// 004f4f1b  51                   push ecx
// 004f4f1c  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 004f4f27  e834f3ffff           call 0x4f4260
// 004f4f2c  83c404               add esp, 4
// 004f4f2f  56                   push esi
// 004f4f30  8d4c2424             lea ecx, [esp + 0x24]
// 004f4f34  e887910000           call 0x4fe0c0
// 004f4f39  8d4c2420             lea ecx, [esp + 0x20]
// 004f4f3d  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 004f4f48  e87383f7ff           call 0x46d2c0
// 004f4f4d  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 004f4f54  64890d00000000       mov dword ptr fs:[0], ecx
// 004f4f5b  59                   pop ecx
// 004f4f5c  5e                   pop esi
// 004f4f5d  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 004f4f64  33cc                 xor ecx, esp
// 004f4f66  e83b9f1200           call 0x61eea6
// 004f4f6b  81c498000000         add esp, 0x98
// 004f4f71  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?describeSystem@System@G3D@@SAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
