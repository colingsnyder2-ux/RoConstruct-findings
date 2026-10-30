// roc 2007-03 00459640  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459640
//
// 00459640  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459645  741e                 je 0x459665
// 00459647  8b442408             mov eax, dword ptr [esp + 8]
// 0045964b  8b542404             mov edx, dword ptr [esp + 4]
// 0045964f  50                   push eax
// 00459650  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459653  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459656  52                   push edx
// 00459657  68d1070000           push 0x7d1
// 0045965c  50                   push eax
// 0045965d  ffd1                 call ecx
// 0045965f  83c410               add esp, 0x10
// 00459662  c20c00               ret 0xc
// 00459665  8b542408             mov edx, dword ptr [esp + 8]
// 00459669  8b442404             mov eax, dword ptr [esp + 4]
// 0045966d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459670  52                   push edx
// 00459671  50                   push eax
// 00459672  68d1070000           push 0x7d1
// 00459677  51                   push ecx
// 00459678  ff1550ee7700         call dword ptr [0x77ee50]
// 0045967e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AddText@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
