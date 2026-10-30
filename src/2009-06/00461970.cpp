// roc 2009-06 00461970  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461970
//
// 00461970  837c240400           cmp dword ptr [esp + 4], 0
// 00461975  6a00                 push 0
// 00461977  6a00                 push 0
// 00461979  687e080000           push 0x87e
// 0046197e  740f                 je 0x46198f
// 00461980  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461983  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461986  50                   push eax
// 00461987  ffd1                 call ecx
// 00461989  83c410               add esp, 0x10
// 0046198c  c20400               ret 4
// 0046198f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461992  52                   push edx
// 00461993  ff1590ee8900         call dword ptr [0x89ee90]
// 00461999  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanUndo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
