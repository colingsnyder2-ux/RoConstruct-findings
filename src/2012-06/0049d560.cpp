// roc 2012-06 0049d560  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d560
//
// 0049d560  837c240800           cmp dword ptr [esp + 8], 0
// 0049d565  6a00                 push 0
// 0049d567  7419                 je 0x49d582
// 0049d569  8b442408             mov eax, dword ptr [esp + 8]
// 0049d56d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d570  50                   push eax
// 0049d571  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d574  6876080000           push 0x876
// 0049d579  52                   push edx
// 0049d57a  ffd0                 call eax
// 0049d57c  83c410               add esp, 0x10
// 0049d57f  c20800               ret 8
// 0049d582  8b542408             mov edx, dword ptr [esp + 8]
// 0049d586  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d589  52                   push edx
// 0049d58a  6876080000           push 0x876
// 0049d58f  50                   push eax
// 0049d590  ff15043cb200         call dword ptr [0xb23c04]
// 0049d596  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?LineFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
