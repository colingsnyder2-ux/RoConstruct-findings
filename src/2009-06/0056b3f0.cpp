// from server: 100% by auto
// roc 2009-06 0056b3f0  unit: G3D::Shader  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056b3f0
//
// 0056b3f0  6aff                 push -1
// 0056b3f2  6890fc8500           push 0x85fc90
// 0056b3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0056b3fd  50                   push eax
// 0056b3fe  64892500000000       mov dword ptr fs:[0], esp
// 0056b405  81ec8c000000         sub esp, 0x8c
// 0056b40b  6816d28a00           push 0x8ad216
// 0056b410  8d4c2474             lea ecx, [esp + 0x74]
// 0056b414  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b41a  6816d28a00           push 0x8ad216
// 0056b41f  8d4c243c             lea ecx, [esp + 0x3c]
// 0056b423  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0056b42e  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b434  6816d28a00           push 0x8ad216
// 0056b439  8d4c2404             lea ecx, [esp + 4]
// 0056b43d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0056b445  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b44b  80bc24a000000000     cmp byte ptr [esp + 0xa0], 0
// 0056b453  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0056b45b  b898ff8b00           mov eax, 0x8bff98
// 0056b460  7505                 jne 0x56b467
// 0056b462  b894ff8b00           mov eax, 0x8bff94
// 0056b467  50                   push eax
// 0056b468  8d4c2458             lea ecx, [esp + 0x58]
// 0056b46c  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b472  6890ff8b00           push 0x8bff90
// 0056b477  8d4c2420             lea ecx, [esp + 0x20]
// 0056b47b  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0056b483  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b489  8d442470             lea eax, [esp + 0x70]
// 0056b48d  50                   push eax
// 0056b48e  8d4c243c             lea ecx, [esp + 0x3c]
// 0056b492  51                   push ecx
// 0056b493  8d542408             lea edx, [esp + 8]
// 0056b497  52                   push edx
// 0056b498  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0056b49f  8d442460             lea eax, [esp + 0x60]
// 0056b4a3  50                   push eax
// 0056b4a4  8d4c242c             lea ecx, [esp + 0x2c]
// 0056b4a8  51                   push ecx
// 0056b4a9  52                   push edx
// 0056b4aa  8bce                 mov ecx, esi
// 0056b4ac  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 0056b4b4  e857ed0000           call 0x57a210
// 0056b4b9  8d4c241c             lea ecx, [esp + 0x1c]
// 0056b4bd  c684249400000003     mov byte ptr [esp + 0x94], 3
// 0056b4c5  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b4cb  8d4c2454             lea ecx, [esp + 0x54]
// 0056b4cf  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0056b4d7  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b4dd  8d0c24               lea ecx, [esp]
// 0056b4e0  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0056b4e8  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b4ee  8d4c2438             lea ecx, [esp + 0x38]
// 0056b4f2  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0056b4fa  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b500  8d4c2470             lea ecx, [esp + 0x70]
// 0056b504  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0056b50f  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b515  8bce                 mov ecx, esi
// 0056b517  e804e80000           call 0x579d20
// 0056b51c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0056b523  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b52a  81c498000000         add esp, 0x98
// 0056b530  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
