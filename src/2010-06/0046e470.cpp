// roc 2010-06 0046e470  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e470
//
// 0046e470  837c240800           cmp dword ptr [esp + 8], 0
// 0046e475  6a00                 push 0
// 0046e477  7419                 je 0x46e492
// 0046e479  8b442408             mov eax, dword ptr [esp + 8]
// 0046e47d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046e480  50                   push eax
// 0046e481  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046e484  68d8080000           push 0x8d8
// 0046e489  52                   push edx
// 0046e48a  ffd0                 call eax
// 0046e48c  83c410               add esp, 0x10
// 0046e48f  c20800               ret 8
// 0046e492  8b542408             mov edx, dword ptr [esp + 8]
// 0046e496  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046e499  52                   push edx
// 0046e49a  68d8080000           push 0x8d8
// 0046e49f  50                   push eax
// 0046e4a0  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e4a6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMouseDwellTime@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
