// roc 2009-12 0046a3e0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a3e0
//
// 0046a3e0  837c240800           cmp dword ptr [esp + 8], 0
// 0046a3e5  741b                 je 0x46a402
// 0046a3e7  8b442404             mov eax, dword ptr [esp + 4]
// 0046a3eb  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a3ee  50                   push eax
// 0046a3ef  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a3f2  6a00                 push 0
// 0046a3f4  6875080000           push 0x875
// 0046a3f9  52                   push edx
// 0046a3fa  ffd0                 call eax
// 0046a3fc  83c410               add esp, 0x10
// 0046a3ff  c20800               ret 8
// 0046a402  8b542404             mov edx, dword ptr [esp + 4]
// 0046a406  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a409  52                   push edx
// 0046a40a  6a00                 push 0
// 0046a40c  6875080000           push 0x875
// 0046a411  50                   push eax
// 0046a412  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a418  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointYFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
