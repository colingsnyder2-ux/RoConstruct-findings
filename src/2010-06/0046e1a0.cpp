// roc 2010-06 0046e1a0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e1a0
//
// 0046e1a0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046e1a5  741e                 je 0x46e1c5
// 0046e1a7  8b442408             mov eax, dword ptr [esp + 8]
// 0046e1ab  8b542404             mov edx, dword ptr [esp + 4]
// 0046e1af  50                   push eax
// 0046e1b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e1b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e1b6  52                   push edx
// 0046e1b7  6886080000           push 0x886
// 0046e1bc  50                   push eax
// 0046e1bd  ffd1                 call ecx
// 0046e1bf  83c410               add esp, 0x10
// 0046e1c2  c20c00               ret 0xc
// 0046e1c5  8b542408             mov edx, dword ptr [esp + 8]
// 0046e1c9  8b442404             mov eax, dword ptr [esp + 4]
// 0046e1cd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046e1d0  52                   push edx
// 0046e1d1  50                   push eax
// 0046e1d2  6886080000           push 0x886
// 0046e1d7  51                   push ecx
// 0046e1d8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e1de  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetText@CScintillaCtrl@@QAEHHPADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
