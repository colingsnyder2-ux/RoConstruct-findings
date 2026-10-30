// roc 2007-03 0045a120  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a120
//
// 0045a120  837c240800           cmp dword ptr [esp + 8], 0
// 0045a125  6a00                 push 0
// 0045a127  7419                 je 0x45a142
// 0045a129  8b442408             mov eax, dword ptr [esp + 8]
// 0045a12d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a130  50                   push eax
// 0045a131  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a134  6873080000           push 0x873
// 0045a139  52                   push edx
// 0045a13a  ffd0                 call eax
// 0045a13c  83c410               add esp, 0x10
// 0045a13f  c20800               ret 8
// 0045a142  8b542408             mov edx, dword ptr [esp + 8]
// 0045a146  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a149  52                   push edx
// 0045a14a  6873080000           push 0x873
// 0045a14f  50                   push eax
// 0045a150  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a156  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?HideSelection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
