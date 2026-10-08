// roc 2008-06 00460620  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460620
//
// 00460620  837c240800           cmp dword ptr [esp + 8], 0
// 00460625  6a00                 push 0
// 00460627  7419                 je 0x460642
// 00460629  8b442408             mov eax, dword ptr [esp + 8]
// 0046062d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460630  50                   push eax
// 00460631  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460634  68c3080000           push 0x8c3
// 00460639  52                   push edx
// 0046063a  ffd0                 call eax
// 0046063c  83c410               add esp, 0x10
// 0046063f  c20800               ret 8
// 00460642  8b542408             mov edx, dword ptr [esp + 8]
// 00460646  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460649  52                   push edx
// 0046064a  68c3080000           push 0x8c3
// 0046064f  50                   push eax
// 00460650  ff15142e8000         call dword ptr [0x802e14]
// 00460656  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetMarginWidthN@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
