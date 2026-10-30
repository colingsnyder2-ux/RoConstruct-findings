// roc 2009-12 0046b200  unit: Scintilla::CScintillaView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b200
//
// 0046b200  a1e0b5b000           mov eax, dword ptr [0xb0b5e0]
// 0046b205  8b542408             mov edx, dword ptr [esp + 8]
// 0046b209  85c0                 test eax, eax
// 0046b20b  740c                 je 0x46b219
// 0046b20d  3bd1                 cmp edx, ecx
// 0046b20f  7508                 jne 0x46b219
// 0046b211  56                   push esi
// 0046b212  8b7120               mov esi, dword ptr [ecx + 0x20]
// 0046b215  897078               mov dword ptr [eax + 0x78], esi
// 0046b218  5e                   pop esi
// 0046b219  89542408             mov dword ptr [esp + 8], edx
// 0046b21d  e96e8c3800           jmp 0x7f3e90
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnActivateView@CScintillaView@@MAEXHPAVCView@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
