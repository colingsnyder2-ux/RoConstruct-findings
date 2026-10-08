// roc 2007-08 0045c150  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c150
//
// 0045c150  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c155  741e                 je 0x45c175
// 0045c157  8b442408             mov eax, dword ptr [esp + 8]
// 0045c15b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c15f  50                   push eax
// 0045c160  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c163  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c166  52                   push edx
// 0045c167  68f8070000           push 0x7f8
// 0045c16c  50                   push eax
// 0045c16d  ffd1                 call ecx
// 0045c16f  83c410               add esp, 0x10
// 0045c172  c20c00               ret 0xc
// 0045c175  8b542408             mov edx, dword ptr [esp + 8]
// 0045c179  8b442404             mov eax, dword ptr [esp + 4]
// 0045c17d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c180  52                   push edx
// 0045c181  50                   push eax
// 0045c182  68f8070000           push 0x7f8
// 0045c187  51                   push ecx
// 0045c188  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c18e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDefine@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
