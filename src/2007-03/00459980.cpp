// roc 2007-03 00459980  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459980
//
// 00459980  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459985  741e                 je 0x4599a5
// 00459987  8b442408             mov eax, dword ptr [esp + 8]
// 0045998b  8b542404             mov edx, dword ptr [esp + 4]
// 0045998f  50                   push eax
// 00459990  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459993  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459996  52                   push edx
// 00459997  68fa070000           push 0x7fa
// 0045999c  50                   push eax
// 0045999d  ffd1                 call ecx
// 0045999f  83c410               add esp, 0x10
// 004599a2  c20c00               ret 0xc
// 004599a5  8b542408             mov edx, dword ptr [esp + 8]
// 004599a9  8b442404             mov eax, dword ptr [esp + 4]
// 004599ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004599b0  52                   push edx
// 004599b1  50                   push eax
// 004599b2  68fa070000           push 0x7fa
// 004599b7  51                   push ecx
// 004599b8  ff1550ee7700         call dword ptr [0x77ee50]
// 004599be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
