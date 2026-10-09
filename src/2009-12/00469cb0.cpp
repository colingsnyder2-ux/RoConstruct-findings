// roc 2009-12 00469cb0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469cb0
//
// 00469cb0  837c240800           cmp dword ptr [esp + 8], 0
// 00469cb5  6a00                 push 0
// 00469cb7  7419                 je 0x469cd2
// 00469cb9  8b442408             mov eax, dword ptr [esp + 8]
// 00469cbd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00469cc0  50                   push eax
// 00469cc1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00469cc4  68fe070000           push 0x7fe
// 00469cc9  52                   push edx
// 00469cca  ffd0                 call eax
// 00469ccc  83c410               add esp, 0x10
// 00469ccf  c20800               ret 8
// 00469cd2  8b542408             mov edx, dword ptr [esp + 8]
// 00469cd6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00469cd9  52                   push edx
// 00469cda  68fe070000           push 0x7fe
// 00469cdf  50                   push eax
// 00469ce0  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469ce6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerGet@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
