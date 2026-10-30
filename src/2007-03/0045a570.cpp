// roc 2007-03 0045a570  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a570
//
// 0045a570  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045a575  741e                 je 0x45a595
// 0045a577  8b442408             mov eax, dword ptr [esp + 8]
// 0045a57b  8b542404             mov edx, dword ptr [esp + 4]
// 0045a57f  50                   push eax
// 0045a580  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a583  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a586  52                   push edx
// 0045a587  6895080000           push 0x895
// 0045a58c  50                   push eax
// 0045a58d  ffd1                 call ecx
// 0045a58f  83c410               add esp, 0x10
// 0045a592  c20c00               ret 0xc
// 0045a595  8b542408             mov edx, dword ptr [esp + 8]
// 0045a599  8b442404             mov eax, dword ptr [esp + 4]
// 0045a59d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045a5a0  52                   push edx
// 0045a5a1  50                   push eax
// 0045a5a2  6895080000           push 0x895
// 0045a5a7  51                   push ecx
// 0045a5a8  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a5ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SearchInTarget@CScintillaCtrl@@QAEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
