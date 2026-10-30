// roc 2009-06 00461630  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461630
//
// 00461630  837c240400           cmp dword ptr [esp + 4], 0
// 00461635  6a00                 push 0
// 00461637  6a00                 push 0
// 00461639  6861080000           push 0x861
// 0046163e  740f                 je 0x46164f
// 00461640  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461643  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461646  50                   push eax
// 00461647  ffd1                 call ecx
// 00461649  83c410               add esp, 0x10
// 0046164c  c20400               ret 4
// 0046164f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461652  52                   push edx
// 00461653  ff1590ee8900         call dword ptr [0x89ee90]
// 00461659  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
