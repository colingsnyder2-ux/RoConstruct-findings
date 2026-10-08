// roc 2009-12 0084a2a0  unit: CXTPControlSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a2a0
//
// 0084a2a0  c701bcb99f00         mov dword ptr [ecx], 0x9fb9bc
// 0084a2a6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
