// roc 2009-12 008a6da0  unit: CXTPReportNavigator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6da0
//
// 008a6da0  c7017c5fa000         mov dword ptr [ecx], 0xa05f7c
// 008a6da6  e96bd5f4ff           jmp 0x7f4316
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
