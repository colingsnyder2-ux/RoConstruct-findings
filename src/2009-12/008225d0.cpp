// roc 2009-12 008225d0  unit: VCXTPReportRow::?$CXTPSmartPtrInternalT  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008225d0
//
// 008225d0  c70174509f00         mov dword ptr [ecx], 0x9f5074
// 008225d6  e9d5c5ffff           jmp 0x81ebb0
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
