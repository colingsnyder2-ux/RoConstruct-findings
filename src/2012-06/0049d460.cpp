// roc 2012-06 0049d460  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d460
//
// 0049d460  837c240800           cmp dword ptr [esp + 8], 0
// 0049d465  741b                 je 0x49d482
// 0049d467  8b442404             mov eax, dword ptr [esp + 4]
// 0049d46b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d46e  50                   push eax
// 0049d46f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d472  6a00                 push 0
// 0049d474  6872080000           push 0x872
// 0049d479  52                   push edx
// 0049d47a  ffd0                 call eax
// 0049d47c  83c410               add esp, 0x10
// 0049d47f  c20800               ret 8
// 0049d482  8b542404             mov edx, dword ptr [esp + 4]
// 0049d486  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d489  52                   push edx
// 0049d48a  6a00                 push 0
// 0049d48c  6872080000           push 0x872
// 0049d491  50                   push eax
// 0049d492  ff15043cb200         call dword ptr [0xb23c04]
// 0049d498  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextRange@CScintillaCtrl@@QAEHPAUTextRange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
