// roc 2010-06 0046dc60  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dc60
//
// 0046dc60  837c240800           cmp dword ptr [esp + 8], 0
// 0046dc65  6a00                 push 0
// 0046dc67  7419                 je 0x46dc82
// 0046dc69  8b442408             mov eax, dword ptr [esp + 8]
// 0046dc6d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046dc70  50                   push eax
// 0046dc71  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046dc74  6851080000           push 0x851
// 0046dc79  52                   push edx
// 0046dc7a  ffd0                 call eax
// 0046dc7c  83c410               add esp, 0x10
// 0046dc7f  c20800               ret 8
// 0046dc82  8b542408             mov edx, dword ptr [esp + 8]
// 0046dc86  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046dc89  52                   push edx
// 0046dc8a  6851080000           push 0x851
// 0046dc8f  50                   push eax
// 0046dc90  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dc96  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetColumn@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
