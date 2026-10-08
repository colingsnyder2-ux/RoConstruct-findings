// roc 2008-06 00460870  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460870
//
// 00460870  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460875  741e                 je 0x460895
// 00460877  8b442408             mov eax, dword ptr [esp + 8]
// 0046087b  8b542404             mov edx, dword ptr [esp + 4]
// 0046087f  50                   push eax
// 00460880  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460883  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460886  52                   push edx
// 00460887  6808080000           push 0x808
// 0046088c  50                   push eax
// 0046088d  ffd1                 call ecx
// 0046088f  83c410               add esp, 0x10
// 00460892  c20c00               ret 0xc
// 00460895  8b542408             mov edx, dword ptr [esp + 8]
// 00460899  8b442404             mov eax, dword ptr [esp + 4]
// 0046089d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004608a0  52                   push edx
// 004608a1  50                   push eax
// 004608a2  6808080000           push 0x808
// 004608a7  51                   push ecx
// 004608a8  ff15142e8000         call dword ptr [0x802e14]
// 004608ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFont@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
