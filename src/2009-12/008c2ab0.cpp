// roc 2009-12 008c2ab0  unit: CXTPImageEditorDlg  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c2ab0
//
// 008c2ab0  c7019c8ea000         mov dword ptr [ecx], 0xa08e9c
// 008c2ab6  e9955ef7ff           jmp 0x838950
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
