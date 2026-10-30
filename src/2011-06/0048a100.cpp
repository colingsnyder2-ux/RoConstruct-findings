// roc 2011-06 0048a100  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a100
//
// 0048a100  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a105  741e                 je 0x48a125
// 0048a107  8b442408             mov eax, dword ptr [esp + 8]
// 0048a10b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a10f  50                   push eax
// 0048a110  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a113  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a116  52                   push edx
// 0048a117  68ff070000           push 0x7ff
// 0048a11c  50                   push eax
// 0048a11d  ffd1                 call ecx
// 0048a11f  83c410               add esp, 0x10
// 0048a122  c20c00               ret 0xc
// 0048a125  8b542408             mov edx, dword ptr [esp + 8]
// 0048a129  8b442404             mov eax, dword ptr [esp + 4]
// 0048a12d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a130  52                   push edx
// 0048a131  50                   push eax
// 0048a132  68ff070000           push 0x7ff
// 0048a137  51                   push ecx
// 0048a138  ff15c019a400         call dword ptr [0xa419c0]
// 0048a13e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerNext@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
