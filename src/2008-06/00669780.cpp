// roc 2008-06 00669780  unit: RBX::TreeStage  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669780
//
// 00669780  56                   push esi
// 00669781  8bf1                 mov esi, ecx
// 00669783  e888fcffff           call 0x669410
// 00669788  8b4e08               mov ecx, dword ptr [esi + 8]
// 0066978b  8b01                 mov eax, dword ptr [ecx]
// 0066978d  5e                   pop esi
// 0066978e  8b4008               mov eax, dword ptr [eax + 8]
// 00669791  ffe0                 jmp eax
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?stepWorld@TreeStage@RBX@@UAEXHH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
