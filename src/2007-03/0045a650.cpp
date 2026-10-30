// roc 2007-03 0045a650  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a650
//
// 0045a650  837c240400           cmp dword ptr [esp + 4], 0
// 0045a655  6a00                 push 0
// 0045a657  6a00                 push 0
// 0045a659  6899080000           push 0x899
// 0045a65e  740f                 je 0x45a66f
// 0045a660  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a663  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a666  50                   push eax
// 0045a667  ffd1                 call ecx
// 0045a669  83c410               add esp, 0x10
// 0045a66c  c20400               ret 4
// 0045a66f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a672  52                   push edx
// 0045a673  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a679  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipCancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
