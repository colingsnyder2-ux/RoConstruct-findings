// roc 2010-06 0046e300  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e300
//
// 0046e300  837c240800           cmp dword ptr [esp + 8], 0
// 0046e305  6a00                 push 0
// 0046e307  7419                 je 0x46e322
// 0046e309  8b442408             mov eax, dword ptr [esp + 8]
// 0046e30d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046e310  50                   push eax
// 0046e311  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046e314  6896080000           push 0x896
// 0046e319  52                   push edx
// 0046e31a  ffd0                 call eax
// 0046e31c  83c410               add esp, 0x10
// 0046e31f  c20800               ret 8
// 0046e322  8b542408             mov edx, dword ptr [esp + 8]
// 0046e326  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046e329  52                   push edx
// 0046e32a  6896080000           push 0x896
// 0046e32f  50                   push eax
// 0046e330  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e336  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSearchFlags@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
