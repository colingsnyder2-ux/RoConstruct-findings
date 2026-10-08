// roc 2009-12 004c6960  unit: G3D::GImage  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c6960
//
// 004c6960  c701a0559b00         mov dword ptr [ecx], 0x9b55a0
// 004c6966  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
