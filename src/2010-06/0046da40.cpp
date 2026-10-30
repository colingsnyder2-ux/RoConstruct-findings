// roc 2010-06 0046da40  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046da40
//
// 0046da40  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046da45  741e                 je 0x46da65
// 0046da47  8b442408             mov eax, dword ptr [esp + 8]
// 0046da4b  8b542404             mov edx, dword ptr [esp + 4]
// 0046da4f  50                   push eax
// 0046da50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046da53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046da56  52                   push edx
// 0046da57  6803080000           push 0x803
// 0046da5c  50                   push eax
// 0046da5d  ffd1                 call ecx
// 0046da5f  83c410               add esp, 0x10
// 0046da62  c20c00               ret 0xc
// 0046da65  8b542408             mov edx, dword ptr [esp + 8]
// 0046da69  8b442404             mov eax, dword ptr [esp + 4]
// 0046da6d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046da70  52                   push edx
// 0046da71  50                   push eax
// 0046da72  6803080000           push 0x803
// 0046da77  51                   push ecx
// 0046da78  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046da7e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
