// roc 2010-06 0078bbc0  unit: RBX::SimulateStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078bbc0
//
// 0078bbc0  56                   push esi
// 0078bbc1  8b742408             mov esi, dword ptr [esp + 8]
// 0078bbc5  8b06                 mov eax, dword ptr [esi]
// 0078bbc7  8b5008               mov edx, dword ptr [eax + 8]
// 0078bbca  57                   push edi
// 0078bbcb  8bf9                 mov edi, ecx
// 0078bbcd  8bce                 mov ecx, esi
// 0078bbcf  ffd2                 call edx
// 0078bbd1  57                   push edi
// 0078bbd2  8bce                 mov ecx, esi
// 0078bbd4  e8e74efcff           call 0x750ac0
// 0078bbd9  5f                   pop edi
// 0078bbda  5e                   pop esi
// 0078bbdb  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onEdgeRemoving@SimJobStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
