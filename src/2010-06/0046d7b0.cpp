// roc 2010-06 0046d7b0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d7b0
//
// 0046d7b0  837c240800           cmp dword ptr [esp + 8], 0
// 0046d7b5  6a00                 push 0
// 0046d7b7  7419                 je 0x46d7d2
// 0046d7b9  8b442408             mov eax, dword ptr [esp + 8]
// 0046d7bd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046d7c0  50                   push eax
// 0046d7c1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046d7c4  68fe070000           push 0x7fe
// 0046d7c9  52                   push edx
// 0046d7ca  ffd0                 call eax
// 0046d7cc  83c410               add esp, 0x10
// 0046d7cf  c20800               ret 8
// 0046d7d2  8b542408             mov edx, dword ptr [esp + 8]
// 0046d7d6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046d7d9  52                   push edx
// 0046d7da  68fe070000           push 0x7fe
// 0046d7df  50                   push eax
// 0046d7e0  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d7e6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerGet@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
