// roc 2009-12 0046a250  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a250
//
// 0046a250  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046a255  741e                 je 0x46a275
// 0046a257  8b442408             mov eax, dword ptr [esp + 8]
// 0046a25b  8b542404             mov edx, dword ptr [esp + 4]
// 0046a25f  50                   push eax
// 0046a260  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a263  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a266  52                   push edx
// 0046a267  6867080000           push 0x867
// 0046a26c  50                   push eax
// 0046a26d  ffd1                 call ecx
// 0046a26f  83c410               add esp, 0x10
// 0046a272  c20c00               ret 0xc
// 0046a275  8b542408             mov edx, dword ptr [esp + 8]
// 0046a279  8b442404             mov eax, dword ptr [esp + 4]
// 0046a27d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a280  52                   push edx
// 0046a281  50                   push eax
// 0046a282  6867080000           push 0x867
// 0046a287  51                   push ecx
// 0046a288  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a28e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FormatRange@CScintillaCtrl@@QAEJHPAURangeToFormat@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
