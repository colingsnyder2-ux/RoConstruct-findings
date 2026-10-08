// roc 2009-12 0080a3c0  unit: CXTPImageManagerResource::CBitmapDC  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080a3c0
//
// 0080a3c0  c70118229a00         mov dword ptr [ecx], 0x9a2218
// 0080a3c6  e9654ec0ff           jmp 0x40f230
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
