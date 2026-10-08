// roc 2009-12 008e35b0  unit: CXTShadowWnd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e35b0
//
// 008e35b0  c70164c2a000         mov dword ptr [ecx], 0xa0c264
// 008e35b6  e99553f5ff           jmp 0x838950
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
