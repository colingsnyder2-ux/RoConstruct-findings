// roc 2007-03 00459a20  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459a20
//
// 00459a20  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459a25  741e                 je 0x459a45
// 00459a27  8b442408             mov eax, dword ptr [esp + 8]
// 00459a2b  8b542404             mov edx, dword ptr [esp + 4]
// 00459a2f  50                   push eax
// 00459a30  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459a33  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459a36  52                   push edx
// 00459a37  68fc070000           push 0x7fc
// 00459a3c  50                   push eax
// 00459a3d  ffd1                 call ecx
// 00459a3f  83c410               add esp, 0x10
// 00459a42  c20c00               ret 0xc
// 00459a45  8b542408             mov edx, dword ptr [esp + 8]
// 00459a49  8b442404             mov eax, dword ptr [esp + 4]
// 00459a4d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459a50  52                   push edx
// 00459a51  50                   push eax
// 00459a52  68fc070000           push 0x7fc
// 00459a57  51                   push ecx
// 00459a58  ff1550ee7700         call dword ptr [0x77ee50]
// 00459a5e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDelete@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
