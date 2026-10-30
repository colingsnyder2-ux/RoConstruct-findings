// roc 2009-06 00461840  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461840
//
// 00461840  837c240800           cmp dword ptr [esp + 8], 0
// 00461845  741b                 je 0x461862
// 00461847  8b442404             mov eax, dword ptr [esp + 4]
// 0046184b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046184e  50                   push eax
// 0046184f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461852  6a00                 push 0
// 00461854  6875080000           push 0x875
// 00461859  52                   push edx
// 0046185a  ffd0                 call eax
// 0046185c  83c410               add esp, 0x10
// 0046185f  c20800               ret 8
// 00461862  8b542404             mov edx, dword ptr [esp + 4]
// 00461866  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461869  52                   push edx
// 0046186a  6a00                 push 0
// 0046186c  6875080000           push 0x875
// 00461871  50                   push eax
// 00461872  ff1590ee8900         call dword ptr [0x89ee90]
// 00461878  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointYFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
