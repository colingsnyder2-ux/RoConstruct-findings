// roc 2009-06 00461d20  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461d20
//
// 00461d20  837c240400           cmp dword ptr [esp + 4], 0
// 00461d25  6a00                 push 0
// 00461d27  6a00                 push 0
// 00461d29  689a080000           push 0x89a
// 00461d2e  740f                 je 0x461d3f
// 00461d30  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461d33  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461d36  50                   push eax
// 00461d37  ffd1                 call ecx
// 00461d39  83c410               add esp, 0x10
// 00461d3c  c20400               ret 4
// 00461d3f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461d42  52                   push edx
// 00461d43  ff1590ee8900         call dword ptr [0x89ee90]
// 00461d49  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipActive@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
