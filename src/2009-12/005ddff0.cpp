// roc 2009-12 005ddff0  unit: RBX::ViewG3D  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ddff0
//
// 005ddff0  8b4908               mov ecx, dword ptr [ecx + 8]
// 005ddff3  8b01                 mov eax, dword ptr [ecx]
// 005ddff5  8b4010               mov eax, dword ptr [eax + 0x10]
// 005ddff8  ffe0                 jmp eax
// library openrbx-client/App\v8world\JointStage.cpp (function ?moveEdgeToDownstream@JointStage@RBX@@AAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/JointStage.cpp
