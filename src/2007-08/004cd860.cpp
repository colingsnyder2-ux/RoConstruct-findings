// roc 2007-08 004cd860  unit: 0RBX::View  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd860
//
// 004cd860  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 004cd863  05b0000000           add eax, 0xb0
// 004cd868  c3                   ret 
// library rbxgs-view/View.cpp (function ?getRenderStats@View@1RBX@@UAEAAVRenderStats@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
