// roc 2007-03 0045a680  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a680
//
// 0045a680  837c240400           cmp dword ptr [esp + 4], 0
// 0045a685  6a00                 push 0
// 0045a687  6a00                 push 0
// 0045a689  689a080000           push 0x89a
// 0045a68e  740f                 je 0x45a69f
// 0045a690  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a693  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a696  50                   push eax
// 0045a697  ffd1                 call ecx
// 0045a699  83c410               add esp, 0x10
// 0045a69c  c20400               ret 4
// 0045a69f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a6a2  52                   push edx
// 0045a6a3  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a6a9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipActive@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
