// roc 2009-12 0046a780  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a780
//
// 0046a780  837c240400           cmp dword ptr [esp + 4], 0
// 0046a785  6a00                 push 0
// 0046a787  6a00                 push 0
// 0046a789  6891080000           push 0x891
// 0046a78e  740f                 je 0x46a79f
// 0046a790  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a793  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a796  50                   push eax
// 0046a797  ffd1                 call ecx
// 0046a799  83c410               add esp, 0x10
// 0046a79c  c20400               ret 4
// 0046a79f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a7a2  52                   push edx
// 0046a7a3  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a7a9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
