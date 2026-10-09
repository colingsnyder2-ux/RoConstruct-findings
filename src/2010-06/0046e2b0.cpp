// roc 2010-06 0046e2b0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e2b0
//
// 0046e2b0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046e2b5  741e                 je 0x46e2d5
// 0046e2b7  8b442408             mov eax, dword ptr [esp + 8]
// 0046e2bb  8b542404             mov edx, dword ptr [esp + 4]
// 0046e2bf  50                   push eax
// 0046e2c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e2c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e2c6  52                   push edx
// 0046e2c7  6895080000           push 0x895
// 0046e2cc  50                   push eax
// 0046e2cd  ffd1                 call ecx
// 0046e2cf  83c410               add esp, 0x10
// 0046e2d2  c20c00               ret 0xc
// 0046e2d5  8b542408             mov edx, dword ptr [esp + 8]
// 0046e2d9  8b442404             mov eax, dword ptr [esp + 4]
// 0046e2dd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046e2e0  52                   push edx
// 0046e2e1  50                   push eax
// 0046e2e2  6895080000           push 0x895
// 0046e2e7  51                   push ecx
// 0046e2e8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e2ee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SearchInTarget@CScintillaCtrl@@QAEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
