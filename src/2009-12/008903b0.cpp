// roc 2009-12 008903b0  unit: CXTPToolBar::CControlButtonHide  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008903b0
//
// 008903b0  c701003aa000         mov dword ptr [ecx], 0xa03a00
// 008903b6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
