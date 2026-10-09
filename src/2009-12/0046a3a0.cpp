// roc 2009-12 0046a3a0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a3a0
//
// 0046a3a0  837c240800           cmp dword ptr [esp + 8], 0
// 0046a3a5  741b                 je 0x46a3c2
// 0046a3a7  8b442404             mov eax, dword ptr [esp + 4]
// 0046a3ab  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a3ae  50                   push eax
// 0046a3af  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a3b2  6a00                 push 0
// 0046a3b4  6874080000           push 0x874
// 0046a3b9  52                   push edx
// 0046a3ba  ffd0                 call eax
// 0046a3bc  83c410               add esp, 0x10
// 0046a3bf  c20800               ret 8
// 0046a3c2  8b542404             mov edx, dword ptr [esp + 4]
// 0046a3c6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a3c9  52                   push edx
// 0046a3ca  6a00                 push 0
// 0046a3cc  6874080000           push 0x874
// 0046a3d1  50                   push eax
// 0046a3d2  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a3d8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointXFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
