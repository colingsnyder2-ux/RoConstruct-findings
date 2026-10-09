// roc 2009-12 005e3870  unit: RBX::RbxG3D::RenderScene  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e3870
//
// 005e3870  51                   push ecx
// 005e3871  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e3875  d9400c               fld dword ptr [eax + 0xc]
// 005e3878  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e387c  56                   push esi
// 005e387d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e3881  51                   push ecx
// 005e3882  8b4808               mov ecx, dword ptr [eax + 8]
// 005e3885  d91c24               fstp dword ptr [esp]
// 005e3888  51                   push ecx
// 005e3889  8b08                 mov ecx, dword ptr [eax]
// 005e388b  52                   push edx
// 005e388c  8b5004               mov edx, dword ptr [eax + 4]
// 005e388f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e3893  51                   push ecx
// 005e3894  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e3898  52                   push edx
// 005e3899  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e389d  50                   push eax
// 005e389e  51                   push ecx
// 005e389f  52                   push edx
// 005e38a0  56                   push esi
// 005e38a1  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005e38a9  e8824feeff           call 0x4c8830
// 005e38ae  83c424               add esp, 0x24
// 005e38b1  8bc6                 mov eax, esi
// 005e38b3  5e                   pop esi
// 005e38b4  59                   pop ecx
// 005e38b5  c3                   ret 
// library openrbx-client/Rendering\RenderLib\TextureProxy.cpp (function ?fromGImage@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVGImage@2@PBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/TextureProxy.cpp
