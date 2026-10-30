// roc 2010-06 0046e160  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e160
//
// 0046e160  837c240800           cmp dword ptr [esp + 8], 0
// 0046e165  741b                 je 0x46e182
// 0046e167  8b442404             mov eax, dword ptr [esp + 4]
// 0046e16b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046e16e  50                   push eax
// 0046e16f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046e172  6a00                 push 0
// 0046e174  6885080000           push 0x885
// 0046e179  52                   push edx
// 0046e17a  ffd0                 call eax
// 0046e17c  83c410               add esp, 0x10
// 0046e17f  c20800               ret 8
// 0046e182  8b542404             mov edx, dword ptr [esp + 4]
// 0046e186  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046e189  52                   push edx
// 0046e18a  6a00                 push 0
// 0046e18c  6885080000           push 0x885
// 0046e191  50                   push eax
// 0046e192  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e198  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetText@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
