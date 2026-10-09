// roc 2009-12 00469a40  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469a40
//
// 00469a40  837c240400           cmp dword ptr [esp + 4], 0
// 00469a45  6a00                 push 0
// 00469a47  6a00                 push 0
// 00469a49  68de070000           push 0x7de
// 00469a4e  740f                 je 0x469a5f
// 00469a50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469a53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469a56  50                   push eax
// 00469a57  ffd1                 call ecx
// 00469a59  83c410               add esp, 0x10
// 00469a5c  c20400               ret 4
// 00469a5f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00469a62  52                   push edx
// 00469a63  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469a69  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSavePoint@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
