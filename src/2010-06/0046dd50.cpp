// roc 2010-06 0046dd50  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dd50
//
// 0046dd50  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046dd55  741e                 je 0x46dd75
// 0046dd57  8b442408             mov eax, dword ptr [esp + 8]
// 0046dd5b  8b542404             mov edx, dword ptr [esp + 4]
// 0046dd5f  50                   push eax
// 0046dd60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046dd63  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046dd66  52                   push edx
// 0046dd67  6867080000           push 0x867
// 0046dd6c  50                   push eax
// 0046dd6d  ffd1                 call ecx
// 0046dd6f  83c410               add esp, 0x10
// 0046dd72  c20c00               ret 0xc
// 0046dd75  8b542408             mov edx, dword ptr [esp + 8]
// 0046dd79  8b442404             mov eax, dword ptr [esp + 4]
// 0046dd7d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046dd80  52                   push edx
// 0046dd81  50                   push eax
// 0046dd82  6867080000           push 0x867
// 0046dd87  51                   push ecx
// 0046dd88  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dd8e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FormatRange@CScintillaCtrl@@QAEJHPAURangeToFormat@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
