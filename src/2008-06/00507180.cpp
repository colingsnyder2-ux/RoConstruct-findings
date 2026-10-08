// roc 2008-06 00507180  unit: RBX::Render::RenderScene  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507180
//
// 00507180  51                   push ecx
// 00507181  8b442420             mov eax, dword ptr [esp + 0x20]
// 00507185  d9400c               fld dword ptr [eax + 0xc]
// 00507188  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050718c  56                   push esi
// 0050718d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00507191  51                   push ecx
// 00507192  8b4808               mov ecx, dword ptr [eax + 8]
// 00507195  d91c24               fstp dword ptr [esp]
// 00507198  51                   push ecx
// 00507199  8b08                 mov ecx, dword ptr [eax]
// 0050719b  52                   push edx
// 0050719c  8b5004               mov edx, dword ptr [eax + 4]
// 0050719f  8b442428             mov eax, dword ptr [esp + 0x28]
// 005071a3  51                   push ecx
// 005071a4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005071a8  52                   push edx
// 005071a9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005071ad  50                   push eax
// 005071ae  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005071b2  51                   push ecx
// 005071b3  52                   push edx
// 005071b4  50                   push eax
// 005071b5  56                   push esi
// 005071b6  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005071be  e88dd7f6ff           call 0x474950
// 005071c3  83c428               add esp, 0x28
// 005071c6  8bc6                 mov eax, esi
// 005071c8  5e                   pop esi
// 005071c9  59                   pop ecx
// 005071ca  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHPBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
