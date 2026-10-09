// roc 2009-12 0046a360  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a360
//
// 0046a360  837c240800           cmp dword ptr [esp + 8], 0
// 0046a365  6a00                 push 0
// 0046a367  7419                 je 0x46a382
// 0046a369  8b442408             mov eax, dword ptr [esp + 8]
// 0046a36d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a370  50                   push eax
// 0046a371  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a374  6873080000           push 0x873
// 0046a379  52                   push edx
// 0046a37a  ffd0                 call eax
// 0046a37c  83c410               add esp, 0x10
// 0046a37f  c20800               ret 8
// 0046a382  8b542408             mov edx, dword ptr [esp + 8]
// 0046a386  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a389  52                   push edx
// 0046a38a  6873080000           push 0x873
// 0046a38f  50                   push eax
// 0046a390  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a396  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?HideSelection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
