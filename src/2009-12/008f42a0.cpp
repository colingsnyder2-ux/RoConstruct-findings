// roc 2009-12 008f42a0  unit: CXTCaptionButtonTheme  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f42a0
//
// 008f42a0  c701d4fba000         mov dword ptr [ecx], 0xa0fbd4
// 008f42a6  e985fcffff           jmp 0x8f3f30
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
