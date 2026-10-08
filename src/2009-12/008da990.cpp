// roc 2009-12 008da990  unit: CXTColorPageStandard  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008da990
//
// 008da990  c70124afa000         mov dword ptr [ecx], 0xa0af24
// 008da996  e9b5dff5ff           jmp 0x838950
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
