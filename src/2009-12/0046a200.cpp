// roc 2009-12 0046a200  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a200
//
// 0046a200  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046a205  741e                 je 0x46a225
// 0046a207  8b442408             mov eax, dword ptr [esp + 8]
// 0046a20b  8b542404             mov edx, dword ptr [esp + 4]
// 0046a20f  50                   push eax
// 0046a210  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a213  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a216  52                   push edx
// 0046a217  6866080000           push 0x866
// 0046a21c  50                   push eax
// 0046a21d  ffd1                 call ecx
// 0046a21f  83c410               add esp, 0x10
// 0046a222  c20c00               ret 0xc
// 0046a225  8b542408             mov edx, dword ptr [esp + 8]
// 0046a229  8b442404             mov eax, dword ptr [esp + 4]
// 0046a22d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a230  52                   push edx
// 0046a231  50                   push eax
// 0046a232  6866080000           push 0x866
// 0046a237  51                   push ecx
// 0046a238  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a23e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FindTextA@CScintillaCtrl@@QAEJHPAUTextToFind@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
