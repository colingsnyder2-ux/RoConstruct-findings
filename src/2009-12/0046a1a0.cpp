// roc 2009-12 0046a1a0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a1a0
//
// 0046a1a0  837c240400           cmp dword ptr [esp + 4], 0
// 0046a1a5  6a00                 push 0
// 0046a1a7  6a00                 push 0
// 0046a1a9  685f080000           push 0x85f
// 0046a1ae  740f                 je 0x46a1bf
// 0046a1b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a1b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a1b6  50                   push eax
// 0046a1b7  ffd1                 call ecx
// 0046a1b9  83c410               add esp, 0x10
// 0046a1bc  c20400               ret 4
// 0046a1bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a1c2  52                   push edx
// 0046a1c3  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a1c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
