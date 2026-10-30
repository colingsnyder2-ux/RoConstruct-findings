// roc 2007-03 00459b50  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459b50
//
// 00459b50  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459b55  741e                 je 0x459b75
// 00459b57  8b442408             mov eax, dword ptr [esp + 8]
// 00459b5b  8b542404             mov edx, dword ptr [esp + 4]
// 00459b5f  50                   push eax
// 00459b60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459b63  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459b66  52                   push edx
// 00459b67  68c0080000           push 0x8c0
// 00459b6c  50                   push eax
// 00459b6d  ffd1                 call ecx
// 00459b6f  83c410               add esp, 0x10
// 00459b72  c20c00               ret 0xc
// 00459b75  8b542408             mov edx, dword ptr [esp + 8]
// 00459b79  8b442404             mov eax, dword ptr [esp + 4]
// 00459b7d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459b80  52                   push edx
// 00459b81  50                   push eax
// 00459b82  68c0080000           push 0x8c0
// 00459b87  51                   push ecx
// 00459b88  ff1550ee7700         call dword ptr [0x77ee50]
// 00459b8e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginTypeN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
