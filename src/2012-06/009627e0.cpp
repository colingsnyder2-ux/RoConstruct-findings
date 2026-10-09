// roc 2012-06 009627e0  unit: RBX::SimulateStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009627e0
//
// 009627e0  56                   push esi
// 009627e1  8b742408             mov esi, dword ptr [esp + 8]
// 009627e5  8b06                 mov eax, dword ptr [esi]
// 009627e7  8b5008               mov edx, dword ptr [eax + 8]
// 009627ea  57                   push edi
// 009627eb  8bf9                 mov edi, ecx
// 009627ed  8bce                 mov ecx, esi
// 009627ef  ffd2                 call edx
// 009627f1  57                   push edi
// 009627f2  8bce                 mov ecx, esi
// 009627f4  e8674dfbff           call 0x917560
// 009627f9  5f                   pop edi
// 009627fa  5e                   pop esi
// 009627fb  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onEdgeRemoving@SimJobStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
