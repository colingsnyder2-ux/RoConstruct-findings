// roc 2009-06 00461e40  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461e40
//
// 00461e40  837c240400           cmp dword ptr [esp + 4], 0
// 00461e45  6a00                 push 0
// 00461e47  6a00                 push 0
// 00461e49  6815090000           push 0x915
// 00461e4e  740f                 je 0x461e5f
// 00461e50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461e53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461e56  50                   push eax
// 00461e57  ffd1                 call ecx
// 00461e59  83c410               add esp, 0x10
// 00461e5c  c20400               ret 4
// 00461e5f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461e62  52                   push edx
// 00461e63  ff1590ee8900         call dword ptr [0x89ee90]
// 00461e69  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
