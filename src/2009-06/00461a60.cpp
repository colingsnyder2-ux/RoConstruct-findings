// roc 2009-06 00461a60  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461a60
//
// 00461a60  837c240400           cmp dword ptr [esp + 4], 0
// 00461a65  6a00                 push 0
// 00461a67  6a00                 push 0
// 00461a69  6883080000           push 0x883
// 00461a6e  740f                 je 0x461a7f
// 00461a70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461a73  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461a76  50                   push eax
// 00461a77  ffd1                 call ecx
// 00461a79  83c410               add esp, 0x10
// 00461a7c  c20400               ret 4
// 00461a7f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461a82  52                   push edx
// 00461a83  ff1590ee8900         call dword ptr [0x89ee90]
// 00461a89  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Paste@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
