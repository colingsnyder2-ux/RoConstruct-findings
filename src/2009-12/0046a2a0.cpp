// roc 2009-12 0046a2a0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a2a0
//
// 0046a2a0  837c240400           cmp dword ptr [esp + 4], 0
// 0046a2a5  6a00                 push 0
// 0046a2a7  6a00                 push 0
// 0046a2a9  686f080000           push 0x86f
// 0046a2ae  740f                 je 0x46a2bf
// 0046a2b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a2b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a2b6  50                   push eax
// 0046a2b7  ffd1                 call ecx
// 0046a2b9  83c410               add esp, 0x10
// 0046a2bc  c20400               ret 4
// 0046a2bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a2c2  52                   push edx
// 0046a2c3  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a2c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetModify@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
