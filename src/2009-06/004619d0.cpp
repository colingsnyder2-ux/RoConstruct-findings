// roc 2009-06 004619d0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004619d0
//
// 004619d0  837c240400           cmp dword ptr [esp + 4], 0
// 004619d5  6a00                 push 0
// 004619d7  6a00                 push 0
// 004619d9  6880080000           push 0x880
// 004619de  740f                 je 0x4619ef
// 004619e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004619e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004619e6  50                   push eax
// 004619e7  ffd1                 call ecx
// 004619e9  83c410               add esp, 0x10
// 004619ec  c20400               ret 4
// 004619ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004619f2  52                   push edx
// 004619f3  ff1590ee8900         call dword ptr [0x89ee90]
// 004619f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Undo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
