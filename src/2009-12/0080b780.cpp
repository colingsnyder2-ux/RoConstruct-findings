// roc 2009-12 0080b780  unit: CXTPImageManagerResource::CBitmapDC  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b780
//
// 0080b780  c70108319f00         mov dword ptr [ecx], 0x9f3108
// 0080b786  e995adfeff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
