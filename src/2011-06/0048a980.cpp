// roc 2011-06 0048a980  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a980
//
// 0048a980  837c240400           cmp dword ptr [esp + 4], 0
// 0048a985  6a00                 push 0
// 0048a987  6a00                 push 0
// 0048a989  6880080000           push 0x880
// 0048a98e  740f                 je 0x48a99f
// 0048a990  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a993  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a996  50                   push eax
// 0048a997  ffd1                 call ecx
// 0048a999  83c410               add esp, 0x10
// 0048a99c  c20400               ret 4
// 0048a99f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048a9a2  52                   push edx
// 0048a9a3  ff15c019a400         call dword ptr [0xa419c0]
// 0048a9a9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Undo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
