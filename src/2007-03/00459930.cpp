// roc 2007-03 00459930  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459930
//
// 00459930  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459935  741e                 je 0x459955
// 00459937  8b442408             mov eax, dword ptr [esp + 8]
// 0045993b  8b542404             mov edx, dword ptr [esp + 4]
// 0045993f  50                   push eax
// 00459940  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459943  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459946  52                   push edx
// 00459947  68f9070000           push 0x7f9
// 0045994c  50                   push eax
// 0045994d  ffd1                 call ecx
// 0045994f  83c410               add esp, 0x10
// 00459952  c20c00               ret 0xc
// 00459955  8b542408             mov edx, dword ptr [esp + 8]
// 00459959  8b442404             mov eax, dword ptr [esp + 4]
// 0045995d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459960  52                   push edx
// 00459961  50                   push eax
// 00459962  68f9070000           push 0x7f9
// 00459967  51                   push ecx
// 00459968  ff1550ee7700         call dword ptr [0x77ee50]
// 0045996e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
