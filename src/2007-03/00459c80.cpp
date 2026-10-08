// roc 2007-03 00459c80  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459c80
//
// 00459c80  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459c85  741e                 je 0x459ca5
// 00459c87  8b442408             mov eax, dword ptr [esp + 8]
// 00459c8b  8b542404             mov edx, dword ptr [esp + 4]
// 00459c8f  50                   push eax
// 00459c90  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459c93  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459c96  52                   push edx
// 00459c97  68c6080000           push 0x8c6
// 00459c9c  50                   push eax
// 00459c9d  ffd1                 call ecx
// 00459c9f  83c410               add esp, 0x10
// 00459ca2  c20c00               ret 0xc
// 00459ca5  8b542408             mov edx, dword ptr [esp + 8]
// 00459ca9  8b442404             mov eax, dword ptr [esp + 4]
// 00459cad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459cb0  52                   push edx
// 00459cb1  50                   push eax
// 00459cb2  68c6080000           push 0x8c6
// 00459cb7  51                   push ecx
// 00459cb8  ff1550ee7700         call dword ptr [0x77ee50]
// 00459cbe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginSensitiveN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
