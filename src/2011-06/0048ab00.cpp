// roc 2011-06 0048ab00  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ab00
//
// 0048ab00  837c240400           cmp dword ptr [esp + 4], 0
// 0048ab05  6a00                 push 0
// 0048ab07  6a00                 push 0
// 0048ab09  6887080000           push 0x887
// 0048ab0e  740f                 je 0x48ab1f
// 0048ab10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048ab13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048ab16  50                   push eax
// 0048ab17  ffd1                 call ecx
// 0048ab19  83c410               add esp, 0x10
// 0048ab1c  c20400               ret 4
// 0048ab1f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048ab22  52                   push edx
// 0048ab23  ff15c019a400         call dword ptr [0xa419c0]
// 0048ab29  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
