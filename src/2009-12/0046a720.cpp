// roc 2009-12 0046a720  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a720
//
// 0046a720  837c240400           cmp dword ptr [esp + 4], 0
// 0046a725  6a00                 push 0
// 0046a727  6a00                 push 0
// 0046a729  688b080000           push 0x88b
// 0046a72e  740f                 je 0x46a73f
// 0046a730  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a733  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a736  50                   push eax
// 0046a737  ffd1                 call ecx
// 0046a739  83c410               add esp, 0x10
// 0046a73c  c20400               ret 4
// 0046a73f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a742  52                   push edx
// 0046a743  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a749  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetOvertype@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
