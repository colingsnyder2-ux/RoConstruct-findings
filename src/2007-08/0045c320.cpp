// roc 2007-08 0045c320  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c320
//
// 0045c320  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c325  741e                 je 0x45c345
// 0045c327  8b442408             mov eax, dword ptr [esp + 8]
// 0045c32b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c32f  50                   push eax
// 0045c330  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c333  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c336  52                   push edx
// 0045c337  68ff070000           push 0x7ff
// 0045c33c  50                   push eax
// 0045c33d  ffd1                 call ecx
// 0045c33f  83c410               add esp, 0x10
// 0045c342  c20c00               ret 0xc
// 0045c345  8b542408             mov edx, dword ptr [esp + 8]
// 0045c349  8b442404             mov eax, dword ptr [esp + 4]
// 0045c34d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c350  52                   push edx
// 0045c351  50                   push eax
// 0045c352  68ff070000           push 0x7ff
// 0045c357  51                   push ecx
// 0045c358  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c35e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerNext@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
