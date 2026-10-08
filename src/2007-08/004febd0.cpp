// roc 2007-08 004febd0  unit: RBX::Render::AggregateChunk  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004febd0
//
// 004febd0  51                   push ecx
// 004febd1  8b442420             mov eax, dword ptr [esp + 0x20]
// 004febd5  d9400c               fld dword ptr [eax + 0xc]
// 004febd8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004febdc  56                   push esi
// 004febdd  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004febe1  51                   push ecx
// 004febe2  8b4808               mov ecx, dword ptr [eax + 8]
// 004febe5  d91c24               fstp dword ptr [esp]
// 004febe8  51                   push ecx
// 004febe9  8b08                 mov ecx, dword ptr [eax]
// 004febeb  52                   push edx
// 004febec  8b5004               mov edx, dword ptr [eax + 4]
// 004febef  8b442428             mov eax, dword ptr [esp + 0x28]
// 004febf3  51                   push ecx
// 004febf4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004febf8  52                   push edx
// 004febf9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004febfd  50                   push eax
// 004febfe  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004fec02  51                   push ecx
// 004fec03  52                   push edx
// 004fec04  50                   push eax
// 004fec05  56                   push esi
// 004fec06  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004fec0e  e8ad29f7ff           call 0x4715c0
// 004fec13  83c428               add esp, 0x28
// 004fec16  8bc6                 mov eax, esi
// 004fec18  5e                   pop esi
// 004fec19  59                   pop ecx
// 004fec1a  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHPBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
