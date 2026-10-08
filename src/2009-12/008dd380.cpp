// roc 2009-12 008dd380  unit: CXTColorHex  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dd380
//
// 008dd380  c701f4b2a000         mov dword ptr [ecx], 0xa0b2f4
// 008dd386  e983940400           jmp 0x92680e
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
