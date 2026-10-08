// roc 2007-08 004d8150  unit: RBX::View::Texture  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d8150
//
// 004d8150  51                   push ecx
// 004d8151  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d8155  d9400c               fld dword ptr [eax + 0xc]
// 004d8158  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d815c  56                   push esi
// 004d815d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d8161  51                   push ecx
// 004d8162  8b4808               mov ecx, dword ptr [eax + 8]
// 004d8165  d91c24               fstp dword ptr [esp]
// 004d8168  51                   push ecx
// 004d8169  8b08                 mov ecx, dword ptr [eax]
// 004d816b  52                   push edx
// 004d816c  8b5004               mov edx, dword ptr [eax + 4]
// 004d816f  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d8173  51                   push ecx
// 004d8174  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004d8178  52                   push edx
// 004d8179  8b542424             mov edx, dword ptr [esp + 0x24]
// 004d817d  50                   push eax
// 004d817e  51                   push ecx
// 004d817f  52                   push edx
// 004d8180  56                   push esi
// 004d8181  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004d8189  e8c292f9ff           call 0x471450
// 004d818e  83c424               add esp, 0x24
// 004d8191  8bc6                 mov eax, esi
// 004d8193  5e                   pop esi
// 004d8194  59                   pop ecx
// 004d8195  c3                   ret 
// library openrbx-client/Rendering\RenderLib\TextureProxy.cpp (function ?fromGImage@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVGImage@2@PBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/TextureProxy.cpp
