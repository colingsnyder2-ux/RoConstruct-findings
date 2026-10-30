// roc 2007-03 0045a260  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a260
//
// 0045a260  837c240800           cmp dword ptr [esp + 8], 0
// 0045a265  6a00                 push 0
// 0045a267  7419                 je 0x45a282
// 0045a269  8b442408             mov eax, dword ptr [esp + 8]
// 0045a26d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a270  50                   push eax
// 0045a271  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a274  687b080000           push 0x87b
// 0045a279  52                   push edx
// 0045a27a  ffd0                 call eax
// 0045a27c  83c410               add esp, 0x10
// 0045a27f  c20800               ret 8
// 0045a282  8b542408             mov edx, dword ptr [esp + 8]
// 0045a286  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a289  52                   push edx
// 0045a28a  687b080000           push 0x87b
// 0045a28f  50                   push eax
// 0045a290  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a296  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetReadOnly@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
