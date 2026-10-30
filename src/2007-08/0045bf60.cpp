// roc 2007-08 0045bf60  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045bf60
//
// 0045bf60  837c240400           cmp dword ptr [esp + 4], 0
// 0045bf65  6a00                 push 0
// 0045bf67  6a00                 push 0
// 0045bf69  68d8070000           push 0x7d8
// 0045bf6e  740f                 je 0x45bf7f
// 0045bf70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045bf73  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045bf76  50                   push eax
// 0045bf77  ffd1                 call ecx
// 0045bf79  83c410               add esp, 0x10
// 0045bf7c  c20400               ret 4
// 0045bf7f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045bf82  52                   push edx
// 0045bf83  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045bf89  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetCurrentPos@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
