// roc 2010-06 0046e1f0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e1f0
//
// 0046e1f0  837c240400           cmp dword ptr [esp + 4], 0
// 0046e1f5  6a00                 push 0
// 0046e1f7  6a00                 push 0
// 0046e1f9  6887080000           push 0x887
// 0046e1fe  740f                 je 0x46e20f
// 0046e200  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e203  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e206  50                   push eax
// 0046e207  ffd1                 call ecx
// 0046e209  83c410               add esp, 0x10
// 0046e20c  c20400               ret 4
// 0046e20f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e212  52                   push edx
// 0046e213  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e219  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
