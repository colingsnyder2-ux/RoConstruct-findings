// roc 2009-12 004cd800  unit: G3D::VARArea  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd800
//
// 004cd800  c701d4589b00         mov dword ptr [ecx], 0x9b58d4
// 004cd806  e9d5f0ffff           jmp 0x4cc8e0
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
