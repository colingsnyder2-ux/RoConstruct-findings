// roc 2009-12 004cbf00  unit: G3D::VARArea  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cbf00
//
// 004cbf00  8bc1                 mov eax, ecx
// 004cbf02  c70000000000         mov dword ptr [eax], 0
// 004cbf08  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??0?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
