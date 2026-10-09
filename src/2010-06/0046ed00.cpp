// roc 2010-06 0046ed00  unit: Scintilla::CScintillaView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ed00
//
// 0046ed00  a1e84eb800           mov eax, dword ptr [0xb84ee8]
// 0046ed05  8b542408             mov edx, dword ptr [esp + 8]
// 0046ed09  85c0                 test eax, eax
// 0046ed0b  740c                 je 0x46ed19
// 0046ed0d  3bd1                 cmp edx, ecx
// 0046ed0f  7508                 jne 0x46ed19
// 0046ed11  56                   push esi
// 0046ed12  8b7120               mov esi, dword ptr [ecx + 0x20]
// 0046ed15  897078               mov dword ptr [eax + 0x78], esi
// 0046ed18  5e                   pop esi
// 0046ed19  89542408             mov dword ptr [esp + 8], edx
// 0046ed1d  e9ae923300           jmp 0x7a7fd0
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnActivateView@CScintillaView@@MAEXHPAVCView@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
