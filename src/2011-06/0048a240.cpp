// roc 2011-06 0048a240  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a240
//
// 0048a240  837c240800           cmp dword ptr [esp + 8], 0
// 0048a245  6a00                 push 0
// 0048a247  7419                 je 0x48a262
// 0048a249  8b442408             mov eax, dword ptr [esp + 8]
// 0048a24d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a250  50                   push eax
// 0048a251  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a254  68c3080000           push 0x8c3
// 0048a259  52                   push edx
// 0048a25a  ffd0                 call eax
// 0048a25c  83c410               add esp, 0x10
// 0048a25f  c20800               ret 8
// 0048a262  8b542408             mov edx, dword ptr [esp + 8]
// 0048a266  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a269  52                   push edx
// 0048a26a  68c3080000           push 0x8c3
// 0048a26f  50                   push eax
// 0048a270  ff15c019a400         call dword ptr [0xa419c0]
// 0048a276  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetMarginWidthN@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
