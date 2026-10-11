// roc 2008-06 005d3b90  unit: RBX::Skin  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3b90
//
// 005d3b90  51                   push ecx
// 005d3b91  56                   push esi
// 005d3b92  57                   push edi
// 005d3b93  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005d3b97  8db134010000         lea esi, [ecx + 0x134]
// 005d3b9d  56                   push esi
// 005d3b9e  8bcf                 mov ecx, edi
// 005d3ba0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d3ba8  ff155c248000         call dword ptr [0x80245c]
// 005d3bae  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005d3bb1  89471c               mov dword ptr [edi + 0x1c], eax
// 005d3bb4  8bc7                 mov eax, edi
// 005d3bb6  5f                   pop edi
// 005d3bb7  5e                   pop esi
// 005d3bb8  59                   pop ecx
// 005d3bb9  c20400               ret 4
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?getTexture@Decal@RBX@@QBE?AVTextureId@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
