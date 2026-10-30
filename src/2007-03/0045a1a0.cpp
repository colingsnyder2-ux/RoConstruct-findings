// roc 2007-03 0045a1a0  unit: seg_00450000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a1a0
//
// 0045a1a0  837c240800           cmp dword ptr [esp + 8], 0
// 0045a1a5  741b                 je 0x45a1c2
// 0045a1a7  8b442404             mov eax, dword ptr [esp + 4]
// 0045a1ab  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a1ae  50                   push eax
// 0045a1af  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a1b2  6a00                 push 0
// 0045a1b4  6875080000           push 0x875
// 0045a1b9  52                   push edx
// 0045a1ba  ffd0                 call eax
// 0045a1bc  83c410               add esp, 0x10
// 0045a1bf  c20800               ret 8
// 0045a1c2  8b542404             mov edx, dword ptr [esp + 4]
// 0045a1c6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a1c9  52                   push edx
// 0045a1ca  6a00                 push 0
// 0045a1cc  6875080000           push 0x875
// 0045a1d1  50                   push eax
// 0045a1d2  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a1d8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointYFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
