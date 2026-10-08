// roc 2007-08 0045c570  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c570
//
// 0045c570  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c575  741e                 je 0x45c595
// 0045c577  8b442408             mov eax, dword ptr [esp + 8]
// 0045c57b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c57f  50                   push eax
// 0045c580  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c583  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c586  52                   push edx
// 0045c587  6803080000           push 0x803
// 0045c58c  50                   push eax
// 0045c58d  ffd1                 call ecx
// 0045c58f  83c410               add esp, 0x10
// 0045c592  c20c00               ret 0xc
// 0045c595  8b542408             mov edx, dword ptr [esp + 8]
// 0045c599  8b442404             mov eax, dword ptr [esp + 4]
// 0045c59d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c5a0  52                   push edx
// 0045c5a1  50                   push eax
// 0045c5a2  6803080000           push 0x803
// 0045c5a7  51                   push ecx
// 0045c5a8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c5ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
