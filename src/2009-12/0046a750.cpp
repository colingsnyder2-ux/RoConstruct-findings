// roc 2009-12 0046a750  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a750
//
// 0046a750  837c240400           cmp dword ptr [esp + 4], 0
// 0046a755  6a00                 push 0
// 0046a757  6a00                 push 0
// 0046a759  688f080000           push 0x88f
// 0046a75e  740f                 je 0x46a76f
// 0046a760  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a763  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a766  50                   push eax
// 0046a767  ffd1                 call ecx
// 0046a769  83c410               add esp, 0x10
// 0046a76c  c20400               ret 4
// 0046a76f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a772  52                   push edx
// 0046a773  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a779  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
