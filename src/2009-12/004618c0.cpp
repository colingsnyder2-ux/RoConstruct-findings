// roc 2009-12 004618c0  unit: CRobloxView  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004618c0
//
// 004618c0  c70108e69a00         mov dword ptr [ecx], 0x9ae608
// 004618c6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
