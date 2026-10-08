// roc 2009-12 007a56e0  unit: seg_007a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a56e0
//
// 007a56e0  c701acd39e00         mov dword ptr [ecx], 0x9ed3ac
// 007a56e6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
