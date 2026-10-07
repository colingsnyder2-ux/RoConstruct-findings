// roc 2009-06 0056b2b0  unit: G3D::Shader  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056b2b0
//
// 0056b2b0  6aff                 push -1
// 0056b2b2  6890fc8500           push 0x85fc90
// 0056b2b7  64a100000000         mov eax, dword ptr fs:[0]
// 0056b2bd  50                   push eax
// 0056b2be  64892500000000       mov dword ptr fs:[0], esp
// 0056b2c5  81ec8c000000         sub esp, 0x8c
// 0056b2cb  6816d28a00           push 0x8ad216
// 0056b2d0  8d4c2474             lea ecx, [esp + 0x74]
// 0056b2d4  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b2da  6816d28a00           push 0x8ad216
// 0056b2df  8d4c243c             lea ecx, [esp + 0x3c]
// 0056b2e3  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0056b2ee  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b2f4  6816d28a00           push 0x8ad216
// 0056b2f9  8d4c2404             lea ecx, [esp + 4]
// 0056b2fd  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0056b305  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b30b  6816d28a00           push 0x8ad216
// 0056b310  8d4c2458             lea ecx, [esp + 0x58]
// 0056b314  c684249800000002     mov byte ptr [esp + 0x98], 2
// 0056b31c  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b322  6890ff8b00           push 0x8bff90
// 0056b327  8d4c2420             lea ecx, [esp + 0x20]
// 0056b32b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0056b333  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b339  8d442470             lea eax, [esp + 0x70]
// 0056b33d  50                   push eax
// 0056b33e  8d4c243c             lea ecx, [esp + 0x3c]
// 0056b342  51                   push ecx
// 0056b343  8d542408             lea edx, [esp + 8]
// 0056b347  52                   push edx
// 0056b348  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0056b34f  8d442460             lea eax, [esp + 0x60]
// 0056b353  50                   push eax
// 0056b354  8d4c242c             lea ecx, [esp + 0x2c]
// 0056b358  51                   push ecx
// 0056b359  52                   push edx
// 0056b35a  8bce                 mov ecx, esi
// 0056b35c  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 0056b364  e8a7ee0000           call 0x57a210
// 0056b369  8d4c241c             lea ecx, [esp + 0x1c]
// 0056b36d  c684249400000003     mov byte ptr [esp + 0x94], 3
// 0056b375  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b37b  8d4c2454             lea ecx, [esp + 0x54]
// 0056b37f  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0056b387  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b38d  8d0c24               lea ecx, [esp]
// 0056b390  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0056b398  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b39e  8d4c2438             lea ecx, [esp + 0x38]
// 0056b3a2  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0056b3aa  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b3b0  8d4c2470             lea ecx, [esp + 0x70]
// 0056b3b4  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0056b3bf  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b3c5  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0056b3cc  50                   push eax
// 0056b3cd  8bce                 mov ecx, esi
// 0056b3cf  e89ced0000           call 0x57a170
// 0056b3d4  8bce                 mov ecx, esi
// 0056b3d6  e845e90000           call 0x579d20
// 0056b3db  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0056b3e2  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b3e9  81c498000000         add esp, 0x98
// 0056b3ef  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
