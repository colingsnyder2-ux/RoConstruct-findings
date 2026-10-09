// roc 2011-06 0048a660  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a660
//
// 0048a660  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a665  741e                 je 0x48a685
// 0048a667  8b442408             mov eax, dword ptr [esp + 8]
// 0048a66b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a66f  50                   push eax
// 0048a670  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a673  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a676  52                   push edx
// 0048a677  6867080000           push 0x867
// 0048a67c  50                   push eax
// 0048a67d  ffd1                 call ecx
// 0048a67f  83c410               add esp, 0x10
// 0048a682  c20c00               ret 0xc
// 0048a685  8b542408             mov edx, dword ptr [esp + 8]
// 0048a689  8b442404             mov eax, dword ptr [esp + 4]
// 0048a68d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a690  52                   push edx
// 0048a691  50                   push eax
// 0048a692  6867080000           push 0x867
// 0048a697  51                   push ecx
// 0048a698  ff15c019a400         call dword ptr [0xa419c0]
// 0048a69e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FormatRange@CScintillaCtrl@@QAEJHPAURangeToFormat@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
