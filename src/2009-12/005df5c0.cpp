// roc 2009-12 005df5c0  unit: RBX::ViewG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005df5c0
//
// 005df5c0  c7010c169c00         mov dword ptr [ecx], 0x9c160c
// 005df5c6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
