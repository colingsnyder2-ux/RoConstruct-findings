// roc 2009-12 007f7930  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7930
//
// 007f7930  c701f8179f00         mov dword ptr [ecx], 0x9f17f8
// 007f7936  e9e5ebffff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
