// roc 2009-06 004613f0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004613f0
//
// 004613f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004613f5  741e                 je 0x461415
// 004613f7  8b442408             mov eax, dword ptr [esp + 8]
// 004613fb  8b542404             mov edx, dword ptr [esp + 4]
// 004613ff  50                   push eax
// 00461400  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461403  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461406  52                   push edx
// 00461407  6804080000           push 0x804
// 0046140c  50                   push eax
// 0046140d  ffd1                 call ecx
// 0046140f  83c410               add esp, 0x10
// 00461412  c20c00               ret 0xc
// 00461415  8b542408             mov edx, dword ptr [esp + 8]
// 00461419  8b442404             mov eax, dword ptr [esp + 4]
// 0046141d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461420  52                   push edx
// 00461421  50                   push eax
// 00461422  6804080000           push 0x804
// 00461427  51                   push ecx
// 00461428  ff1590ee8900         call dword ptr [0x89ee90]
// 0046142e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
