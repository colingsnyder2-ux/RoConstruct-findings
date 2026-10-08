// roc 2009-06 00461940  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461940
//
// 00461940  837c240400           cmp dword ptr [esp + 4], 0
// 00461945  6a00                 push 0
// 00461947  6a00                 push 0
// 00461949  687d080000           push 0x87d
// 0046194e  740f                 je 0x46195f
// 00461950  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461953  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461956  50                   push eax
// 00461957  ffd1                 call ecx
// 00461959  83c410               add esp, 0x10
// 0046195c  c20400               ret 4
// 0046195f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461962  52                   push edx
// 00461963  ff1590ee8900         call dword ptr [0x89ee90]
// 00461969  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanPaste@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
