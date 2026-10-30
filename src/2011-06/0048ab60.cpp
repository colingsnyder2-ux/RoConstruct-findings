// roc 2011-06 0048ab60  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ab60
//
// 0048ab60  837c240400           cmp dword ptr [esp + 4], 0
// 0048ab65  6a00                 push 0
// 0048ab67  6a00                 push 0
// 0048ab69  688f080000           push 0x88f
// 0048ab6e  740f                 je 0x48ab7f
// 0048ab70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048ab73  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048ab76  50                   push eax
// 0048ab77  ffd1                 call ecx
// 0048ab79  83c410               add esp, 0x10
// 0048ab7c  c20400               ret 4
// 0048ab7f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048ab82  52                   push edx
// 0048ab83  ff15c019a400         call dword ptr [0xa419c0]
// 0048ab89  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
