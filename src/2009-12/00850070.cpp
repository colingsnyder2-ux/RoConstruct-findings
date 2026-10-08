// roc 2009-12 00850070  unit: CXTPPropExchange  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850070
//
// 00850070  c70154c39f00         mov dword ptr [ecx], 0x9fc354
// 00850076  e96743faff           jmp 0x7f43e2
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
