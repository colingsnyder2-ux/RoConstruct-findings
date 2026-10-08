// roc 2009-12 0041d0b0  unit: CSettingsExplorer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041d0b0
//
// 0041d0b0  c70164309a00         mov dword ptr [ecx], 0x9a3064
// 0041d0b6  e917713d00           jmp 0x7f41d2
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
