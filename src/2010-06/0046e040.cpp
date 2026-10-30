// roc 2010-06 0046e040  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e040
//
// 0046e040  837c240400           cmp dword ptr [esp + 4], 0
// 0046e045  6a00                 push 0
// 0046e047  6a00                 push 0
// 0046e049  687f080000           push 0x87f
// 0046e04e  740f                 je 0x46e05f
// 0046e050  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e053  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e056  50                   push eax
// 0046e057  ffd1                 call ecx
// 0046e059  83c410               add esp, 0x10
// 0046e05c  c20400               ret 4
// 0046e05f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e062  52                   push edx
// 0046e063  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e069  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?EmptyUndoBuffer@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
