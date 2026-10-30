// roc 2009-06 00460d90  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460d90
//
// 00460d90  837c240400           cmp dword ptr [esp + 4], 0
// 00460d95  6a00                 push 0
// 00460d97  6a00                 push 0
// 00460d99  68d8070000           push 0x7d8
// 00460d9e  740f                 je 0x460daf
// 00460da0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460da3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460da6  50                   push eax
// 00460da7  ffd1                 call ecx
// 00460da9  83c410               add esp, 0x10
// 00460dac  c20400               ret 4
// 00460daf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460db2  52                   push edx
// 00460db3  ff1590ee8900         call dword ptr [0x89ee90]
// 00460db9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetCurrentPos@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
