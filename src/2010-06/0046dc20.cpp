// roc 2010-06 0046dc20  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dc20
//
// 0046dc20  837c240800           cmp dword ptr [esp + 8], 0
// 0046dc25  6a00                 push 0
// 0046dc27  7419                 je 0x46dc42
// 0046dc29  8b442408             mov eax, dword ptr [esp + 8]
// 0046dc2d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046dc30  50                   push eax
// 0046dc31  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046dc34  683a080000           push 0x83a
// 0046dc39  52                   push edx
// 0046dc3a  ffd0                 call eax
// 0046dc3c  83c410               add esp, 0x10
// 0046dc3f  c20800               ret 8
// 0046dc42  8b542408             mov edx, dword ptr [esp + 8]
// 0046dc46  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046dc49  52                   push edx
// 0046dc4a  683a080000           push 0x83a
// 0046dc4f  50                   push eax
// 0046dc50  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dc56  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCSetSeparator@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
