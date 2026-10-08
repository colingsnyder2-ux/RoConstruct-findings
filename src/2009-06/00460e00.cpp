// roc 2009-06 00460e00  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460e00
//
// 00460e00  837c240400           cmp dword ptr [esp + 4], 0
// 00460e05  6a00                 push 0
// 00460e07  6a00                 push 0
// 00460e09  68db070000           push 0x7db
// 00460e0e  740f                 je 0x460e1f
// 00460e10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460e13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460e16  50                   push eax
// 00460e17  ffd1                 call ecx
// 00460e19  83c410               add esp, 0x10
// 00460e1c  c20400               ret 4
// 00460e1f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460e22  52                   push edx
// 00460e23  ff1590ee8900         call dword ptr [0x89ee90]
// 00460e29  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Redo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
