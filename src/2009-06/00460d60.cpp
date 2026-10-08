// roc 2009-06 00460d60  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460d60
//
// 00460d60  837c240400           cmp dword ptr [esp + 4], 0
// 00460d65  6a00                 push 0
// 00460d67  6a00                 push 0
// 00460d69  68d6070000           push 0x7d6
// 00460d6e  740f                 je 0x460d7f
// 00460d70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460d73  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460d76  50                   push eax
// 00460d77  ffd1                 call ecx
// 00460d79  83c410               add esp, 0x10
// 00460d7c  c20400               ret 4
// 00460d7f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460d82  52                   push edx
// 00460d83  ff1590ee8900         call dword ptr [0x89ee90]
// 00460d89  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
