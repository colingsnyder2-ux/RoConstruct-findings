// roc 2007-03 004cbf80  unit: seg_004c0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cbf80
//
// 004cbf80  51                   push ecx
// 004cbf81  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004cbf85  d9400c               fld dword ptr [eax + 0xc]
// 004cbf88  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cbf8c  56                   push esi
// 004cbf8d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cbf91  51                   push ecx
// 004cbf92  8b4808               mov ecx, dword ptr [eax + 8]
// 004cbf95  d91c24               fstp dword ptr [esp]
// 004cbf98  51                   push ecx
// 004cbf99  8b08                 mov ecx, dword ptr [eax]
// 004cbf9b  52                   push edx
// 004cbf9c  8b5004               mov edx, dword ptr [eax + 4]
// 004cbf9f  8b442424             mov eax, dword ptr [esp + 0x24]
// 004cbfa3  51                   push ecx
// 004cbfa4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004cbfa8  52                   push edx
// 004cbfa9  8b542424             mov edx, dword ptr [esp + 0x24]
// 004cbfad  50                   push eax
// 004cbfae  51                   push ecx
// 004cbfaf  52                   push edx
// 004cbfb0  56                   push esi
// 004cbfb1  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004cbfb9  e86254faff           call 0x471420
// 004cbfbe  83c424               add esp, 0x24
// 004cbfc1  8bc6                 mov eax, esi
// 004cbfc3  5e                   pop esi
// 004cbfc4  59                   pop ecx
// 004cbfc5  c3                   ret 
// library openrbx-client/Rendering\RenderLib\TextureProxy.cpp (function ?fromGImage@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVGImage@2@PBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/TextureProxy.cpp
