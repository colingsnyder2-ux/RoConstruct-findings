// roc 2010-06 0046dea0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dea0
//
// 0046dea0  837c240800           cmp dword ptr [esp + 8], 0
// 0046dea5  741b                 je 0x46dec2
// 0046dea7  8b442404             mov eax, dword ptr [esp + 4]
// 0046deab  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046deae  50                   push eax
// 0046deaf  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046deb2  6a00                 push 0
// 0046deb4  6874080000           push 0x874
// 0046deb9  52                   push edx
// 0046deba  ffd0                 call eax
// 0046debc  83c410               add esp, 0x10
// 0046debf  c20800               ret 8
// 0046dec2  8b542404             mov edx, dword ptr [esp + 4]
// 0046dec6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046dec9  52                   push edx
// 0046deca  6a00                 push 0
// 0046decc  6874080000           push 0x874
// 0046ded1  50                   push eax
// 0046ded2  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046ded8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointXFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
