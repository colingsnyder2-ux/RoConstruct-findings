// roc 2007-03 00459a70  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459a70
//
// 00459a70  837c240800           cmp dword ptr [esp + 8], 0
// 00459a75  6a00                 push 0
// 00459a77  7419                 je 0x459a92
// 00459a79  8b442408             mov eax, dword ptr [esp + 8]
// 00459a7d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00459a80  50                   push eax
// 00459a81  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00459a84  68fe070000           push 0x7fe
// 00459a89  52                   push edx
// 00459a8a  ffd0                 call eax
// 00459a8c  83c410               add esp, 0x10
// 00459a8f  c20800               ret 8
// 00459a92  8b542408             mov edx, dword ptr [esp + 8]
// 00459a96  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00459a99  52                   push edx
// 00459a9a  68fe070000           push 0x7fe
// 00459a9f  50                   push eax
// 00459aa0  ff1550ee7700         call dword ptr [0x77ee50]
// 00459aa6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerGet@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
