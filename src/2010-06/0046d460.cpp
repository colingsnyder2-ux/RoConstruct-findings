// roc 2010-06 0046d460  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d460
//
// 0046d460  837c240800           cmp dword ptr [esp + 8], 0
// 0046d465  6a00                 push 0
// 0046d467  7419                 je 0x46d482
// 0046d469  8b442408             mov eax, dword ptr [esp + 8]
// 0046d46d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046d470  50                   push eax
// 0046d471  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046d474  68da070000           push 0x7da
// 0046d479  52                   push edx
// 0046d47a  ffd0                 call eax
// 0046d47c  83c410               add esp, 0x10
// 0046d47f  c20800               ret 8
// 0046d482  8b542408             mov edx, dword ptr [esp + 8]
// 0046d486  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046d489  52                   push edx
// 0046d48a  68da070000           push 0x7da
// 0046d48f  50                   push eax
// 0046d490  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d496  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetStyleAt@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
