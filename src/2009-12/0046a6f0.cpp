// roc 2009-12 0046a6f0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a6f0
//
// 0046a6f0  837c240400           cmp dword ptr [esp + 4], 0
// 0046a6f5  6a00                 push 0
// 0046a6f7  6a00                 push 0
// 0046a6f9  6887080000           push 0x887
// 0046a6fe  740f                 je 0x46a70f
// 0046a700  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a703  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a706  50                   push eax
// 0046a707  ffd1                 call ecx
// 0046a709  83c410               add esp, 0x10
// 0046a70c  c20400               ret 4
// 0046a70f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a712  52                   push edx
// 0046a713  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a719  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
