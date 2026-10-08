// roc 2007-08 004cd7d0  unit: 0RBX::View  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd7d0
//
// 004cd7d0  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 004cd7d3  d9808c000000         fld dword ptr [eax + 0x8c]
// 004cd7d9  c3                   ret 
// library rbxgs-view/View.cpp (function ?getMeshDetail@View@1RBX@@UBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
