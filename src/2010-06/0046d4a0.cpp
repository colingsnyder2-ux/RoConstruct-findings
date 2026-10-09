// roc 2010-06 0046d4a0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d4a0
//
// 0046d4a0  837c240400           cmp dword ptr [esp + 4], 0
// 0046d4a5  6a00                 push 0
// 0046d4a7  6a00                 push 0
// 0046d4a9  68db070000           push 0x7db
// 0046d4ae  740f                 je 0x46d4bf
// 0046d4b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d4b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d4b6  50                   push eax
// 0046d4b7  ffd1                 call ecx
// 0046d4b9  83c410               add esp, 0x10
// 0046d4bc  c20400               ret 4
// 0046d4bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046d4c2  52                   push edx
// 0046d4c3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d4c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Redo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
