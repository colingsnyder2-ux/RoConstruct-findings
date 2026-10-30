// roc 2009-06 004613a0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004613a0
//
// 004613a0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004613a5  741e                 je 0x4613c5
// 004613a7  8b442408             mov eax, dword ptr [esp + 8]
// 004613ab  8b542404             mov edx, dword ptr [esp + 4]
// 004613af  50                   push eax
// 004613b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004613b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004613b6  52                   push edx
// 004613b7  6803080000           push 0x803
// 004613bc  50                   push eax
// 004613bd  ffd1                 call ecx
// 004613bf  83c410               add esp, 0x10
// 004613c2  c20c00               ret 0xc
// 004613c5  8b542408             mov edx, dword ptr [esp + 8]
// 004613c9  8b442404             mov eax, dword ptr [esp + 4]
// 004613cd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004613d0  52                   push edx
// 004613d1  50                   push eax
// 004613d2  6803080000           push 0x803
// 004613d7  51                   push ecx
// 004613d8  ff1590ee8900         call dword ptr [0x89ee90]
// 004613de  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
