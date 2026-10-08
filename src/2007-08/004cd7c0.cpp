// roc 2007-08 004cd7c0  unit: 0RBX::View  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd7c0
//
// 004cd7c0  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 004cd7c3  d98088000000         fld dword ptr [eax + 0x88]
// 004cd7c9  c3                   ret 
// library rbxgs-view/View.cpp (function ?getShadingQuality@View@1RBX@@UBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
