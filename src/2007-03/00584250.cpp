// roc 2007-03 00584250  unit: seg_00580000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00584250
//
// 00584250  51                   push ecx
// 00584251  56                   push esi
// 00584252  57                   push edi
// 00584253  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00584257  8db1fc000000         lea esi, [ecx + 0xfc]
// 0058425d  56                   push esi
// 0058425e  8bcf                 mov ecx, edi
// 00584260  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00584268  ff157ce77700         call dword ptr [0x77e77c]
// 0058426e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00584271  89471c               mov dword ptr [edi + 0x1c], eax
// 00584274  8bc7                 mov eax, edi
// 00584276  5f                   pop edi
// 00584277  5e                   pop esi
// 00584278  59                   pop ecx
// 00584279  c20400               ret 4
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?getTexture@Decal@RBX@@QBE?AVTextureId@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
