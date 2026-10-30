// roc 2007-03 0045a010  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a010
//
// 0045a010  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045a015  741e                 je 0x45a035
// 0045a017  8b442408             mov eax, dword ptr [esp + 8]
// 0045a01b  8b542404             mov edx, dword ptr [esp + 4]
// 0045a01f  50                   push eax
// 0045a020  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a023  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a026  52                   push edx
// 0045a027  6867080000           push 0x867
// 0045a02c  50                   push eax
// 0045a02d  ffd1                 call ecx
// 0045a02f  83c410               add esp, 0x10
// 0045a032  c20c00               ret 0xc
// 0045a035  8b542408             mov edx, dword ptr [esp + 8]
// 0045a039  8b442404             mov eax, dword ptr [esp + 4]
// 0045a03d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045a040  52                   push edx
// 0045a041  50                   push eax
// 0045a042  6867080000           push 0x867
// 0045a047  51                   push ecx
// 0045a048  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a04e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FormatRange@CScintillaCtrl@@QAEJHPAURangeToFormat@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
