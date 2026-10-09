// roc 2011-06 0048a570  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a570
//
// 0048a570  837c240800           cmp dword ptr [esp + 8], 0
// 0048a575  6a00                 push 0
// 0048a577  7419                 je 0x48a592
// 0048a579  8b442408             mov eax, dword ptr [esp + 8]
// 0048a57d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a580  50                   push eax
// 0048a581  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a584  6851080000           push 0x851
// 0048a589  52                   push edx
// 0048a58a  ffd0                 call eax
// 0048a58c  83c410               add esp, 0x10
// 0048a58f  c20800               ret 8
// 0048a592  8b542408             mov edx, dword ptr [esp + 8]
// 0048a596  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a599  52                   push edx
// 0048a59a  6851080000           push 0x851
// 0048a59f  50                   push eax
// 0048a5a0  ff15c019a400         call dword ptr [0xa419c0]
// 0048a5a6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetColumn@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
