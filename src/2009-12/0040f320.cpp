// roc 2009-12 0040f320  unit: boost::bad_weak_ptr  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040f320
//
// 0040f320  c70148189a00         mov dword ptr [ecx], 0x9a1848
// 0040f326  e905ffffff           jmp 0x40f230
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
