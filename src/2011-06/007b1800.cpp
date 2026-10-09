// roc 2011-06 007b1800  unit: RBX::CleanStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b1800
//
// 007b1800  8b4908               mov ecx, dword ptr [ecx + 8]
// 007b1803  8b01                 mov eax, dword ptr [ecx]
// 007b1805  8b4014               mov eax, dword ptr [eax + 0x14]
// 007b1808  ffe0                 jmp eax
// library openrbx-client/App\v8world\JointStage.cpp (function ?removeEdgeFromDownstream@JointStage@RBX@@AAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/JointStage.cpp
