// roc 2007-08 006271a0  unit: RBX::GettingUp  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006271a0
//
// 006271a0  56                   push esi
// 006271a1  57                   push edi
// 006271a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006271a6  8bf1                 mov esi, ecx
// 006271a8  56                   push esi
// 006271a9  8bcf                 mov ecx, edi
// 006271ab  e8801ffeff           call 0x609130
// 006271b0  8b4e08               mov ecx, dword ptr [esi + 8]
// 006271b3  8b01                 mov eax, dword ptr [ecx]
// 006271b5  8b5010               mov edx, dword ptr [eax + 0x10]
// 006271b8  57                   push edi
// 006271b9  ffd2                 call edx
// 006271bb  5f                   pop edi
// 006271bc  5e                   pop esi
// 006271bd  c20400               ret 4
// library openrbx-client/App\v8world\IWorldStage.cpp (function ?onEdgeAdded@IWorldStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IWorldStage.cpp
