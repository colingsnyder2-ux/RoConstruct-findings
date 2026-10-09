// roc 2009-12 0046a930  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a930
//
// 0046a930  837c240800           cmp dword ptr [esp + 8], 0
// 0046a935  6a00                 push 0
// 0046a937  7419                 je 0x46a952
// 0046a939  8b442408             mov eax, dword ptr [esp + 8]
// 0046a93d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a940  50                   push eax
// 0046a941  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a944  68b7080000           push 0x8b7
// 0046a949  52                   push edx
// 0046a94a  ffd0                 call eax
// 0046a94c  83c410               add esp, 0x10
// 0046a94f  c20800               ret 8
// 0046a952  8b542408             mov edx, dword ptr [esp + 8]
// 0046a956  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a959  52                   push edx
// 0046a95a  68b7080000           push 0x8b7
// 0046a95f  50                   push eax
// 0046a960  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a966  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ToggleFold@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
