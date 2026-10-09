// roc 2012-06 0049e320  unit: Scintilla::CScintillaView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e320
//
// 0049e320  a1fc16d700           mov eax, dword ptr [0xd716fc]
// 0049e325  8b542408             mov edx, dword ptr [esp + 8]
// 0049e329  85c0                 test eax, eax
// 0049e32b  740c                 je 0x49e339
// 0049e32d  3bd1                 cmp edx, ecx
// 0049e32f  7508                 jne 0x49e339
// 0049e331  56                   push esi
// 0049e332  8b7120               mov esi, dword ptr [ecx + 0x20]
// 0049e335  897078               mov dword ptr [eax + 0x78], esi
// 0049e338  5e                   pop esi
// 0049e339  89542408             mov dword ptr [esp + 8], edx
// 0049e33d  e9fc434e00           jmp 0x98273e
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnActivateView@CScintillaView@@MAEXHPAVCView@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
