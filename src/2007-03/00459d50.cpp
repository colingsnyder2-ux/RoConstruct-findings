// roc 2007-03 00459d50  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459d50
//
// 00459d50  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459d55  741e                 je 0x459d75
// 00459d57  8b442408             mov eax, dword ptr [esp + 8]
// 00459d5b  8b542404             mov edx, dword ptr [esp + 4]
// 00459d5f  50                   push eax
// 00459d60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459d63  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459d66  52                   push edx
// 00459d67  6804080000           push 0x804
// 00459d6c  50                   push eax
// 00459d6d  ffd1                 call ecx
// 00459d6f  83c410               add esp, 0x10
// 00459d72  c20c00               ret 0xc
// 00459d75  8b542408             mov edx, dword ptr [esp + 8]
// 00459d79  8b442404             mov eax, dword ptr [esp + 4]
// 00459d7d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459d80  52                   push edx
// 00459d81  50                   push eax
// 00459d82  6804080000           push 0x804
// 00459d87  51                   push ecx
// 00459d88  ff1550ee7700         call dword ptr [0x77ee50]
// 00459d8e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
