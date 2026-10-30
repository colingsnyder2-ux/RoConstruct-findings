// roc 2010-06 0046e4e0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e4e0
//
// 0046e4e0  837c240400           cmp dword ptr [esp + 4], 0
// 0046e4e5  6a00                 push 0
// 0046e4e7  6a00                 push 0
// 0046e4e9  6815090000           push 0x915
// 0046e4ee  740f                 je 0x46e4ff
// 0046e4f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e4f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e4f6  50                   push eax
// 0046e4f7  ffd1                 call ecx
// 0046e4f9  83c410               add esp, 0x10
// 0046e4fc  c20400               ret 4
// 0046e4ff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e502  52                   push edx
// 0046e503  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e509  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
