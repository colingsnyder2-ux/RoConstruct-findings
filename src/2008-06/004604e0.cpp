// roc 2008-06 004604e0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004604e0
//
// 004604e0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004604e5  741e                 je 0x460505
// 004604e7  8b442408             mov eax, dword ptr [esp + 8]
// 004604eb  8b542404             mov edx, dword ptr [esp + 4]
// 004604ef  50                   push eax
// 004604f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004604f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004604f6  52                   push edx
// 004604f7  68ff070000           push 0x7ff
// 004604fc  50                   push eax
// 004604fd  ffd1                 call ecx
// 004604ff  83c410               add esp, 0x10
// 00460502  c20c00               ret 0xc
// 00460505  8b542408             mov edx, dword ptr [esp + 8]
// 00460509  8b442404             mov eax, dword ptr [esp + 4]
// 0046050d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460510  52                   push edx
// 00460511  50                   push eax
// 00460512  68ff070000           push 0x7ff
// 00460517  51                   push ecx
// 00460518  ff15142e8000         call dword ptr [0x802e14]
// 0046051e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerNext@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
