// roc 2011-06 0048a0c0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a0c0
//
// 0048a0c0  837c240800           cmp dword ptr [esp + 8], 0
// 0048a0c5  6a00                 push 0
// 0048a0c7  7419                 je 0x48a0e2
// 0048a0c9  8b442408             mov eax, dword ptr [esp + 8]
// 0048a0cd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a0d0  50                   push eax
// 0048a0d1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a0d4  68fe070000           push 0x7fe
// 0048a0d9  52                   push edx
// 0048a0da  ffd0                 call eax
// 0048a0dc  83c410               add esp, 0x10
// 0048a0df  c20800               ret 8
// 0048a0e2  8b542408             mov edx, dword ptr [esp + 8]
// 0048a0e6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a0e9  52                   push edx
// 0048a0ea  68fe070000           push 0x7fe
// 0048a0ef  50                   push eax
// 0048a0f0  ff15c019a400         call dword ptr [0xa419c0]
// 0048a0f6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerGet@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
