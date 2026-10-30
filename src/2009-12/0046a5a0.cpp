// roc 2009-12 0046a5a0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a5a0
//
// 0046a5a0  837c240400           cmp dword ptr [esp + 4], 0
// 0046a5a5  6a00                 push 0
// 0046a5a7  6a00                 push 0
// 0046a5a9  6881080000           push 0x881
// 0046a5ae  740f                 je 0x46a5bf
// 0046a5b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a5b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a5b6  50                   push eax
// 0046a5b7  ffd1                 call ecx
// 0046a5b9  83c410               add esp, 0x10
// 0046a5bc  c20400               ret 4
// 0046a5bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a5c2  52                   push edx
// 0046a5c3  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a5c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cut@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
