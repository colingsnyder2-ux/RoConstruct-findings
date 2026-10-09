// roc 2010-06 0046de60  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046de60
//
// 0046de60  837c240800           cmp dword ptr [esp + 8], 0
// 0046de65  6a00                 push 0
// 0046de67  7419                 je 0x46de82
// 0046de69  8b442408             mov eax, dword ptr [esp + 8]
// 0046de6d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046de70  50                   push eax
// 0046de71  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046de74  6873080000           push 0x873
// 0046de79  52                   push edx
// 0046de7a  ffd0                 call eax
// 0046de7c  83c410               add esp, 0x10
// 0046de7f  c20800               ret 8
// 0046de82  8b542408             mov edx, dword ptr [esp + 8]
// 0046de86  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046de89  52                   push edx
// 0046de8a  6873080000           push 0x873
// 0046de8f  50                   push eax
// 0046de90  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046de96  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?HideSelection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
