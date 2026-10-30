// roc 2007-03 00459f60  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459f60
//
// 00459f60  837c240400           cmp dword ptr [esp + 4], 0
// 00459f65  6a00                 push 0
// 00459f67  6a00                 push 0
// 00459f69  685f080000           push 0x85f
// 00459f6e  740f                 je 0x459f7f
// 00459f70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459f73  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459f76  50                   push eax
// 00459f77  ffd1                 call ecx
// 00459f79  83c410               add esp, 0x10
// 00459f7c  c20400               ret 4
// 00459f7f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00459f82  52                   push edx
// 00459f83  ff1550ee7700         call dword ptr [0x77ee50]
// 00459f89  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
