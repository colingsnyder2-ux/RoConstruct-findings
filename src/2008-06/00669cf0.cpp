// roc 2008-06 00669cf0  unit: RBX::TreeStage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669cf0
//
// 00669cf0  56                   push esi
// 00669cf1  57                   push edi
// 00669cf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00669cf6  8bf1                 mov esi, ecx
// 00669cf8  56                   push esi
// 00669cf9  8bcf                 mov ecx, edi
// 00669cfb  e830bbfdff           call 0x645830
// 00669d00  8b4e08               mov ecx, dword ptr [esi + 8]
// 00669d03  8b01                 mov eax, dword ptr [ecx]
// 00669d05  8b5010               mov edx, dword ptr [eax + 0x10]
// 00669d08  57                   push edi
// 00669d09  ffd2                 call edx
// 00669d0b  5f                   pop edi
// 00669d0c  5e                   pop esi
// 00669d0d  c20400               ret 4
// library openrbx-client/App\v8world\IWorldStage.cpp (function ?onEdgeAdded@IWorldStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IWorldStage.cpp
