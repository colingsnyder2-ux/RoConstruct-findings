// roc 2007-03 00459c30  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459c30
//
// 00459c30  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459c35  741e                 je 0x459c55
// 00459c37  8b442408             mov eax, dword ptr [esp + 8]
// 00459c3b  8b542404             mov edx, dword ptr [esp + 4]
// 00459c3f  50                   push eax
// 00459c40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459c43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459c46  52                   push edx
// 00459c47  68c4080000           push 0x8c4
// 00459c4c  50                   push eax
// 00459c4d  ffd1                 call ecx
// 00459c4f  83c410               add esp, 0x10
// 00459c52  c20c00               ret 0xc
// 00459c55  8b542408             mov edx, dword ptr [esp + 8]
// 00459c59  8b442404             mov eax, dword ptr [esp + 4]
// 00459c5d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459c60  52                   push edx
// 00459c61  50                   push eax
// 00459c62  68c4080000           push 0x8c4
// 00459c67  51                   push ecx
// 00459c68  ff1550ee7700         call dword ptr [0x77ee50]
// 00459c6e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginMaskN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
