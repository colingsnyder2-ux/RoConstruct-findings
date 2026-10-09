// roc 2009-06 00848f60  unit: RBX::RbxG3D::Material  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00848f60
//
// 00848f60  51                   push ecx
// 00848f61  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00848f65  d9400c               fld dword ptr [eax + 0xc]
// 00848f68  8b542418             mov edx, dword ptr [esp + 0x18]
// 00848f6c  56                   push esi
// 00848f6d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00848f71  51                   push ecx
// 00848f72  8b4808               mov ecx, dword ptr [eax + 8]
// 00848f75  d91c24               fstp dword ptr [esp]
// 00848f78  51                   push ecx
// 00848f79  8b08                 mov ecx, dword ptr [eax]
// 00848f7b  52                   push edx
// 00848f7c  8b5004               mov edx, dword ptr [eax + 4]
// 00848f7f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00848f83  51                   push ecx
// 00848f84  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00848f88  52                   push edx
// 00848f89  8b542424             mov edx, dword ptr [esp + 0x24]
// 00848f8d  50                   push eax
// 00848f8e  51                   push ecx
// 00848f8f  52                   push edx
// 00848f90  56                   push esi
// 00848f91  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00848f99  e8722fc5ff           call 0x49bf10
// 00848f9e  83c424               add esp, 0x24
// 00848fa1  8bc6                 mov eax, esi
// 00848fa3  5e                   pop esi
// 00848fa4  59                   pop ecx
// 00848fa5  c3                   ret 
// library openrbx-client/Rendering\RenderLib\TextureProxy.cpp (function ?fromGImage@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVGImage@2@PBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/TextureProxy.cpp
