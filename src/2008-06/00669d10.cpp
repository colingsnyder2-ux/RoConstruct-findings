// roc 2008-06 00669d10  unit: RBX::TreeStage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669d10
//
// 00669d10  56                   push esi
// 00669d11  8bf1                 mov esi, ecx
// 00669d13  8b4e08               mov ecx, dword ptr [esi + 8]
// 00669d16  8b01                 mov eax, dword ptr [ecx]
// 00669d18  8b5014               mov edx, dword ptr [eax + 0x14]
// 00669d1b  57                   push edi
// 00669d1c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00669d20  57                   push edi
// 00669d21  ffd2                 call edx
// 00669d23  56                   push esi
// 00669d24  8bcf                 mov ecx, edi
// 00669d26  e815bbfdff           call 0x645840
// 00669d2b  5f                   pop edi
// 00669d2c  5e                   pop esi
// 00669d2d  c20400               ret 4
// library openrbx-client/App\v8world\IWorldStage.cpp (function ?onEdgeRemoving@IWorldStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IWorldStage.cpp
