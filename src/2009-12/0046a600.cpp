// roc 2009-12 0046a600  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a600
//
// 0046a600  837c240400           cmp dword ptr [esp + 4], 0
// 0046a605  6a00                 push 0
// 0046a607  6a00                 push 0
// 0046a609  6883080000           push 0x883
// 0046a60e  740f                 je 0x46a61f
// 0046a610  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a613  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a616  50                   push eax
// 0046a617  ffd1                 call ecx
// 0046a619  83c410               add esp, 0x10
// 0046a61c  c20400               ret 4
// 0046a61f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a622  52                   push edx
// 0046a623  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a629  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Paste@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
