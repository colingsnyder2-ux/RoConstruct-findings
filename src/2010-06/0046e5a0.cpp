// roc 2010-06 0046e5a0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e5a0
//
// 0046e5a0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046e5a5  741e                 je 0x46e5c5
// 0046e5a7  8b442408             mov eax, dword ptr [esp + 8]
// 0046e5ab  8b542404             mov edx, dword ptr [esp + 4]
// 0046e5af  50                   push eax
// 0046e5b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e5b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e5b6  52                   push edx
// 0046e5b7  68a50f0000           push 0xfa5
// 0046e5bc  50                   push eax
// 0046e5bd  ffd1                 call ecx
// 0046e5bf  83c410               add esp, 0x10
// 0046e5c2  c20c00               ret 0xc
// 0046e5c5  8b542408             mov edx, dword ptr [esp + 8]
// 0046e5c9  8b442404             mov eax, dword ptr [esp + 4]
// 0046e5cd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046e5d0  52                   push edx
// 0046e5d1  50                   push eax
// 0046e5d2  68a50f0000           push 0xfa5
// 0046e5d7  51                   push ecx
// 0046e5d8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e5de  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetKeyWords@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
