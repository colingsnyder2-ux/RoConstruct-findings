// roc 2007-03 00459da0  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459da0
//
// 00459da0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459da5  741e                 je 0x459dc5
// 00459da7  8b442408             mov eax, dword ptr [esp + 8]
// 00459dab  8b542404             mov edx, dword ptr [esp + 4]
// 00459daf  50                   push eax
// 00459db0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459db3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459db6  52                   push edx
// 00459db7  6805080000           push 0x805
// 00459dbc  50                   push eax
// 00459dbd  ffd1                 call ecx
// 00459dbf  83c410               add esp, 0x10
// 00459dc2  c20c00               ret 0xc
// 00459dc5  8b542408             mov edx, dword ptr [esp + 8]
// 00459dc9  8b442404             mov eax, dword ptr [esp + 4]
// 00459dcd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459dd0  52                   push edx
// 00459dd1  50                   push eax
// 00459dd2  6805080000           push 0x805
// 00459dd7  51                   push ecx
// 00459dd8  ff1550ee7700         call dword ptr [0x77ee50]
// 00459dde  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBold@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
