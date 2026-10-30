// roc 2009-12 0046a7b0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a7b0
//
// 0046a7b0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046a7b5  741e                 je 0x46a7d5
// 0046a7b7  8b442408             mov eax, dword ptr [esp + 8]
// 0046a7bb  8b542404             mov edx, dword ptr [esp + 4]
// 0046a7bf  50                   push eax
// 0046a7c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a7c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a7c6  52                   push edx
// 0046a7c7  6895080000           push 0x895
// 0046a7cc  50                   push eax
// 0046a7cd  ffd1                 call ecx
// 0046a7cf  83c410               add esp, 0x10
// 0046a7d2  c20c00               ret 0xc
// 0046a7d5  8b542408             mov edx, dword ptr [esp + 8]
// 0046a7d9  8b442404             mov eax, dword ptr [esp + 4]
// 0046a7dd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a7e0  52                   push edx
// 0046a7e1  50                   push eax
// 0046a7e2  6895080000           push 0x895
// 0046a7e7  51                   push ecx
// 0046a7e8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a7ee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SearchInTarget@CScintillaCtrl@@QAEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
