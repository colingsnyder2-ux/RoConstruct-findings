// roc 2007-08 006271c0  unit: RBX::GettingUp  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006271c0
//
// 006271c0  56                   push esi
// 006271c1  8bf1                 mov esi, ecx
// 006271c3  8b4e08               mov ecx, dword ptr [esi + 8]
// 006271c6  8b01                 mov eax, dword ptr [ecx]
// 006271c8  8b5014               mov edx, dword ptr [eax + 0x14]
// 006271cb  57                   push edi
// 006271cc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006271d0  57                   push edi
// 006271d1  ffd2                 call edx
// 006271d3  56                   push esi
// 006271d4  8bcf                 mov ecx, edi
// 006271d6  e8651ffeff           call 0x609140
// 006271db  5f                   pop edi
// 006271dc  5e                   pop esi
// 006271dd  c20400               ret 4
// library openrbx-client/App\v8world\IWorldStage.cpp (function ?onEdgeRemoving@IWorldStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IWorldStage.cpp
