// roc 2007-03 005ea140  unit: seg_005e0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ea140
//
// 005ea140  56                   push esi
// 005ea141  8bf1                 mov esi, ecx
// 005ea143  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ea146  8b01                 mov eax, dword ptr [ecx]
// 005ea148  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ea14b  57                   push edi
// 005ea14c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ea150  57                   push edi
// 005ea151  ffd2                 call edx
// 005ea153  56                   push esi
// 005ea154  8bcf                 mov ecx, edi
// 005ea156  e855000000           call 0x5ea1b0
// 005ea15b  5f                   pop edi
// 005ea15c  5e                   pop esi
// 005ea15d  c20400               ret 4
// library openrbx-client/App\v8world\IWorldStage.cpp (function ?onEdgeRemoving@IWorldStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IWorldStage.cpp
