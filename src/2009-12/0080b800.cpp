// roc 2009-12 0080b800  unit: CXTPImageManagerResource::CBitmapDC  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b800
//
// 0080b800  c70138319f00         mov dword ptr [ecx], 0x9f3138
// 0080b806  e915adfeff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
