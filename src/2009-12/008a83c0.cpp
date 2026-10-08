// roc 2009-12 008a83c0  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a83c0
//
// 008a83c0  c7011463a000         mov dword ptr [ecx], 0xa06314
// 008a83c6  e955e1f4ff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
