// roc 2010-06 0046e010  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e010
//
// 0046e010  837c240400           cmp dword ptr [esp + 4], 0
// 0046e015  6a00                 push 0
// 0046e017  6a00                 push 0
// 0046e019  687e080000           push 0x87e
// 0046e01e  740f                 je 0x46e02f
// 0046e020  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e023  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e026  50                   push eax
// 0046e027  ffd1                 call ecx
// 0046e029  83c410               add esp, 0x10
// 0046e02c  c20400               ret 4
// 0046e02f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e032  52                   push edx
// 0046e033  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e039  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanUndo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
