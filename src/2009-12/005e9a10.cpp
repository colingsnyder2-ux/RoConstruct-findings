// roc 2009-12 005e9a10  unit: seg_005e0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e9a10
//
// 005e9a10  51                   push ecx
// 005e9a11  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e9a15  d9400c               fld dword ptr [eax + 0xc]
// 005e9a18  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005e9a1c  56                   push esi
// 005e9a1d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e9a21  51                   push ecx
// 005e9a22  8b4808               mov ecx, dword ptr [eax + 8]
// 005e9a25  d91c24               fstp dword ptr [esp]
// 005e9a28  51                   push ecx
// 005e9a29  8b08                 mov ecx, dword ptr [eax]
// 005e9a2b  52                   push edx
// 005e9a2c  8b5004               mov edx, dword ptr [eax + 4]
// 005e9a2f  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e9a33  51                   push ecx
// 005e9a34  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e9a38  52                   push edx
// 005e9a39  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e9a3d  50                   push eax
// 005e9a3e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e9a42  51                   push ecx
// 005e9a43  52                   push edx
// 005e9a44  50                   push eax
// 005e9a45  56                   push esi
// 005e9a46  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005e9a4e  e83defedff           call 0x4c8990
// 005e9a53  83c428               add esp, 0x28
// 005e9a56  8bc6                 mov eax, esi
// 005e9a58  5e                   pop esi
// 005e9a59  59                   pop ecx
// 005e9a5a  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHPBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
