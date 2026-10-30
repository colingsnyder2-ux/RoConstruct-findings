// roc 2007-03 0045a160  unit: seg_00450000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a160
//
// 0045a160  837c240800           cmp dword ptr [esp + 8], 0
// 0045a165  741b                 je 0x45a182
// 0045a167  8b442404             mov eax, dword ptr [esp + 4]
// 0045a16b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a16e  50                   push eax
// 0045a16f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a172  6a00                 push 0
// 0045a174  6874080000           push 0x874
// 0045a179  52                   push edx
// 0045a17a  ffd0                 call eax
// 0045a17c  83c410               add esp, 0x10
// 0045a17f  c20800               ret 8
// 0045a182  8b542404             mov edx, dword ptr [esp + 4]
// 0045a186  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a189  52                   push edx
// 0045a18a  6a00                 push 0
// 0045a18c  6874080000           push 0x874
// 0045a191  50                   push eax
// 0045a192  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a198  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointXFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
