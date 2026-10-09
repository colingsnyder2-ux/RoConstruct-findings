// roc 2010-06 0046e220  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e220
//
// 0046e220  837c240400           cmp dword ptr [esp + 4], 0
// 0046e225  6a00                 push 0
// 0046e227  6a00                 push 0
// 0046e229  688b080000           push 0x88b
// 0046e22e  740f                 je 0x46e23f
// 0046e230  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e233  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e236  50                   push eax
// 0046e237  ffd1                 call ecx
// 0046e239  83c410               add esp, 0x10
// 0046e23c  c20400               ret 4
// 0046e23f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e242  52                   push edx
// 0046e243  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e249  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetOvertype@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
