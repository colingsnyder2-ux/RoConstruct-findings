// roc 2009-12 0046d0b0  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046d0b0
//
// 0046d0b0  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 0046d0b6  e97521faff           jmp 0x40f230
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
