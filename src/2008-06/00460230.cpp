// roc 2008-06 00460230  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460230
//
// 00460230  837c240400           cmp dword ptr [esp + 4], 0
// 00460235  6a00                 push 0
// 00460237  6a00                 push 0
// 00460239  68de070000           push 0x7de
// 0046023e  740f                 je 0x46024f
// 00460240  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460243  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460246  50                   push eax
// 00460247  ffd1                 call ecx
// 00460249  83c410               add esp, 0x10
// 0046024c  c20400               ret 4
// 0046024f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460252  52                   push edx
// 00460253  ff15142e8000         call dword ptr [0x802e14]
// 00460259  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSavePoint@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
