// roc 2010-06 0046d5e0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d5e0
//
// 0046d5e0  837c240800           cmp dword ptr [esp + 8], 0
// 0046d5e5  6a00                 push 0
// 0046d5e7  7419                 je 0x46d602
// 0046d5e9  8b442408             mov eax, dword ptr [esp + 8]
// 0046d5ed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046d5f0  50                   push eax
// 0046d5f1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046d5f4  68e9070000           push 0x7e9
// 0046d5f9  52                   push edx
// 0046d5fa  ffd0                 call eax
// 0046d5fc  83c410               add esp, 0x10
// 0046d5ff  c20800               ret 8
// 0046d602  8b542408             mov edx, dword ptr [esp + 8]
// 0046d606  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046d609  52                   push edx
// 0046d60a  68e9070000           push 0x7e9
// 0046d60f  50                   push eax
// 0046d610  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d616  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoPos@CScintillaCtrl@@QAEXJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
