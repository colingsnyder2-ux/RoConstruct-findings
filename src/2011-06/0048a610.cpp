// roc 2011-06 0048a610  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a610
//
// 0048a610  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a615  741e                 je 0x48a635
// 0048a617  8b442408             mov eax, dword ptr [esp + 8]
// 0048a61b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a61f  50                   push eax
// 0048a620  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a623  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a626  52                   push edx
// 0048a627  6866080000           push 0x866
// 0048a62c  50                   push eax
// 0048a62d  ffd1                 call ecx
// 0048a62f  83c410               add esp, 0x10
// 0048a632  c20c00               ret 0xc
// 0048a635  8b542408             mov edx, dword ptr [esp + 8]
// 0048a639  8b442404             mov eax, dword ptr [esp + 4]
// 0048a63d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a640  52                   push edx
// 0048a641  50                   push eax
// 0048a642  6866080000           push 0x866
// 0048a647  51                   push ecx
// 0048a648  ff15c019a400         call dword ptr [0xa419c0]
// 0048a64e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FindTextA@CScintillaCtrl@@QAEJHPAUTextToFind@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
