// roc 2011-06 0048a350  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a350
//
// 0048a350  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a355  741e                 je 0x48a375
// 0048a357  8b442408             mov eax, dword ptr [esp + 8]
// 0048a35b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a35f  50                   push eax
// 0048a360  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a363  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a366  52                   push edx
// 0048a367  6803080000           push 0x803
// 0048a36c  50                   push eax
// 0048a36d  ffd1                 call ecx
// 0048a36f  83c410               add esp, 0x10
// 0048a372  c20c00               ret 0xc
// 0048a375  8b542408             mov edx, dword ptr [esp + 8]
// 0048a379  8b442404             mov eax, dword ptr [esp + 4]
// 0048a37d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a380  52                   push edx
// 0048a381  50                   push eax
// 0048a382  6803080000           push 0x803
// 0048a387  51                   push ecx
// 0048a388  ff15c019a400         call dword ptr [0xa419c0]
// 0048a38e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
