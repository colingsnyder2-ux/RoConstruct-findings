// roc 2007-08 0045c790  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c790
//
// 0045c790  837c240800           cmp dword ptr [esp + 8], 0
// 0045c795  6a00                 push 0
// 0045c797  7419                 je 0x45c7b2
// 0045c799  8b442408             mov eax, dword ptr [esp + 8]
// 0045c79d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045c7a0  50                   push eax
// 0045c7a1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045c7a4  6851080000           push 0x851
// 0045c7a9  52                   push edx
// 0045c7aa  ffd0                 call eax
// 0045c7ac  83c410               add esp, 0x10
// 0045c7af  c20800               ret 8
// 0045c7b2  8b542408             mov edx, dword ptr [esp + 8]
// 0045c7b6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045c7b9  52                   push edx
// 0045c7ba  6851080000           push 0x851
// 0045c7bf  50                   push eax
// 0045c7c0  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c7c6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetColumn@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
