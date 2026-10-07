// roc 2008-06 00507d40  unit: G3D::Shader  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507d40
//
// 00507d40  6aff                 push -1
// 00507d42  68e0b97c00           push 0x7cb9e0
// 00507d47  64a100000000         mov eax, dword ptr fs:[0]
// 00507d4d  50                   push eax
// 00507d4e  64892500000000       mov dword ptr fs:[0], esp
// 00507d55  81ec8c000000         sub esp, 0x8c
// 00507d5b  6816b78000           push 0x80b716
// 00507d60  8d4c2474             lea ecx, [esp + 0x74]
// 00507d64  ff1558248000         call dword ptr [0x802458]
// 00507d6a  6816b78000           push 0x80b716
// 00507d6f  8d4c243c             lea ecx, [esp + 0x3c]
// 00507d73  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 00507d7e  ff1558248000         call dword ptr [0x802458]
// 00507d84  6816b78000           push 0x80b716
// 00507d89  8d4c2404             lea ecx, [esp + 4]
// 00507d8d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00507d95  ff1558248000         call dword ptr [0x802458]
// 00507d9b  6816b78000           push 0x80b716
// 00507da0  8d4c2458             lea ecx, [esp + 0x58]
// 00507da4  c684249800000002     mov byte ptr [esp + 0x98], 2
// 00507dac  ff1558248000         call dword ptr [0x802458]
// 00507db2  68e0e48100           push 0x81e4e0
// 00507db7  8d4c2420             lea ecx, [esp + 0x20]
// 00507dbb  c684249800000003     mov byte ptr [esp + 0x98], 3
// 00507dc3  ff1558248000         call dword ptr [0x802458]
// 00507dc9  8d442470             lea eax, [esp + 0x70]
// 00507dcd  50                   push eax
// 00507dce  8d4c243c             lea ecx, [esp + 0x3c]
// 00507dd2  51                   push ecx
// 00507dd3  8d542408             lea edx, [esp + 8]
// 00507dd7  52                   push edx
// 00507dd8  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00507ddf  8d442460             lea eax, [esp + 0x60]
// 00507de3  50                   push eax
// 00507de4  8d4c242c             lea ecx, [esp + 0x2c]
// 00507de8  51                   push ecx
// 00507de9  52                   push edx
// 00507dea  8bce                 mov ecx, esi
// 00507dec  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 00507df4  e877b10000           call 0x512f70
// 00507df9  8d4c241c             lea ecx, [esp + 0x1c]
// 00507dfd  c684249400000003     mov byte ptr [esp + 0x94], 3
// 00507e05  ff1568248000         call dword ptr [0x802468]
// 00507e0b  8d4c2454             lea ecx, [esp + 0x54]
// 00507e0f  c684249400000002     mov byte ptr [esp + 0x94], 2
// 00507e17  ff1568248000         call dword ptr [0x802468]
// 00507e1d  8d0c24               lea ecx, [esp]
// 00507e20  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00507e28  ff1568248000         call dword ptr [0x802468]
// 00507e2e  8d4c2438             lea ecx, [esp + 0x38]
// 00507e32  c684249400000000     mov byte ptr [esp + 0x94], 0
// 00507e3a  ff1568248000         call dword ptr [0x802468]
// 00507e40  8d4c2470             lea ecx, [esp + 0x70]
// 00507e44  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 00507e4f  ff1568248000         call dword ptr [0x802468]
// 00507e55  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00507e5c  50                   push eax
// 00507e5d  8bce                 mov ecx, esi
// 00507e5f  e86cb00000           call 0x512ed0
// 00507e64  8bce                 mov ecx, esi
// 00507e66  e815ac0000           call 0x512a80
// 00507e6b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00507e72  64890d00000000       mov dword ptr fs:[0], ecx
// 00507e79  81c498000000         add esp, 0x98
// 00507e7f  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
