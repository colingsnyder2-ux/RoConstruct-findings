// roc 2010-06 0046d400  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d400
//
// 0046d400  837c240400           cmp dword ptr [esp + 4], 0
// 0046d405  6a00                 push 0
// 0046d407  6a00                 push 0
// 0046d409  68d6070000           push 0x7d6
// 0046d40e  740f                 je 0x46d41f
// 0046d410  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d413  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d416  50                   push eax
// 0046d417  ffd1                 call ecx
// 0046d419  83c410               add esp, 0x10
// 0046d41c  c20400               ret 4
// 0046d41f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046d422  52                   push edx
// 0046d423  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d429  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
