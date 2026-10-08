// roc 2009-06 00461a30  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461a30
//
// 00461a30  837c240400           cmp dword ptr [esp + 4], 0
// 00461a35  6a00                 push 0
// 00461a37  6a00                 push 0
// 00461a39  6882080000           push 0x882
// 00461a3e  740f                 je 0x461a4f
// 00461a40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461a43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461a46  50                   push eax
// 00461a47  ffd1                 call ecx
// 00461a49  83c410               add esp, 0x10
// 00461a4c  c20400               ret 4
// 00461a4f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461a52  52                   push edx
// 00461a53  ff1590ee8900         call dword ptr [0x89ee90]
// 00461a59  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Copy@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
