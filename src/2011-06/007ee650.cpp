// roc 2011-06 007ee650  unit: RBX::SimulateStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ee650
//
// 007ee650  56                   push esi
// 007ee651  8b742408             mov esi, dword ptr [esp + 8]
// 007ee655  8b06                 mov eax, dword ptr [esi]
// 007ee657  8b5008               mov edx, dword ptr [eax + 8]
// 007ee65a  57                   push edi
// 007ee65b  8bf9                 mov edi, ecx
// 007ee65d  8bce                 mov ecx, esi
// 007ee65f  ffd2                 call edx
// 007ee661  57                   push edi
// 007ee662  8bce                 mov ecx, esi
// 007ee664  e89736fbff           call 0x7a1d00
// 007ee669  5f                   pop edi
// 007ee66a  5e                   pop esi
// 007ee66b  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onEdgeRemoving@SimJobStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
