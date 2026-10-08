// roc 2009-06 0056a8c0  unit: RBX::RbxG3D::RenderScene  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056a8c0
//
// 0056a8c0  51                   push ecx
// 0056a8c1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056a8c5  d9400c               fld dword ptr [eax + 0xc]
// 0056a8c8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0056a8cc  56                   push esi
// 0056a8cd  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056a8d1  51                   push ecx
// 0056a8d2  8b4808               mov ecx, dword ptr [eax + 8]
// 0056a8d5  d91c24               fstp dword ptr [esp]
// 0056a8d8  51                   push ecx
// 0056a8d9  8b08                 mov ecx, dword ptr [eax]
// 0056a8db  52                   push edx
// 0056a8dc  8b5004               mov edx, dword ptr [eax + 4]
// 0056a8df  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056a8e3  51                   push ecx
// 0056a8e4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056a8e8  52                   push edx
// 0056a8e9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0056a8ed  50                   push eax
// 0056a8ee  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056a8f2  51                   push ecx
// 0056a8f3  52                   push edx
// 0056a8f4  50                   push eax
// 0056a8f5  56                   push esi
// 0056a8f6  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0056a8fe  e86d17f3ff           call 0x49c070
// 0056a903  83c428               add esp, 0x28
// 0056a906  8bc6                 mov eax, esi
// 0056a908  5e                   pop esi
// 0056a909  59                   pop ecx
// 0056a90a  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHPBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
