// roc 2010-06 0046dfa0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dfa0
//
// 0046dfa0  837c240800           cmp dword ptr [esp + 8], 0
// 0046dfa5  6a00                 push 0
// 0046dfa7  7419                 je 0x46dfc2
// 0046dfa9  8b442408             mov eax, dword ptr [esp + 8]
// 0046dfad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046dfb0  50                   push eax
// 0046dfb1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046dfb4  687b080000           push 0x87b
// 0046dfb9  52                   push edx
// 0046dfba  ffd0                 call eax
// 0046dfbc  83c410               add esp, 0x10
// 0046dfbf  c20800               ret 8
// 0046dfc2  8b542408             mov edx, dword ptr [esp + 8]
// 0046dfc6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046dfc9  52                   push edx
// 0046dfca  687b080000           push 0x87b
// 0046dfcf  50                   push eax
// 0046dfd0  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dfd6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetReadOnly@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
