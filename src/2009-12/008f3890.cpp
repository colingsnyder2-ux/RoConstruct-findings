// roc 2009-12 008f3890  unit: CXTWndHook  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3890
//
// 008f3890  c70124faa000         mov dword ptr [ecx], 0xa0fa24
// 008f3896  e949320300           jmp 0x926ae4
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
