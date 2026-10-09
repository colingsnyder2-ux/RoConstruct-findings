// roc 2009-12 00469900  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469900
//
// 00469900  837c240400           cmp dword ptr [esp + 4], 0
// 00469905  6a00                 push 0
// 00469907  6a00                 push 0
// 00469909  68d6070000           push 0x7d6
// 0046990e  740f                 je 0x46991f
// 00469910  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469913  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469916  50                   push eax
// 00469917  ffd1                 call ecx
// 00469919  83c410               add esp, 0x10
// 0046991c  c20400               ret 4
// 0046991f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00469922  52                   push edx
// 00469923  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469929  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
