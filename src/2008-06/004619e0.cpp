// roc 2008-06 004619e0  unit: Scintilla::CScintillaView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004619e0
//
// 004619e0  a1b02f9300           mov eax, dword ptr [0x932fb0]
// 004619e5  8b542408             mov edx, dword ptr [esp + 8]
// 004619e9  85c0                 test eax, eax
// 004619eb  740c                 je 0x4619f9
// 004619ed  3bd1                 cmp edx, ecx
// 004619ef  7508                 jne 0x4619f9
// 004619f1  56                   push esi
// 004619f2  8b7120               mov esi, dword ptr [ecx + 0x20]
// 004619f5  897078               mov dword ptr [eax + 0x78], esi
// 004619f8  5e                   pop esi
// 004619f9  89542408             mov dword ptr [esp + 8], edx
// 004619fd  e9c6f22300           jmp 0x6a0cc8
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnActivateView@CScintillaView@@MAEXHPAVCView@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
