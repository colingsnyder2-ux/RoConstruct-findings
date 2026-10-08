// roc 2007-08 00608b70  unit: RBX::SimJobStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608b70
//
// 00608b70  56                   push esi
// 00608b71  8b742408             mov esi, dword ptr [esp + 8]
// 00608b75  8b06                 mov eax, dword ptr [esi]
// 00608b77  8b5008               mov edx, dword ptr [eax + 8]
// 00608b7a  57                   push edi
// 00608b7b  8bf9                 mov edi, ecx
// 00608b7d  8bce                 mov ecx, esi
// 00608b7f  ffd2                 call edx
// 00608b81  57                   push edi
// 00608b82  8bce                 mov ecx, esi
// 00608b84  e8b7050000           call 0x609140
// 00608b89  5f                   pop edi
// 00608b8a  5e                   pop esi
// 00608b8b  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onEdgeRemoving@SimJobStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
