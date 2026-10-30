// roc 2007-08 0045c700  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c700
//
// 0045c700  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c705  741e                 je 0x45c725
// 0045c707  8b442408             mov eax, dword ptr [esp + 8]
// 0045c70b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c70f  50                   push eax
// 0045c710  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c713  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c716  52                   push edx
// 0045c717  6834080000           push 0x834
// 0045c71c  50                   push eax
// 0045c71d  ffd1                 call ecx
// 0045c71f  83c410               add esp, 0x10
// 0045c722  c20c00               ret 0xc
// 0045c725  8b542408             mov edx, dword ptr [esp + 8]
// 0045c729  8b442404             mov eax, dword ptr [esp + 4]
// 0045c72d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c730  52                   push edx
// 0045c731  50                   push eax
// 0045c732  6834080000           push 0x834
// 0045c737  51                   push ecx
// 0045c738  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c73e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCShow@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
