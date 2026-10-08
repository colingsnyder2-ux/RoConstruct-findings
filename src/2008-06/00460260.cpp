// roc 2008-06 00460260  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460260
//
// 00460260  837c240400           cmp dword ptr [esp + 4], 0
// 00460265  6a00                 push 0
// 00460267  6a00                 push 0
// 00460269  68e0070000           push 0x7e0
// 0046026e  740f                 je 0x46027f
// 00460270  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460273  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460276  50                   push eax
// 00460277  ffd1                 call ecx
// 00460279  83c410               add esp, 0x10
// 0046027c  c20400               ret 4
// 0046027f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460282  52                   push edx
// 00460283  ff15142e8000         call dword ptr [0x802e14]
// 00460289  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanRedo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
