// roc 2009-06 00461370  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461370
//
// 00461370  837c240400           cmp dword ptr [esp + 4], 0
// 00461375  6a00                 push 0
// 00461377  6a00                 push 0
// 00461379  6802080000           push 0x802
// 0046137e  740f                 je 0x46138f
// 00461380  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461383  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461386  50                   push eax
// 00461387  ffd1                 call ecx
// 00461389  83c410               add esp, 0x10
// 0046138c  c20400               ret 4
// 0046138f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461392  52                   push edx
// 00461393  ff1590ee8900         call dword ptr [0x89ee90]
// 00461399  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
