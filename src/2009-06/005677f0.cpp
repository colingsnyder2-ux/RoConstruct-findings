// roc 2009-06 005677f0  unit: RBX::RbxG3D::RenderScene  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005677f0
//
// 005677f0  6aff                 push -1
// 005677f2  68f4f88500           push 0x85f8f4
// 005677f7  64a100000000         mov eax, dword ptr fs:[0]
// 005677fd  50                   push eax
// 005677fe  64892500000000       mov dword ptr fs:[0], esp
// 00567805  83ec4c               sub esp, 0x4c
// 00567808  56                   push esi
// 00567809  8bf1                 mov esi, ecx
// 0056780b  8b4604               mov eax, dword ptr [esi + 4]
// 0056780e  3b4608               cmp eax, dword ptr [esi + 8]
// 00567811  89742404             mov dword ptr [esp + 4], esi
// 00567815  7d3b                 jge 0x567852
// 00567817  8b16                 mov edx, dword ptr [esi]
// 00567819  8bc8                 mov ecx, eax
// 0056781b  c1e104               shl ecx, 4
// 0056781e  03c8                 add ecx, eax
// 00567820  8d0c8a               lea ecx, [edx + ecx*4]
// 00567823  894c2408             mov dword ptr [esp + 8], ecx
// 00567827  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0056782f  85c9                 test ecx, ecx
// 00567831  740a                 je 0x56783d
// 00567833  8b442460             mov eax, dword ptr [esp + 0x60]
// 00567837  50                   push eax
// 00567838  e843e6ffff           call 0x565e80
// 0056783d  ff4604               inc dword ptr [esi + 4]
// 00567840  5e                   pop esi
// 00567841  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00567845  64890d00000000       mov dword ptr fs:[0], ecx
// 0056784c  83c458               add esp, 0x58
// 0056784f  c20400               ret 4
// 00567852  8b0e                 mov ecx, dword ptr [esi]
// 00567854  57                   push edi
// 00567855  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00567859  3bf9                 cmp edi, ecx
// 0056785b  7276                 jb 0x5678d3
// 0056785d  8bd0                 mov edx, eax
// 0056785f  c1e204               shl edx, 4
// 00567862  03d0                 add edx, eax
// 00567864  8d0c91               lea ecx, [ecx + edx*4]
// 00567867  3bf9                 cmp edi, ecx
// 00567869  7368                 jae 0x5678d3
// 0056786b  57                   push edi
// 0056786c  8d4c2414             lea ecx, [esp + 0x14]
// 00567870  e80be6ffff           call 0x565e80
// 00567875  8d542410             lea edx, [esp + 0x10]
// 00567879  52                   push edx
// 0056787a  8bce                 mov ecx, esi
// 0056787c  c744246001000000     mov dword ptr [esp + 0x60], 1
// 00567884  e867ffffff           call 0x5677f0
// 00567889  8b442450             mov eax, dword ptr [esp + 0x50]
// 0056788d  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00567895  85c0                 test eax, eax
// 00567897  745b                 je 0x5678f4
// 00567899  83c004               add eax, 4
// 0056789c  50                   push eax
// 0056789d  ff15a4e18900         call dword ptr [0x89e1a4]
// 005678a3  85c0                 test eax, eax
// 005678a5  754d                 jne 0x5678f4
// 005678a7  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005678ab  e8d0d4edff           call 0x444d80
// 005678b0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005678b4  85c9                 test ecx, ecx
// 005678b6  743c                 je 0x5678f4
// 005678b8  8b01                 mov eax, dword ptr [ecx]
// 005678ba  8b10                 mov edx, dword ptr [eax]
// 005678bc  6a01                 push 1
// 005678be  ffd2                 call edx
// 005678c0  5f                   pop edi
// 005678c1  5e                   pop esi
// 005678c2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005678c6  64890d00000000       mov dword ptr fs:[0], ecx
// 005678cd  83c458               add esp, 0x58
// 005678d0  c20400               ret 4
// 005678d3  6a00                 push 0
// 005678d5  40                   inc eax
// 005678d6  50                   push eax
// 005678d7  8bce                 mov ecx, esi
// 005678d9  e882f6ffff           call 0x566f60
// 005678de  8b4604               mov eax, dword ptr [esi + 4]
// 005678e1  8b16                 mov edx, dword ptr [esi]
// 005678e3  8bc8                 mov ecx, eax
// 005678e5  c1e104               shl ecx, 4
// 005678e8  03c8                 add ecx, eax
// 005678ea  57                   push edi
// 005678eb  8d4c8abc             lea ecx, [edx + ecx*4 - 0x44]
// 005678ef  e8ece5ffff           call 0x565ee0
// 005678f4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005678f8  5f                   pop edi
// 005678f9  5e                   pop esi
// 005678fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00567901  83c458               add esp, 0x58
// 00567904  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?append@?$Array@VRenderSurface@Render@RBX@@@G3D@@QAEXABVRenderSurface@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
