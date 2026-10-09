// roc 2009-12 0046a570  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a570
//
// 0046a570  837c240400           cmp dword ptr [esp + 4], 0
// 0046a575  6a00                 push 0
// 0046a577  6a00                 push 0
// 0046a579  6880080000           push 0x880
// 0046a57e  740f                 je 0x46a58f
// 0046a580  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a583  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a586  50                   push eax
// 0046a587  ffd1                 call ecx
// 0046a589  83c410               add esp, 0x10
// 0046a58c  c20400               ret 4
// 0046a58f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a592  52                   push edx
// 0046a593  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a599  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Undo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
