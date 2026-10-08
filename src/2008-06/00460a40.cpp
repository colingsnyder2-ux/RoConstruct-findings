// roc 2008-06 00460a40  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460a40
//
// 00460a40  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460a45  741e                 je 0x460a65
// 00460a47  8b442408             mov eax, dword ptr [esp + 8]
// 00460a4b  8b542404             mov edx, dword ptr [esp + 4]
// 00460a4f  50                   push eax
// 00460a50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460a53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460a56  52                   push edx
// 00460a57  6867080000           push 0x867
// 00460a5c  50                   push eax
// 00460a5d  ffd1                 call ecx
// 00460a5f  83c410               add esp, 0x10
// 00460a62  c20c00               ret 0xc
// 00460a65  8b542408             mov edx, dword ptr [esp + 8]
// 00460a69  8b442404             mov eax, dword ptr [esp + 4]
// 00460a6d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460a70  52                   push edx
// 00460a71  50                   push eax
// 00460a72  6867080000           push 0x867
// 00460a77  51                   push ecx
// 00460a78  ff15142e8000         call dword ptr [0x802e14]
// 00460a7e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FormatRange@CScintillaCtrl@@QAEJHPAURangeToFormat@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
