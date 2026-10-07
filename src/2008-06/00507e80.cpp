// roc 2008-06 00507e80  unit: G3D::Shader  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507e80
//
// 00507e80  6aff                 push -1
// 00507e82  68e0b97c00           push 0x7cb9e0
// 00507e87  64a100000000         mov eax, dword ptr fs:[0]
// 00507e8d  50                   push eax
// 00507e8e  64892500000000       mov dword ptr fs:[0], esp
// 00507e95  81ec8c000000         sub esp, 0x8c
// 00507e9b  6816b78000           push 0x80b716
// 00507ea0  8d4c2474             lea ecx, [esp + 0x74]
// 00507ea4  ff1558248000         call dword ptr [0x802458]
// 00507eaa  6816b78000           push 0x80b716
// 00507eaf  8d4c243c             lea ecx, [esp + 0x3c]
// 00507eb3  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 00507ebe  ff1558248000         call dword ptr [0x802458]
// 00507ec4  6816b78000           push 0x80b716
// 00507ec9  8d4c2404             lea ecx, [esp + 4]
// 00507ecd  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00507ed5  ff1558248000         call dword ptr [0x802458]
// 00507edb  80bc24a000000000     cmp byte ptr [esp + 0xa0], 0
// 00507ee3  c684249400000002     mov byte ptr [esp + 0x94], 2
// 00507eeb  b8e8e48100           mov eax, 0x81e4e8
// 00507ef0  7505                 jne 0x507ef7
// 00507ef2  b8e4e48100           mov eax, 0x81e4e4
// 00507ef7  50                   push eax
// 00507ef8  8d4c2458             lea ecx, [esp + 0x58]
// 00507efc  ff1558248000         call dword ptr [0x802458]
// 00507f02  68e0e48100           push 0x81e4e0
// 00507f07  8d4c2420             lea ecx, [esp + 0x20]
// 00507f0b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 00507f13  ff1558248000         call dword ptr [0x802458]
// 00507f19  8d442470             lea eax, [esp + 0x70]
// 00507f1d  50                   push eax
// 00507f1e  8d4c243c             lea ecx, [esp + 0x3c]
// 00507f22  51                   push ecx
// 00507f23  8d542408             lea edx, [esp + 8]
// 00507f27  52                   push edx
// 00507f28  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00507f2f  8d442460             lea eax, [esp + 0x60]
// 00507f33  50                   push eax
// 00507f34  8d4c242c             lea ecx, [esp + 0x2c]
// 00507f38  51                   push ecx
// 00507f39  52                   push edx
// 00507f3a  8bce                 mov ecx, esi
// 00507f3c  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 00507f44  e827b00000           call 0x512f70
// 00507f49  8d4c241c             lea ecx, [esp + 0x1c]
// 00507f4d  c684249400000003     mov byte ptr [esp + 0x94], 3
// 00507f55  ff1568248000         call dword ptr [0x802468]
// 00507f5b  8d4c2454             lea ecx, [esp + 0x54]
// 00507f5f  c684249400000002     mov byte ptr [esp + 0x94], 2
// 00507f67  ff1568248000         call dword ptr [0x802468]
// 00507f6d  8d0c24               lea ecx, [esp]
// 00507f70  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00507f78  ff1568248000         call dword ptr [0x802468]
// 00507f7e  8d4c2438             lea ecx, [esp + 0x38]
// 00507f82  c684249400000000     mov byte ptr [esp + 0x94], 0
// 00507f8a  ff1568248000         call dword ptr [0x802468]
// 00507f90  8d4c2470             lea ecx, [esp + 0x70]
// 00507f94  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 00507f9f  ff1568248000         call dword ptr [0x802468]
// 00507fa5  8bce                 mov ecx, esi
// 00507fa7  e8d4aa0000           call 0x512a80
// 00507fac  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00507fb3  64890d00000000       mov dword ptr fs:[0], ecx
// 00507fba  81c498000000         add esp, 0x98
// 00507fc0  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
