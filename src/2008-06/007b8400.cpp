// roc 2008-06 007b8400  unit: RBX::Render::Material  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b8400
//
// 007b8400  51                   push ecx
// 007b8401  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b8405  d9400c               fld dword ptr [eax + 0xc]
// 007b8408  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b840c  56                   push esi
// 007b840d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b8411  51                   push ecx
// 007b8412  8b4808               mov ecx, dword ptr [eax + 8]
// 007b8415  d91c24               fstp dword ptr [esp]
// 007b8418  51                   push ecx
// 007b8419  8b08                 mov ecx, dword ptr [eax]
// 007b841b  52                   push edx
// 007b841c  8b5004               mov edx, dword ptr [eax + 4]
// 007b841f  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b8423  51                   push ecx
// 007b8424  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b8428  52                   push edx
// 007b8429  8b542424             mov edx, dword ptr [esp + 0x24]
// 007b842d  50                   push eax
// 007b842e  51                   push ecx
// 007b842f  52                   push edx
// 007b8430  56                   push esi
// 007b8431  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007b8439  e8b2c3cbff           call 0x4747f0
// 007b843e  83c424               add esp, 0x24
// 007b8441  8bc6                 mov eax, esi
// 007b8443  5e                   pop esi
// 007b8444  59                   pop ecx
// 007b8445  c3                   ret 
// library openrbx-client/Rendering\RenderLib\TextureProxy.cpp (function ?fromGImage@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVGImage@2@PBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/TextureProxy.cpp
