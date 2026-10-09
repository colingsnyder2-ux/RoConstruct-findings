// roc 2008-06 0064d090  unit: RBX::SimJobStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064d090
//
// 0064d090  56                   push esi
// 0064d091  8b742408             mov esi, dword ptr [esp + 8]
// 0064d095  8b06                 mov eax, dword ptr [esi]
// 0064d097  8b5008               mov edx, dword ptr [eax + 8]
// 0064d09a  57                   push edi
// 0064d09b  8bf9                 mov edi, ecx
// 0064d09d  8bce                 mov ecx, esi
// 0064d09f  ffd2                 call edx
// 0064d0a1  57                   push edi
// 0064d0a2  8bce                 mov ecx, esi
// 0064d0a4  e89787ffff           call 0x645840
// 0064d0a9  5f                   pop edi
// 0064d0aa  5e                   pop esi
// 0064d0ab  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onEdgeRemoving@SimJobStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
