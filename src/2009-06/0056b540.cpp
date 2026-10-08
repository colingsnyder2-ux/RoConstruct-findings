// from server: 100% by auto
// roc 2009-06 0056b540  unit: G3D::Shader  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056b540
//
// 0056b540  6aff                 push -1
// 0056b542  6890fc8500           push 0x85fc90
// 0056b547  64a100000000         mov eax, dword ptr fs:[0]
// 0056b54d  50                   push eax
// 0056b54e  64892500000000       mov dword ptr fs:[0], esp
// 0056b555  81ec8c000000         sub esp, 0x8c
// 0056b55b  6816d28a00           push 0x8ad216
// 0056b560  8d4c2474             lea ecx, [esp + 0x74]
// 0056b564  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b56a  6816d28a00           push 0x8ad216
// 0056b56f  8d4c243c             lea ecx, [esp + 0x3c]
// 0056b573  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0056b57e  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b584  6816d28a00           push 0x8ad216
// 0056b589  8d4c2404             lea ecx, [esp + 4]
// 0056b58d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0056b595  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b59b  6816d28a00           push 0x8ad216
// 0056b5a0  8d4c2458             lea ecx, [esp + 0x58]
// 0056b5a4  c684249800000002     mov byte ptr [esp + 0x98], 2
// 0056b5ac  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b5b2  6890ff8b00           push 0x8bff90
// 0056b5b7  8d4c2420             lea ecx, [esp + 0x20]
// 0056b5bb  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0056b5c3  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056b5c9  8d442470             lea eax, [esp + 0x70]
// 0056b5cd  50                   push eax
// 0056b5ce  8d4c243c             lea ecx, [esp + 0x3c]
// 0056b5d2  51                   push ecx
// 0056b5d3  8d542408             lea edx, [esp + 8]
// 0056b5d7  52                   push edx
// 0056b5d8  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0056b5df  8d442460             lea eax, [esp + 0x60]
// 0056b5e3  50                   push eax
// 0056b5e4  8d4c242c             lea ecx, [esp + 0x2c]
// 0056b5e8  51                   push ecx
// 0056b5e9  52                   push edx
// 0056b5ea  8bce                 mov ecx, esi
// 0056b5ec  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 0056b5f4  e817ec0000           call 0x57a210
// 0056b5f9  8d4c241c             lea ecx, [esp + 0x1c]
// 0056b5fd  c684249400000003     mov byte ptr [esp + 0x94], 3
// 0056b605  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b60b  8d4c2454             lea ecx, [esp + 0x54]
// 0056b60f  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0056b617  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b61d  8d0c24               lea ecx, [esp]
// 0056b620  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0056b628  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b62e  8d4c2438             lea ecx, [esp + 0x38]
// 0056b632  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0056b63a  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b640  8d4c2470             lea ecx, [esp + 0x70]
// 0056b644  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0056b64f  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056b655  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0056b65c  50                   push eax
// 0056b65d  8bce                 mov ecx, esi
// 0056b65f  e88ceb0000           call 0x57a1f0
// 0056b664  8bce                 mov ecx, esi
// 0056b666  e8b5e60000           call 0x579d20
// 0056b66b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0056b672  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b679  81c498000000         add esp, 0x98
// 0056b67f  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?var@G3D@@YAXAAVTextOutput@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
