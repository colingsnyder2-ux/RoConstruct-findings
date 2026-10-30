// roc 2011-06 0048a7f0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a7f0
//
// 0048a7f0  837c240800           cmp dword ptr [esp + 8], 0
// 0048a7f5  741b                 je 0x48a812
// 0048a7f7  8b442404             mov eax, dword ptr [esp + 4]
// 0048a7fb  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a7fe  50                   push eax
// 0048a7ff  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a802  6a00                 push 0
// 0048a804  6875080000           push 0x875
// 0048a809  52                   push edx
// 0048a80a  ffd0                 call eax
// 0048a80c  83c410               add esp, 0x10
// 0048a80f  c20800               ret 8
// 0048a812  8b542404             mov edx, dword ptr [esp + 4]
// 0048a816  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a819  52                   push edx
// 0048a81a  6a00                 push 0
// 0048a81c  6875080000           push 0x875
// 0048a821  50                   push eax
// 0048a822  ff15c019a400         call dword ptr [0xa419c0]
// 0048a828  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointYFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
