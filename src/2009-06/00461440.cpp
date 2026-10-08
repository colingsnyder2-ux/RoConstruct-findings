// roc 2009-06 00461440  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461440
//
// 00461440  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461445  741e                 je 0x461465
// 00461447  8b442408             mov eax, dword ptr [esp + 8]
// 0046144b  8b542404             mov edx, dword ptr [esp + 4]
// 0046144f  50                   push eax
// 00461450  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461453  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461456  52                   push edx
// 00461457  6805080000           push 0x805
// 0046145c  50                   push eax
// 0046145d  ffd1                 call ecx
// 0046145f  83c410               add esp, 0x10
// 00461462  c20c00               ret 0xc
// 00461465  8b542408             mov edx, dword ptr [esp + 8]
// 00461469  8b442404             mov eax, dword ptr [esp + 4]
// 0046146d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461470  52                   push edx
// 00461471  50                   push eax
// 00461472  6805080000           push 0x805
// 00461477  51                   push ecx
// 00461478  ff1590ee8900         call dword ptr [0x89ee90]
// 0046147e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBold@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
