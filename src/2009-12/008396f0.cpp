// roc 2009-12 008396f0  unit: CXTPDockingPaneManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008396f0
//
// 008396f0  c70150809f00         mov dword ptr [ecx], 0x9f8050
// 008396f6  e955f2ffff           jmp 0x838950
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
