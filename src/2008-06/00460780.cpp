// roc 2008-06 00460780  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460780
//
// 00460780  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460785  741e                 je 0x4607a5
// 00460787  8b442408             mov eax, dword ptr [esp + 8]
// 0046078b  8b542404             mov edx, dword ptr [esp + 4]
// 0046078f  50                   push eax
// 00460790  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460793  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460796  52                   push edx
// 00460797  6804080000           push 0x804
// 0046079c  50                   push eax
// 0046079d  ffd1                 call ecx
// 0046079f  83c410               add esp, 0x10
// 004607a2  c20c00               ret 0xc
// 004607a5  8b542408             mov edx, dword ptr [esp + 8]
// 004607a9  8b442404             mov eax, dword ptr [esp + 4]
// 004607ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004607b0  52                   push edx
// 004607b1  50                   push eax
// 004607b2  6804080000           push 0x804
// 004607b7  51                   push ecx
// 004607b8  ff15142e8000         call dword ptr [0x802e14]
// 004607be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
