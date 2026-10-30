// roc 2010-06 0046e250  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e250
//
// 0046e250  837c240400           cmp dword ptr [esp + 4], 0
// 0046e255  6a00                 push 0
// 0046e257  6a00                 push 0
// 0046e259  688f080000           push 0x88f
// 0046e25e  740f                 je 0x46e26f
// 0046e260  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e263  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e266  50                   push eax
// 0046e267  ffd1                 call ecx
// 0046e269  83c410               add esp, 0x10
// 0046e26c  c20400               ret 4
// 0046e26f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e272  52                   push edx
// 0046e273  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e279  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
