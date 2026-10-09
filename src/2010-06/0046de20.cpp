// roc 2010-06 0046de20  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046de20
//
// 0046de20  837c240800           cmp dword ptr [esp + 8], 0
// 0046de25  741b                 je 0x46de42
// 0046de27  8b442404             mov eax, dword ptr [esp + 4]
// 0046de2b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046de2e  50                   push eax
// 0046de2f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046de32  6a00                 push 0
// 0046de34  6872080000           push 0x872
// 0046de39  52                   push edx
// 0046de3a  ffd0                 call eax
// 0046de3c  83c410               add esp, 0x10
// 0046de3f  c20800               ret 8
// 0046de42  8b542404             mov edx, dword ptr [esp + 4]
// 0046de46  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046de49  52                   push edx
// 0046de4a  6a00                 push 0
// 0046de4c  6872080000           push 0x872
// 0046de51  50                   push eax
// 0046de52  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046de58  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextRange@CScintillaCtrl@@QAEHPAUTextRange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
