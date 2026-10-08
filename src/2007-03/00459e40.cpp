// roc 2007-03 00459e40  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459e40
//
// 00459e40  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459e45  741e                 je 0x459e65
// 00459e47  8b442408             mov eax, dword ptr [esp + 8]
// 00459e4b  8b542404             mov edx, dword ptr [esp + 4]
// 00459e4f  50                   push eax
// 00459e50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459e53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459e56  52                   push edx
// 00459e57  6808080000           push 0x808
// 00459e5c  50                   push eax
// 00459e5d  ffd1                 call ecx
// 00459e5f  83c410               add esp, 0x10
// 00459e62  c20c00               ret 0xc
// 00459e65  8b542408             mov edx, dword ptr [esp + 8]
// 00459e69  8b442404             mov eax, dword ptr [esp + 4]
// 00459e6d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459e70  52                   push edx
// 00459e71  50                   push eax
// 00459e72  6808080000           push 0x808
// 00459e77  51                   push ecx
// 00459e78  ff1550ee7700         call dword ptr [0x77ee50]
// 00459e7e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFont@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
