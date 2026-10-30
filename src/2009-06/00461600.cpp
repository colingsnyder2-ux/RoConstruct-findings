// roc 2009-06 00461600  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461600
//
// 00461600  837c240400           cmp dword ptr [esp + 4], 0
// 00461605  6a00                 push 0
// 00461607  6a00                 push 0
// 00461609  685f080000           push 0x85f
// 0046160e  740f                 je 0x46161f
// 00461610  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461613  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461616  50                   push eax
// 00461617  ffd1                 call ecx
// 00461619  83c410               add esp, 0x10
// 0046161c  c20400               ret 4
// 0046161f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461622  52                   push edx
// 00461623  ff1590ee8900         call dword ptr [0x89ee90]
// 00461629  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
