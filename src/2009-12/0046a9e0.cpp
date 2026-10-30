// roc 2009-12 0046a9e0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a9e0
//
// 0046a9e0  837c240400           cmp dword ptr [esp + 4], 0
// 0046a9e5  6a00                 push 0
// 0046a9e7  6a00                 push 0
// 0046a9e9  6815090000           push 0x915
// 0046a9ee  740f                 je 0x46a9ff
// 0046a9f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a9f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a9f6  50                   push eax
// 0046a9f7  ffd1                 call ecx
// 0046a9f9  83c410               add esp, 0x10
// 0046a9fc  c20400               ret 4
// 0046a9ff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046aa02  52                   push edx
// 0046aa03  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046aa09  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
