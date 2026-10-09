// roc 2010-06 0046e280  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e280
//
// 0046e280  837c240400           cmp dword ptr [esp + 4], 0
// 0046e285  6a00                 push 0
// 0046e287  6a00                 push 0
// 0046e289  6891080000           push 0x891
// 0046e28e  740f                 je 0x46e29f
// 0046e290  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e293  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e296  50                   push eax
// 0046e297  ffd1                 call ecx
// 0046e299  83c410               add esp, 0x10
// 0046e29c  c20400               ret 4
// 0046e29f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e2a2  52                   push edx
// 0046e2a3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e2a9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
