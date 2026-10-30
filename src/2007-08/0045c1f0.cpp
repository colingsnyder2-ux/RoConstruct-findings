// roc 2007-08 0045c1f0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c1f0
//
// 0045c1f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c1f5  741e                 je 0x45c215
// 0045c1f7  8b442408             mov eax, dword ptr [esp + 8]
// 0045c1fb  8b542404             mov edx, dword ptr [esp + 4]
// 0045c1ff  50                   push eax
// 0045c200  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c203  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c206  52                   push edx
// 0045c207  68fa070000           push 0x7fa
// 0045c20c  50                   push eax
// 0045c20d  ffd1                 call ecx
// 0045c20f  83c410               add esp, 0x10
// 0045c212  c20c00               ret 0xc
// 0045c215  8b542408             mov edx, dword ptr [esp + 8]
// 0045c219  8b442404             mov eax, dword ptr [esp + 4]
// 0045c21d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c220  52                   push edx
// 0045c221  50                   push eax
// 0045c222  68fa070000           push 0x7fa
// 0045c227  51                   push ecx
// 0045c228  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c22e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
