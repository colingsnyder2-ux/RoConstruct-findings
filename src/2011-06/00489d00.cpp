// roc 2011-06 00489d00  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489d00
//
// 00489d00  837c240400           cmp dword ptr [esp + 4], 0
// 00489d05  6a00                 push 0
// 00489d07  6a00                 push 0
// 00489d09  68d8070000           push 0x7d8
// 00489d0e  740f                 je 0x489d1f
// 00489d10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489d13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489d16  50                   push eax
// 00489d17  ffd1                 call ecx
// 00489d19  83c410               add esp, 0x10
// 00489d1c  c20400               ret 4
// 00489d1f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00489d22  52                   push edx
// 00489d23  ff15c019a400         call dword ptr [0xa419c0]
// 00489d29  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetCurrentPos@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
