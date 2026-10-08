// roc 2007-08 0045c2e0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c2e0
//
// 0045c2e0  837c240800           cmp dword ptr [esp + 8], 0
// 0045c2e5  6a00                 push 0
// 0045c2e7  7419                 je 0x45c302
// 0045c2e9  8b442408             mov eax, dword ptr [esp + 8]
// 0045c2ed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045c2f0  50                   push eax
// 0045c2f1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045c2f4  68fe070000           push 0x7fe
// 0045c2f9  52                   push edx
// 0045c2fa  ffd0                 call eax
// 0045c2fc  83c410               add esp, 0x10
// 0045c2ff  c20800               ret 8
// 0045c302  8b542408             mov edx, dword ptr [esp + 8]
// 0045c306  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045c309  52                   push edx
// 0045c30a  68fe070000           push 0x7fe
// 0045c30f  50                   push eax
// 0045c310  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c316  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerGet@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
