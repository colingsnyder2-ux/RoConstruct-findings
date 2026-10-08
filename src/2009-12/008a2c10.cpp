// roc 2009-12 008a2c10  unit: CXTPReportHyperlinks  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2c10
//
// 008a2c10  c701e458a000         mov dword ptr [ecx], 0xa058e4
// 008a2c16  e9c717f5ff           jmp 0x7f43e2
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
