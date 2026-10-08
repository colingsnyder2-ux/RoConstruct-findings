// roc 2007-03 00459bf0  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459bf0
//
// 00459bf0  837c240800           cmp dword ptr [esp + 8], 0
// 00459bf5  6a00                 push 0
// 00459bf7  7419                 je 0x459c12
// 00459bf9  8b442408             mov eax, dword ptr [esp + 8]
// 00459bfd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00459c00  50                   push eax
// 00459c01  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00459c04  68c3080000           push 0x8c3
// 00459c09  52                   push edx
// 00459c0a  ffd0                 call eax
// 00459c0c  83c410               add esp, 0x10
// 00459c0f  c20800               ret 8
// 00459c12  8b542408             mov edx, dword ptr [esp + 8]
// 00459c16  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00459c19  52                   push edx
// 00459c1a  68c3080000           push 0x8c3
// 00459c1f  50                   push eax
// 00459c20  ff1550ee7700         call dword ptr [0x77ee50]
// 00459c26  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetMarginWidthN@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
