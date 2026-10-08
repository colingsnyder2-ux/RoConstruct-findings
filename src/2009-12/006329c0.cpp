// roc 2009-12 006329c0  unit: RBX::StarterGuiService  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006329c0
//
// 006329c0  c701b8bc9c00         mov dword ptr [ecx], 0x9cbcb8
// 006329c6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
