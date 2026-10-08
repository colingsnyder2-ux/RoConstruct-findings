// roc 2009-12 0084b1b0  unit: CXTPPrintingDialog  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084b1b0
//
// 0084b1b0  c70110bb9f00         mov dword ptr [ecx], 0x9fbb10
// 0084b1b6  e97540bcff           jmp 0x40f230
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
