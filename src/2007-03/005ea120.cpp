// roc 2007-03 005ea120  unit: seg_005e0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ea120
//
// 005ea120  56                   push esi
// 005ea121  57                   push edi
// 005ea122  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ea126  8bf1                 mov esi, ecx
// 005ea128  56                   push esi
// 005ea129  8bcf                 mov ecx, edi
// 005ea12b  e8e003ecff           call 0x4aa510
// 005ea130  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ea133  8b01                 mov eax, dword ptr [ecx]
// 005ea135  8b5010               mov edx, dword ptr [eax + 0x10]
// 005ea138  57                   push edi
// 005ea139  ffd2                 call edx
// 005ea13b  5f                   pop edi
// 005ea13c  5e                   pop esi
// 005ea13d  c20400               ret 4
// library openrbx-client/App\v8world\IWorldStage.cpp (function ?onEdgeAdded@IWorldStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IWorldStage.cpp
