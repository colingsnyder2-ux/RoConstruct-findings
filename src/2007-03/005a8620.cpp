// roc 2007-03 005a8620  unit: seg_005a0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8620
//
// 005a8620  56                   push esi
// 005a8621  8b742408             mov esi, dword ptr [esp + 8]
// 005a8625  8b06                 mov eax, dword ptr [esi]
// 005a8627  8b5008               mov edx, dword ptr [eax + 8]
// 005a862a  57                   push edi
// 005a862b  8bf9                 mov edi, ecx
// 005a862d  8bce                 mov ecx, esi
// 005a862f  ffd2                 call edx
// 005a8631  57                   push edi
// 005a8632  8bce                 mov ecx, esi
// 005a8634  e8771b0400           call 0x5ea1b0
// 005a8639  5f                   pop edi
// 005a863a  5e                   pop esi
// 005a863b  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onEdgeRemoving@SimJobStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
