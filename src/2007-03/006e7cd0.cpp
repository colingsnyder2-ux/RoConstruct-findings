// roc 2007-03 006e7cd0  unit: seg_006e0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e7cd0
//
// 006e7cd0  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 006e7cd6  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?getParent@Instance@RBX@@QBEPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
