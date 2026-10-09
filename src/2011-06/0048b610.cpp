// roc 2011-06 0048b610  unit: Scintilla::CScintillaView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b610
//
// 0048b610  a1548cc100           mov eax, dword ptr [0xc18c54]
// 0048b615  8b542408             mov edx, dword ptr [esp + 8]
// 0048b619  85c0                 test eax, eax
// 0048b61b  740c                 je 0x48b629
// 0048b61d  3bd1                 cmp edx, ecx
// 0048b61f  7508                 jne 0x48b629
// 0048b621  56                   push esi
// 0048b622  8b7120               mov esi, dword ptr [ecx + 0x20]
// 0048b625  897078               mov dword ptr [eax + 0x78], esi
// 0048b628  5e                   pop esi
// 0048b629  89542408             mov dword ptr [esp + 8], edx
// 0048b62d  e95cf03700           jmp 0x80a68e
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnActivateView@CScintillaView@@MAEXHPAVCView@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
