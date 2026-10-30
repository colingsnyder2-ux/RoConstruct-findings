// roc 2009-12 0046a320  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a320
//
// 0046a320  837c240800           cmp dword ptr [esp + 8], 0
// 0046a325  741b                 je 0x46a342
// 0046a327  8b442404             mov eax, dword ptr [esp + 4]
// 0046a32b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a32e  50                   push eax
// 0046a32f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a332  6a00                 push 0
// 0046a334  6872080000           push 0x872
// 0046a339  52                   push edx
// 0046a33a  ffd0                 call eax
// 0046a33c  83c410               add esp, 0x10
// 0046a33f  c20800               ret 8
// 0046a342  8b542404             mov edx, dword ptr [esp + 4]
// 0046a346  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a349  52                   push edx
// 0046a34a  6a00                 push 0
// 0046a34c  6872080000           push 0x872
// 0046a351  50                   push eax
// 0046a352  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a358  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextRange@CScintillaCtrl@@QAEHPAUTextRange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
