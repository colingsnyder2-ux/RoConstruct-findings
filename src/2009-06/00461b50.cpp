// roc 2009-06 00461b50  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461b50
//
// 00461b50  837c240400           cmp dword ptr [esp + 4], 0
// 00461b55  6a00                 push 0
// 00461b57  6a00                 push 0
// 00461b59  6887080000           push 0x887
// 00461b5e  740f                 je 0x461b6f
// 00461b60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461b63  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461b66  50                   push eax
// 00461b67  ffd1                 call ecx
// 00461b69  83c410               add esp, 0x10
// 00461b6c  c20400               ret 4
// 00461b6f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461b72  52                   push edx
// 00461b73  ff1590ee8900         call dword ptr [0x89ee90]
// 00461b79  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
