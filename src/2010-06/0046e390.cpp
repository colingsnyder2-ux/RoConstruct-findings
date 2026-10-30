// roc 2010-06 0046e390  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e390
//
// 0046e390  837c240400           cmp dword ptr [esp + 4], 0
// 0046e395  6a00                 push 0
// 0046e397  6a00                 push 0
// 0046e399  6899080000           push 0x899
// 0046e39e  740f                 je 0x46e3af
// 0046e3a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e3a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e3a6  50                   push eax
// 0046e3a7  ffd1                 call ecx
// 0046e3a9  83c410               add esp, 0x10
// 0046e3ac  c20400               ret 4
// 0046e3af  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e3b2  52                   push edx
// 0046e3b3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e3b9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipCancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
