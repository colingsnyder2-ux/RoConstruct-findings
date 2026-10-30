// roc 2010-06 0046d510  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d510
//
// 0046d510  837c240400           cmp dword ptr [esp + 4], 0
// 0046d515  6a00                 push 0
// 0046d517  6a00                 push 0
// 0046d519  68dd070000           push 0x7dd
// 0046d51e  740f                 je 0x46d52f
// 0046d520  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d523  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d526  50                   push eax
// 0046d527  ffd1                 call ecx
// 0046d529  83c410               add esp, 0x10
// 0046d52c  c20400               ret 4
// 0046d52f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046d532  52                   push edx
// 0046d533  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d539  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SelectAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
