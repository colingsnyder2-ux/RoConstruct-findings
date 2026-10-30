// roc 2007-03 00459800  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459800
//
// 00459800  837c240400           cmp dword ptr [esp + 4], 0
// 00459805  6a00                 push 0
// 00459807  6a00                 push 0
// 00459809  68de070000           push 0x7de
// 0045980e  740f                 je 0x45981f
// 00459810  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459813  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459816  50                   push eax
// 00459817  ffd1                 call ecx
// 00459819  83c410               add esp, 0x10
// 0045981c  c20400               ret 4
// 0045981f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00459822  52                   push edx
// 00459823  ff1550ee7700         call dword ptr [0x77ee50]
// 00459829  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSavePoint@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
