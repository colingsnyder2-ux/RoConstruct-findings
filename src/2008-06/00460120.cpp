// roc 2008-06 00460120  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460120
//
// 00460120  837c240400           cmp dword ptr [esp + 4], 0
// 00460125  6a00                 push 0
// 00460127  6a00                 push 0
// 00460129  68d8070000           push 0x7d8
// 0046012e  740f                 je 0x46013f
// 00460130  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460133  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460136  50                   push eax
// 00460137  ffd1                 call ecx
// 00460139  83c410               add esp, 0x10
// 0046013c  c20400               ret 4
// 0046013f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460142  52                   push edx
// 00460143  ff15142e8000         call dword ptr [0x802e14]
// 00460149  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetCurrentPos@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
