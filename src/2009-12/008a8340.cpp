// roc 2009-12 008a8340  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8340
//
// 008a8340  c701fc62a000         mov dword ptr [ecx], 0xa062fc
// 008a8346  e90506f9ff           jmp 0x838950
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
