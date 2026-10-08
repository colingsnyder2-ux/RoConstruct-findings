// roc 2009-12 008a6400  unit: CXTPReportTip  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6400
//
// 008a6400  c7011c5fa000         mov dword ptr [ecx], 0xa05f1c
// 008a6406  e9d7dff4ff           jmp 0x7f43e2
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
