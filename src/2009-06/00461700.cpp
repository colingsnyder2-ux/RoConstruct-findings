// roc 2009-06 00461700  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461700
//
// 00461700  837c240400           cmp dword ptr [esp + 4], 0
// 00461705  6a00                 push 0
// 00461707  6a00                 push 0
// 00461709  686f080000           push 0x86f
// 0046170e  740f                 je 0x46171f
// 00461710  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461713  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461716  50                   push eax
// 00461717  ffd1                 call ecx
// 00461719  83c410               add esp, 0x10
// 0046171c  c20400               ret 4
// 0046171f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461722  52                   push edx
// 00461723  ff1590ee8900         call dword ptr [0x89ee90]
// 00461729  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetModify@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
