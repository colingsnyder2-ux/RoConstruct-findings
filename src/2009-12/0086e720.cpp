// roc 2009-12 0086e720  unit: CXTPResourceManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e720
//
// 0086e720  c7011c0ba000         mov dword ptr [ecx], 0xa00b1c
// 0086e726  e975f9ffff           jmp 0x86e0a0
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
