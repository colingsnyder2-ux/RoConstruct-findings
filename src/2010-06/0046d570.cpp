// roc 2010-06 0046d570  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d570
//
// 0046d570  837c240400           cmp dword ptr [esp + 4], 0
// 0046d575  6a00                 push 0
// 0046d577  6a00                 push 0
// 0046d579  68e0070000           push 0x7e0
// 0046d57e  740f                 je 0x46d58f
// 0046d580  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d583  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d586  50                   push eax
// 0046d587  ffd1                 call ecx
// 0046d589  83c410               add esp, 0x10
// 0046d58c  c20400               ret 4
// 0046d58f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046d592  52                   push edx
// 0046d593  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d599  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanRedo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
