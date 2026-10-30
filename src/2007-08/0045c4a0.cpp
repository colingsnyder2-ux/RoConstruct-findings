// roc 2007-08 0045c4a0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c4a0
//
// 0045c4a0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c4a5  741e                 je 0x45c4c5
// 0045c4a7  8b442408             mov eax, dword ptr [esp + 8]
// 0045c4ab  8b542404             mov edx, dword ptr [esp + 4]
// 0045c4af  50                   push eax
// 0045c4b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c4b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c4b6  52                   push edx
// 0045c4b7  68c4080000           push 0x8c4
// 0045c4bc  50                   push eax
// 0045c4bd  ffd1                 call ecx
// 0045c4bf  83c410               add esp, 0x10
// 0045c4c2  c20c00               ret 0xc
// 0045c4c5  8b542408             mov edx, dword ptr [esp + 8]
// 0045c4c9  8b442404             mov eax, dword ptr [esp + 4]
// 0045c4cd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c4d0  52                   push edx
// 0045c4d1  50                   push eax
// 0045c4d2  68c4080000           push 0x8c4
// 0045c4d7  51                   push ecx
// 0045c4d8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c4de  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginMaskN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
