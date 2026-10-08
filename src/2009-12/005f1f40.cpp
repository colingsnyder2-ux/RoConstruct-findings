// roc 2009-12 005f1f40  unit: seg_005f0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f1f40
//
// 005f1f40  c7011c279b00         mov dword ptr [ecx], 0x9b271c
// 005f1f46  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
