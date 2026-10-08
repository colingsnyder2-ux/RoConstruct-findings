// roc 2007-08 0045c410  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c410
//
// 0045c410  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c415  741e                 je 0x45c435
// 0045c417  8b442408             mov eax, dword ptr [esp + 8]
// 0045c41b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c41f  50                   push eax
// 0045c420  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c423  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c426  52                   push edx
// 0045c427  68c2080000           push 0x8c2
// 0045c42c  50                   push eax
// 0045c42d  ffd1                 call ecx
// 0045c42f  83c410               add esp, 0x10
// 0045c432  c20c00               ret 0xc
// 0045c435  8b542408             mov edx, dword ptr [esp + 8]
// 0045c439  8b442404             mov eax, dword ptr [esp + 4]
// 0045c43d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c440  52                   push edx
// 0045c441  50                   push eax
// 0045c442  68c2080000           push 0x8c2
// 0045c447  51                   push ecx
// 0045c448  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c44e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginWidthN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
