// roc 2009-06 00528b00  unit: RBX::ViewG3D  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00528b00
//
// 00528b00  8b4908               mov ecx, dword ptr [ecx + 8]
// 00528b03  8b01                 mov eax, dword ptr [ecx]
// 00528b05  8b4010               mov eax, dword ptr [eax + 0x10]
// 00528b08  ffe0                 jmp eax
// library openrbx-client/App\v8world\JointStage.cpp (function ?moveEdgeToDownstream@JointStage@RBX@@AAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/JointStage.cpp
