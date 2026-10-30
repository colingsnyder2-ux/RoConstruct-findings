// roc 2007-03 0045a460  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a460
//
// 0045a460  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045a465  741e                 je 0x45a485
// 0045a467  8b442408             mov eax, dword ptr [esp + 8]
// 0045a46b  8b542404             mov edx, dword ptr [esp + 4]
// 0045a46f  50                   push eax
// 0045a470  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a473  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a476  52                   push edx
// 0045a477  6886080000           push 0x886
// 0045a47c  50                   push eax
// 0045a47d  ffd1                 call ecx
// 0045a47f  83c410               add esp, 0x10
// 0045a482  c20c00               ret 0xc
// 0045a485  8b542408             mov edx, dword ptr [esp + 8]
// 0045a489  8b442404             mov eax, dword ptr [esp + 4]
// 0045a48d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045a490  52                   push edx
// 0045a491  50                   push eax
// 0045a492  6886080000           push 0x886
// 0045a497  51                   push ecx
// 0045a498  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a49e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetText@CScintillaCtrl@@QAEHHPADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
