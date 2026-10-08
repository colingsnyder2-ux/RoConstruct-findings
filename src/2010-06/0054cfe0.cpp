// roc 2010-06 0054cfe0  unit: RBX::AggregateChunk  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054cfe0
//
// 0054cfe0  51                   push ecx
// 0054cfe1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0054cfe5  d9400c               fld dword ptr [eax + 0xc]
// 0054cfe8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054cfec  56                   push esi
// 0054cfed  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0054cff1  51                   push ecx
// 0054cff2  8b4808               mov ecx, dword ptr [eax + 8]
// 0054cff5  d91c24               fstp dword ptr [esp]
// 0054cff8  51                   push ecx
// 0054cff9  8b08                 mov ecx, dword ptr [eax]
// 0054cffb  52                   push edx
// 0054cffc  8b5004               mov edx, dword ptr [eax + 4]
// 0054cfff  8b442428             mov eax, dword ptr [esp + 0x28]
// 0054d003  51                   push ecx
// 0054d004  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0054d008  52                   push edx
// 0054d009  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0054d00d  50                   push eax
// 0054d00e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0054d012  51                   push ecx
// 0054d013  52                   push edx
// 0054d014  50                   push eax
// 0054d015  56                   push esi
// 0054d016  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0054d01e  e80d8cf3ff           call 0x485c30
// 0054d023  83c428               add esp, 0x28
// 0054d026  8bc6                 mov eax, esi
// 0054d028  5e                   pop esi
// 0054d029  59                   pop ecx
// 0054d02a  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHPBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
