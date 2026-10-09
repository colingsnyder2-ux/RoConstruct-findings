// roc 2010-06 0046e3c0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e3c0
//
// 0046e3c0  837c240400           cmp dword ptr [esp + 4], 0
// 0046e3c5  6a00                 push 0
// 0046e3c7  6a00                 push 0
// 0046e3c9  689a080000           push 0x89a
// 0046e3ce  740f                 je 0x46e3df
// 0046e3d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e3d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e3d6  50                   push eax
// 0046e3d7  ffd1                 call ecx
// 0046e3d9  83c410               add esp, 0x10
// 0046e3dc  c20400               ret 4
// 0046e3df  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e3e2  52                   push edx
// 0046e3e3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e3e9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipActive@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
