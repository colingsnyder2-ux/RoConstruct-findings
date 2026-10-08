// roc 2009-12 0084d950  unit: CXTPPrintingDialog  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084d950
//
// 0084d950  c701acbc9f00         mov dword ptr [ecx], 0x9fbcac
// 0084d956  e9778e0d00           jmp 0x9267d2
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
