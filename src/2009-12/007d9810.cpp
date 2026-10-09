// roc 2009-12 007d9810  unit: RBX::SimulateStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d9810
//
// 007d9810  56                   push esi
// 007d9811  8b742408             mov esi, dword ptr [esp + 8]
// 007d9815  8b06                 mov eax, dword ptr [esi]
// 007d9817  8b5008               mov edx, dword ptr [eax + 8]
// 007d981a  57                   push edi
// 007d981b  8bf9                 mov edi, ecx
// 007d981d  8bce                 mov ecx, esi
// 007d981f  ffd2                 call edx
// 007d9821  57                   push edi
// 007d9822  8bce                 mov ecx, esi
// 007d9824  e81797fdff           call 0x7b2f40
// 007d9829  5f                   pop edi
// 007d982a  5e                   pop esi
// 007d982b  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onEdgeRemoving@SimJobStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
