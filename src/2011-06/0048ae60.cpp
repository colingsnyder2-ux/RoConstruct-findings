// roc 2011-06 0048ae60  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ae60
//
// 0048ae60  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048ae65  741e                 je 0x48ae85
// 0048ae67  8b442408             mov eax, dword ptr [esp + 8]
// 0048ae6b  8b542404             mov edx, dword ptr [esp + 4]
// 0048ae6f  50                   push eax
// 0048ae70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048ae73  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048ae76  52                   push edx
// 0048ae77  68a40f0000           push 0xfa4
// 0048ae7c  50                   push eax
// 0048ae7d  ffd1                 call ecx
// 0048ae7f  83c410               add esp, 0x10
// 0048ae82  c20c00               ret 0xc
// 0048ae85  8b542408             mov edx, dword ptr [esp + 8]
// 0048ae89  8b442404             mov eax, dword ptr [esp + 4]
// 0048ae8d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048ae90  52                   push edx
// 0048ae91  50                   push eax
// 0048ae92  68a40f0000           push 0xfa4
// 0048ae97  51                   push ecx
// 0048ae98  ff15c019a400         call dword ptr [0xa419c0]
// 0048ae9e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetProperty@CScintillaCtrl@@QAEXPBD0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
