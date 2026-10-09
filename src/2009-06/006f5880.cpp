// roc 2009-06 006f5880  unit: RBX::SimulateStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f5880
//
// 006f5880  56                   push esi
// 006f5881  8b742408             mov esi, dword ptr [esp + 8]
// 006f5885  8b06                 mov eax, dword ptr [esi]
// 006f5887  8b5008               mov edx, dword ptr [eax + 8]
// 006f588a  57                   push edi
// 006f588b  8bf9                 mov edi, ecx
// 006f588d  8bce                 mov ecx, esi
// 006f588f  ffd2                 call edx
// 006f5891  57                   push edi
// 006f5892  8bce                 mov ecx, esi
// 006f5894  e8b703feff           call 0x6d5c50
// 006f5899  5f                   pop edi
// 006f589a  5e                   pop esi
// 006f589b  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onEdgeRemoving@SimJobStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
