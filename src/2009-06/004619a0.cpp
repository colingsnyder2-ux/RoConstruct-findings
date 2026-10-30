// roc 2009-06 004619a0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004619a0
//
// 004619a0  837c240400           cmp dword ptr [esp + 4], 0
// 004619a5  6a00                 push 0
// 004619a7  6a00                 push 0
// 004619a9  687f080000           push 0x87f
// 004619ae  740f                 je 0x4619bf
// 004619b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004619b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004619b6  50                   push eax
// 004619b7  ffd1                 call ecx
// 004619b9  83c410               add esp, 0x10
// 004619bc  c20400               ret 4
// 004619bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004619c2  52                   push edx
// 004619c3  ff1590ee8900         call dword ptr [0x89ee90]
// 004619c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?EmptyUndoBuffer@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
