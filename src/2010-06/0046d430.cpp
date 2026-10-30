// roc 2010-06 0046d430  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d430
//
// 0046d430  837c240400           cmp dword ptr [esp + 4], 0
// 0046d435  6a00                 push 0
// 0046d437  6a00                 push 0
// 0046d439  68d8070000           push 0x7d8
// 0046d43e  740f                 je 0x46d44f
// 0046d440  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d443  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d446  50                   push eax
// 0046d447  ffd1                 call ecx
// 0046d449  83c410               add esp, 0x10
// 0046d44c  c20400               ret 4
// 0046d44f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046d452  52                   push edx
// 0046d453  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d459  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetCurrentPos@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
