// roc 2011-06 0048a920  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a920
//
// 0048a920  837c240400           cmp dword ptr [esp + 4], 0
// 0048a925  6a00                 push 0
// 0048a927  6a00                 push 0
// 0048a929  687e080000           push 0x87e
// 0048a92e  740f                 je 0x48a93f
// 0048a930  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a933  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a936  50                   push eax
// 0048a937  ffd1                 call ecx
// 0048a939  83c410               add esp, 0x10
// 0048a93c  c20400               ret 4
// 0048a93f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048a942  52                   push edx
// 0048a943  ff15c019a400         call dword ptr [0xa419c0]
// 0048a949  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanUndo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
