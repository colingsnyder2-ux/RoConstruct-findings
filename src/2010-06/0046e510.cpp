// roc 2010-06 0046e510  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e510
//
// 0046e510  837c240800           cmp dword ptr [esp + 8], 0
// 0046e515  6a00                 push 0
// 0046e517  7419                 je 0x46e532
// 0046e519  8b442408             mov eax, dword ptr [esp + 8]
// 0046e51d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046e520  50                   push eax
// 0046e521  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046e524  68a10f0000           push 0xfa1
// 0046e529  52                   push edx
// 0046e52a  ffd0                 call eax
// 0046e52c  83c410               add esp, 0x10
// 0046e52f  c20800               ret 8
// 0046e532  8b542408             mov edx, dword ptr [esp + 8]
// 0046e536  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046e539  52                   push edx
// 0046e53a  68a10f0000           push 0xfa1
// 0046e53f  50                   push eax
// 0046e540  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e546  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetLexer@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
