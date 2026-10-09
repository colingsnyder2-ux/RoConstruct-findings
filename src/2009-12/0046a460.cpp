// roc 2009-12 0046a460  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a460
//
// 0046a460  837c240800           cmp dword ptr [esp + 8], 0
// 0046a465  741b                 je 0x46a482
// 0046a467  8b442404             mov eax, dword ptr [esp + 4]
// 0046a46b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a46e  50                   push eax
// 0046a46f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a472  6a00                 push 0
// 0046a474  687a080000           push 0x87a
// 0046a479  52                   push edx
// 0046a47a  ffd0                 call eax
// 0046a47c  83c410               add esp, 0x10
// 0046a47f  c20800               ret 8
// 0046a482  8b542404             mov edx, dword ptr [esp + 4]
// 0046a486  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a489  52                   push edx
// 0046a48a  6a00                 push 0
// 0046a48c  687a080000           push 0x87a
// 0046a491  50                   push eax
// 0046a492  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a498  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ReplaceSel@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
