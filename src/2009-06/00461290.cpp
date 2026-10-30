// roc 2009-06 00461290  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461290
//
// 00461290  837c240800           cmp dword ptr [esp + 8], 0
// 00461295  6a00                 push 0
// 00461297  7419                 je 0x4612b2
// 00461299  8b442408             mov eax, dword ptr [esp + 8]
// 0046129d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004612a0  50                   push eax
// 004612a1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004612a4  68c3080000           push 0x8c3
// 004612a9  52                   push edx
// 004612aa  ffd0                 call eax
// 004612ac  83c410               add esp, 0x10
// 004612af  c20800               ret 8
// 004612b2  8b542408             mov edx, dword ptr [esp + 8]
// 004612b6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004612b9  52                   push edx
// 004612ba  68c3080000           push 0x8c3
// 004612bf  50                   push eax
// 004612c0  ff1590ee8900         call dword ptr [0x89ee90]
// 004612c6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetMarginWidthN@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
