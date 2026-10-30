// roc 2007-08 0045c460  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c460
//
// 0045c460  837c240800           cmp dword ptr [esp + 8], 0
// 0045c465  6a00                 push 0
// 0045c467  7419                 je 0x45c482
// 0045c469  8b442408             mov eax, dword ptr [esp + 8]
// 0045c46d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045c470  50                   push eax
// 0045c471  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045c474  68c3080000           push 0x8c3
// 0045c479  52                   push edx
// 0045c47a  ffd0                 call eax
// 0045c47c  83c410               add esp, 0x10
// 0045c47f  c20800               ret 8
// 0045c482  8b542408             mov edx, dword ptr [esp + 8]
// 0045c486  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045c489  52                   push edx
// 0045c48a  68c3080000           push 0x8c3
// 0045c48f  50                   push eax
// 0045c490  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c496  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetMarginWidthN@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
