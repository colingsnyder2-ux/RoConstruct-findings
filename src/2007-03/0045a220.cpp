// roc 2007-03 0045a220  unit: seg_00450000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a220
//
// 0045a220  837c240800           cmp dword ptr [esp + 8], 0
// 0045a225  741b                 je 0x45a242
// 0045a227  8b442404             mov eax, dword ptr [esp + 4]
// 0045a22b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a22e  50                   push eax
// 0045a22f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a232  6a00                 push 0
// 0045a234  687a080000           push 0x87a
// 0045a239  52                   push edx
// 0045a23a  ffd0                 call eax
// 0045a23c  83c410               add esp, 0x10
// 0045a23f  c20800               ret 8
// 0045a242  8b542404             mov edx, dword ptr [esp + 4]
// 0045a246  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a249  52                   push edx
// 0045a24a  6a00                 push 0
// 0045a24c  687a080000           push 0x87a
// 0045a251  50                   push eax
// 0045a252  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a258  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ReplaceSel@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
