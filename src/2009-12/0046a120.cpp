// roc 2009-12 0046a120  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a120
//
// 0046a120  837c240800           cmp dword ptr [esp + 8], 0
// 0046a125  6a00                 push 0
// 0046a127  7419                 je 0x46a142
// 0046a129  8b442408             mov eax, dword ptr [esp + 8]
// 0046a12d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a130  50                   push eax
// 0046a131  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a134  683a080000           push 0x83a
// 0046a139  52                   push edx
// 0046a13a  ffd0                 call eax
// 0046a13c  83c410               add esp, 0x10
// 0046a13f  c20800               ret 8
// 0046a142  8b542408             mov edx, dword ptr [esp + 8]
// 0046a146  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a149  52                   push edx
// 0046a14a  683a080000           push 0x83a
// 0046a14f  50                   push eax
// 0046a150  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a156  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCSetSeparator@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
