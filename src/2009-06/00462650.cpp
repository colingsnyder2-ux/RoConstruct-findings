// roc 2009-06 00462650  unit: Scintilla::CScintillaView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462650
//
// 00462650  a1a4689e00           mov eax, dword ptr [0x9e68a4]
// 00462655  8b542408             mov edx, dword ptr [esp + 8]
// 00462659  85c0                 test eax, eax
// 0046265b  740c                 je 0x462669
// 0046265d  3bd1                 cmp edx, ecx
// 0046265f  7508                 jne 0x462669
// 00462661  56                   push esi
// 00462662  8b7120               mov esi, dword ptr [ecx + 0x20]
// 00462665  897078               mov dword ptr [eax + 0x78], esi
// 00462668  5e                   pop esi
// 00462669  89542408             mov dword ptr [esp + 8], edx
// 0046266d  e9f6692b00           jmp 0x719068
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnActivateView@CScintillaView@@MAEXHPAVCView@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
