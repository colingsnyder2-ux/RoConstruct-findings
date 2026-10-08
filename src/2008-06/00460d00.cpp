// roc 2008-06 00460d00  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460d00
//
// 00460d00  837c240400           cmp dword ptr [esp + 4], 0
// 00460d05  6a00                 push 0
// 00460d07  6a00                 push 0
// 00460d09  687e080000           push 0x87e
// 00460d0e  740f                 je 0x460d1f
// 00460d10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460d13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460d16  50                   push eax
// 00460d17  ffd1                 call ecx
// 00460d19  83c410               add esp, 0x10
// 00460d1c  c20400               ret 4
// 00460d1f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460d22  52                   push edx
// 00460d23  ff15142e8000         call dword ptr [0x802e14]
// 00460d29  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanUndo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
