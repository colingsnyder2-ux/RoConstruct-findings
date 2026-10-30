// roc 2010-06 0046e100  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e100
//
// 0046e100  837c240400           cmp dword ptr [esp + 4], 0
// 0046e105  6a00                 push 0
// 0046e107  6a00                 push 0
// 0046e109  6883080000           push 0x883
// 0046e10e  740f                 je 0x46e11f
// 0046e110  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e113  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e116  50                   push eax
// 0046e117  ffd1                 call ecx
// 0046e119  83c410               add esp, 0x10
// 0046e11c  c20400               ret 4
// 0046e11f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e122  52                   push edx
// 0046e123  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e129  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Paste@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
