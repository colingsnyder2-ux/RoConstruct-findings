// roc 2010-06 005484e0  unit: RBX::RbxG3D::Material  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005484e0
//
// 005484e0  51                   push ecx
// 005484e1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005484e5  d9400c               fld dword ptr [eax + 0xc]
// 005484e8  8b542418             mov edx, dword ptr [esp + 0x18]
// 005484ec  56                   push esi
// 005484ed  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005484f1  51                   push ecx
// 005484f2  8b4808               mov ecx, dword ptr [eax + 8]
// 005484f5  d91c24               fstp dword ptr [esp]
// 005484f8  51                   push ecx
// 005484f9  8b08                 mov ecx, dword ptr [eax]
// 005484fb  52                   push edx
// 005484fc  8b5004               mov edx, dword ptr [eax + 4]
// 005484ff  8b442424             mov eax, dword ptr [esp + 0x24]
// 00548503  51                   push ecx
// 00548504  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00548508  52                   push edx
// 00548509  8b542424             mov edx, dword ptr [esp + 0x24]
// 0054850d  50                   push eax
// 0054850e  51                   push ecx
// 0054850f  52                   push edx
// 00548510  56                   push esi
// 00548511  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00548519  e8b2d5f3ff           call 0x485ad0
// 0054851e  83c424               add esp, 0x24
// 00548521  8bc6                 mov eax, esi
// 00548523  5e                   pop esi
// 00548524  59                   pop ecx
// 00548525  c3                   ret 
// library openrbx-client/Rendering\RenderLib\TextureProxy.cpp (function ?fromGImage@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVGImage@2@PBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/TextureProxy.cpp
