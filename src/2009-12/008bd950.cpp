// roc 2009-12 008bd950  unit: CXTPDockingPaneContext  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd950
//
// 008bd950  c701bc86a000         mov dword ptr [ecx], 0xa086bc
// 008bd956  e9c58bf3ff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
