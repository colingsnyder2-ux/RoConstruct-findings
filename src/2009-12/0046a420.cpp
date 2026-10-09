// roc 2009-12 0046a420  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a420
//
// 0046a420  837c240800           cmp dword ptr [esp + 8], 0
// 0046a425  6a00                 push 0
// 0046a427  7419                 je 0x46a442
// 0046a429  8b442408             mov eax, dword ptr [esp + 8]
// 0046a42d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a430  50                   push eax
// 0046a431  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a434  6876080000           push 0x876
// 0046a439  52                   push edx
// 0046a43a  ffd0                 call eax
// 0046a43c  83c410               add esp, 0x10
// 0046a43f  c20800               ret 8
// 0046a442  8b542408             mov edx, dword ptr [esp + 8]
// 0046a446  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a449  52                   push edx
// 0046a44a  6876080000           push 0x876
// 0046a44f  50                   push eax
// 0046a450  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a456  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?LineFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
