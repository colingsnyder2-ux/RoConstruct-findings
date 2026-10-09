// roc 2010-06 0075ea40  unit: RBX::CleanStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075ea40
//
// 0075ea40  8b4908               mov ecx, dword ptr [ecx + 8]
// 0075ea43  8b01                 mov eax, dword ptr [ecx]
// 0075ea45  8b4014               mov eax, dword ptr [eax + 0x14]
// 0075ea48  ffe0                 jmp eax
// library openrbx-client/App\v8world\JointStage.cpp (function ?removeEdgeFromDownstream@JointStage@RBX@@AAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/JointStage.cpp
