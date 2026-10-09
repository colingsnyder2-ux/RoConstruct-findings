// roc 2009-12 0046a970  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a970
//
// 0046a970  837c240800           cmp dword ptr [esp + 8], 0
// 0046a975  6a00                 push 0
// 0046a977  7419                 je 0x46a992
// 0046a979  8b442408             mov eax, dword ptr [esp + 8]
// 0046a97d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a980  50                   push eax
// 0046a981  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a984  68d8080000           push 0x8d8
// 0046a989  52                   push edx
// 0046a98a  ffd0                 call eax
// 0046a98c  83c410               add esp, 0x10
// 0046a98f  c20800               ret 8
// 0046a992  8b542408             mov edx, dword ptr [esp + 8]
// 0046a996  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a999  52                   push edx
// 0046a99a  68d8080000           push 0x8d8
// 0046a99f  50                   push eax
// 0046a9a0  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a9a6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMouseDwellTime@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
