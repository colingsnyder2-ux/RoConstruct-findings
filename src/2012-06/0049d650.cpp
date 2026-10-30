// roc 2012-06 0049d650  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d650
//
// 0049d650  837c240400           cmp dword ptr [esp + 4], 0
// 0049d655  6a00                 push 0
// 0049d657  6a00                 push 0
// 0049d659  687e080000           push 0x87e
// 0049d65e  740f                 je 0x49d66f
// 0049d660  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d663  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d666  50                   push eax
// 0049d667  ffd1                 call ecx
// 0049d669  83c410               add esp, 0x10
// 0049d66c  c20400               ret 4
// 0049d66f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d672  52                   push edx
// 0049d673  ff15043cb200         call dword ptr [0xb23c04]
// 0049d679  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanUndo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
