// roc 2012-06 0049d680  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d680
//
// 0049d680  837c240400           cmp dword ptr [esp + 4], 0
// 0049d685  6a00                 push 0
// 0049d687  6a00                 push 0
// 0049d689  687f080000           push 0x87f
// 0049d68e  740f                 je 0x49d69f
// 0049d690  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d693  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d696  50                   push eax
// 0049d697  ffd1                 call ecx
// 0049d699  83c410               add esp, 0x10
// 0049d69c  c20400               ret 4
// 0049d69f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d6a2  52                   push edx
// 0049d6a3  ff15043cb200         call dword ptr [0xb23c04]
// 0049d6a9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?EmptyUndoBuffer@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
