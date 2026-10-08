// roc 2009-12 007733b0  unit: RBX::GuiButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007733b0
//
// 007733b0  c7014c8c9e00         mov dword ptr [ecx], 0x9e8c4c
// 007733b6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
