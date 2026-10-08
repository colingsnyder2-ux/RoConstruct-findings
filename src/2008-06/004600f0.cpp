// roc 2008-06 004600f0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004600f0
//
// 004600f0  837c240400           cmp dword ptr [esp + 4], 0
// 004600f5  6a00                 push 0
// 004600f7  6a00                 push 0
// 004600f9  68d6070000           push 0x7d6
// 004600fe  740f                 je 0x46010f
// 00460100  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460103  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460106  50                   push eax
// 00460107  ffd1                 call ecx
// 00460109  83c410               add esp, 0x10
// 0046010c  c20400               ret 4
// 0046010f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460112  52                   push edx
// 00460113  ff15142e8000         call dword ptr [0x802e14]
// 00460119  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
