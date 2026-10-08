// roc 2007-03 00459d00  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459d00
//
// 00459d00  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459d05  741e                 je 0x459d25
// 00459d07  8b442408             mov eax, dword ptr [esp + 8]
// 00459d0b  8b542404             mov edx, dword ptr [esp + 4]
// 00459d0f  50                   push eax
// 00459d10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459d13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459d16  52                   push edx
// 00459d17  6803080000           push 0x803
// 00459d1c  50                   push eax
// 00459d1d  ffd1                 call ecx
// 00459d1f  83c410               add esp, 0x10
// 00459d22  c20c00               ret 0xc
// 00459d25  8b542408             mov edx, dword ptr [esp + 8]
// 00459d29  8b442404             mov eax, dword ptr [esp + 4]
// 00459d2d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459d30  52                   push edx
// 00459d31  50                   push eax
// 00459d32  6803080000           push 0x803
// 00459d37  51                   push ecx
// 00459d38  ff1550ee7700         call dword ptr [0x77ee50]
// 00459d3e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
