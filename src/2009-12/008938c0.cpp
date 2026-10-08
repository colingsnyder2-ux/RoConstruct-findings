// roc 2009-12 008938c0  unit: CXTPMenuBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008938c0
//
// 008938c0  c701b041a000         mov dword ptr [ecx], 0xa041b0
// 008938c6  e9552cf6ff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
