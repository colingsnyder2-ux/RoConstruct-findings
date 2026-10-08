// roc 2007-08 0045bf00  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045bf00
//
// 0045bf00  837c240400           cmp dword ptr [esp + 4], 0
// 0045bf05  6a00                 push 0
// 0045bf07  6a00                 push 0
// 0045bf09  68d4070000           push 0x7d4
// 0045bf0e  740f                 je 0x45bf1f
// 0045bf10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045bf13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045bf16  50                   push eax
// 0045bf17  ffd1                 call ecx
// 0045bf19  83c410               add esp, 0x10
// 0045bf1c  c20400               ret 4
// 0045bf1f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045bf22  52                   push edx
// 0045bf23  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045bf29  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
