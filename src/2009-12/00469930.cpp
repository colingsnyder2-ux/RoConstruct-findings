// roc 2009-12 00469930  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469930
//
// 00469930  837c240400           cmp dword ptr [esp + 4], 0
// 00469935  6a00                 push 0
// 00469937  6a00                 push 0
// 00469939  68d8070000           push 0x7d8
// 0046993e  740f                 je 0x46994f
// 00469940  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469943  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469946  50                   push eax
// 00469947  ffd1                 call ecx
// 00469949  83c410               add esp, 0x10
// 0046994c  c20400               ret 4
// 0046994f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00469952  52                   push edx
// 00469953  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469959  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetCurrentPos@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
