// roc 2008-06 00460bd0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460bd0
//
// 00460bd0  837c240800           cmp dword ptr [esp + 8], 0
// 00460bd5  741b                 je 0x460bf2
// 00460bd7  8b442404             mov eax, dword ptr [esp + 4]
// 00460bdb  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460bde  50                   push eax
// 00460bdf  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460be2  6a00                 push 0
// 00460be4  6875080000           push 0x875
// 00460be9  52                   push edx
// 00460bea  ffd0                 call eax
// 00460bec  83c410               add esp, 0x10
// 00460bef  c20800               ret 8
// 00460bf2  8b542404             mov edx, dword ptr [esp + 4]
// 00460bf6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460bf9  52                   push edx
// 00460bfa  6a00                 push 0
// 00460bfc  6875080000           push 0x875
// 00460c01  50                   push eax
// 00460c02  ff15142e8000         call dword ptr [0x802e14]
// 00460c08  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointYFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
