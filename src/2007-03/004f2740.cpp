// roc 2007-03 004f2740  unit: seg_004f0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2740
//
// 004f2740  51                   push ecx
// 004f2741  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f2745  d9400c               fld dword ptr [eax + 0xc]
// 004f2748  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004f274c  56                   push esi
// 004f274d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f2751  51                   push ecx
// 004f2752  8b4808               mov ecx, dword ptr [eax + 8]
// 004f2755  d91c24               fstp dword ptr [esp]
// 004f2758  51                   push ecx
// 004f2759  8b08                 mov ecx, dword ptr [eax]
// 004f275b  52                   push edx
// 004f275c  8b5004               mov edx, dword ptr [eax + 4]
// 004f275f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f2763  51                   push ecx
// 004f2764  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f2768  52                   push edx
// 004f2769  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004f276d  50                   push eax
// 004f276e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f2772  51                   push ecx
// 004f2773  52                   push edx
// 004f2774  50                   push eax
// 004f2775  56                   push esi
// 004f2776  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004f277e  e80deef7ff           call 0x471590
// 004f2783  83c428               add esp, 0x28
// 004f2786  8bc6                 mov eax, esi
// 004f2788  5e                   pop esi
// 004f2789  59                   pop ecx
// 004f278a  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHPBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
