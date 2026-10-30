// roc 2010-06 0046e430  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e430
//
// 0046e430  837c240800           cmp dword ptr [esp + 8], 0
// 0046e435  6a00                 push 0
// 0046e437  7419                 je 0x46e452
// 0046e439  8b442408             mov eax, dword ptr [esp + 8]
// 0046e43d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046e440  50                   push eax
// 0046e441  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046e444  68b7080000           push 0x8b7
// 0046e449  52                   push edx
// 0046e44a  ffd0                 call eax
// 0046e44c  83c410               add esp, 0x10
// 0046e44f  c20800               ret 8
// 0046e452  8b542408             mov edx, dword ptr [esp + 8]
// 0046e456  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046e459  52                   push edx
// 0046e45a  68b7080000           push 0x8b7
// 0046e45f  50                   push eax
// 0046e460  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e466  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ToggleFold@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
