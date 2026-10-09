// roc 2011-06 0048a1a0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a1a0
//
// 0048a1a0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a1a5  741e                 je 0x48a1c5
// 0048a1a7  8b442408             mov eax, dword ptr [esp + 8]
// 0048a1ab  8b542404             mov edx, dword ptr [esp + 4]
// 0048a1af  50                   push eax
// 0048a1b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a1b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a1b6  52                   push edx
// 0048a1b7  68c0080000           push 0x8c0
// 0048a1bc  50                   push eax
// 0048a1bd  ffd1                 call ecx
// 0048a1bf  83c410               add esp, 0x10
// 0048a1c2  c20c00               ret 0xc
// 0048a1c5  8b542408             mov edx, dword ptr [esp + 8]
// 0048a1c9  8b442404             mov eax, dword ptr [esp + 4]
// 0048a1cd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a1d0  52                   push edx
// 0048a1d1  50                   push eax
// 0048a1d2  68c0080000           push 0x8c0
// 0048a1d7  51                   push ecx
// 0048a1d8  ff15c019a400         call dword ptr [0xa419c0]
// 0048a1de  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginTypeN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
