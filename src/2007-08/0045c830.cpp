// roc 2007-08 0045c830  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c830
//
// 0045c830  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c835  741e                 je 0x45c855
// 0045c837  8b442408             mov eax, dword ptr [esp + 8]
// 0045c83b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c83f  50                   push eax
// 0045c840  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c843  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c846  52                   push edx
// 0045c847  6866080000           push 0x866
// 0045c84c  50                   push eax
// 0045c84d  ffd1                 call ecx
// 0045c84f  83c410               add esp, 0x10
// 0045c852  c20c00               ret 0xc
// 0045c855  8b542408             mov edx, dword ptr [esp + 8]
// 0045c859  8b442404             mov eax, dword ptr [esp + 4]
// 0045c85d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c860  52                   push edx
// 0045c861  50                   push eax
// 0045c862  6866080000           push 0x866
// 0045c867  51                   push ecx
// 0045c868  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c86e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FindTextA@CScintillaCtrl@@QAEJHPAUTextToFind@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
