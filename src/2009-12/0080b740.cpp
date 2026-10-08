// roc 2009-12 0080b740  unit: CXTPImageManagerResource::CBitmapDC  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b740
//
// 0080b740  c701f0309f00         mov dword ptr [ecx], 0x9f30f0
// 0080b746  e9d5adfeff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
