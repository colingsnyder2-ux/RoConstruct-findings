// roc 2007-03 0045a330  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a330
//
// 0045a330  837c240400           cmp dword ptr [esp + 4], 0
// 0045a335  6a00                 push 0
// 0045a337  6a00                 push 0
// 0045a339  6880080000           push 0x880
// 0045a33e  740f                 je 0x45a34f
// 0045a340  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a343  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a346  50                   push eax
// 0045a347  ffd1                 call ecx
// 0045a349  83c410               add esp, 0x10
// 0045a34c  c20400               ret 4
// 0045a34f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a352  52                   push edx
// 0045a353  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a359  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Undo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
