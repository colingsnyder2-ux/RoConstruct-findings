// roc 2009-06 0056ab60  unit: RBX::RbxG3D::RenderScene  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ab60
//
// 0056ab60  83ec20               sub esp, 0x20
// 0056ab63  57                   push edi
// 0056ab64  8bf9                 mov edi, ecx
// 0056ab66  833f00               cmp dword ptr [edi], 0
// 0056ab69  0f8484000000         je 0x56abf3
// 0056ab6f  56                   push esi
// 0056ab70  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0056ab74  8bce                 mov ecx, esi
// 0056ab76  e8059df3ff           call 0x4a4880
// 0056ab7b  8d442418             lea eax, [esp + 0x18]
// 0056ab7f  50                   push eax
// 0056ab80  8bce                 mov ecx, esi
// 0056ab82  e84938f3ff           call 0x49e3d0
// 0056ab87  8d4c2418             lea ecx, [esp + 0x18]
// 0056ab8b  51                   push ecx
// 0056ab8c  8bcf                 mov ecx, edi
// 0056ab8e  e87dfdffff           call 0x56a910
// 0056ab93  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056ab96  6a01                 push 1
// 0056ab98  8d54241c             lea edx, [esp + 0x1c]
// 0056ab9c  52                   push edx
// 0056ab9d  e86e05f3ff           call 0x49b110
// 0056aba2  8b4f08               mov ecx, dword ptr [edi + 8]
// 0056aba5  6a01                 push 1
// 0056aba7  8d44241c             lea eax, [esp + 0x1c]
// 0056abab  50                   push eax
// 0056abac  e85f05f3ff           call 0x49b110
// 0056abb1  57                   push edi
// 0056abb2  8bce                 mov ecx, esi
// 0056abb4  e84758f3ff           call 0x4a0400
// 0056abb9  e8c2b90000           call 0x576580
// 0056abbe  d900                 fld dword ptr [eax]
// 0056abc0  d95c2408             fstp dword ptr [esp + 8]
// 0056abc4  8d4c2408             lea ecx, [esp + 8]
// 0056abc8  d94004               fld dword ptr [eax + 4]
// 0056abcb  51                   push ecx
// 0056abcc  d95c2410             fstp dword ptr [esp + 0x10]
// 0056abd0  8d54241c             lea edx, [esp + 0x1c]
// 0056abd4  d94008               fld dword ptr [eax + 8]
// 0056abd7  56                   push esi
// 0056abd8  d95c2418             fstp dword ptr [esp + 0x18]
// 0056abdc  52                   push edx
// 0056abdd  d9e8                 fld1 
// 0056abdf  d95c2420             fstp dword ptr [esp + 0x20]
// 0056abe3  e8385e2d00           call 0x840a20
// 0056abe8  83c40c               add esp, 0xc
// 0056abeb  8bce                 mov ecx, esi
// 0056abed  e80e96f3ff           call 0x4a4200
// 0056abf2  5e                   pop esi
// 0056abf3  5f                   pop edi
// 0056abf4  83c420               add esp, 0x20
// 0056abf7  c20400               ret 4
// library rbxgs-render/DepthBlur.cpp (function ?apply@DepthBlur@Render@RBX@@QAEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
