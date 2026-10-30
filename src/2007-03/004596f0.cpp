// roc 2007-03 004596f0  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004596f0
//
// 004596f0  837c240400           cmp dword ptr [esp + 4], 0
// 004596f5  6a00                 push 0
// 004596f7  6a00                 push 0
// 004596f9  68d8070000           push 0x7d8
// 004596fe  740f                 je 0x45970f
// 00459700  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459703  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459706  50                   push eax
// 00459707  ffd1                 call ecx
// 00459709  83c410               add esp, 0x10
// 0045970c  c20400               ret 4
// 0045970f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00459712  52                   push edx
// 00459713  ff1550ee7700         call dword ptr [0x77ee50]
// 00459719  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetCurrentPos@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
