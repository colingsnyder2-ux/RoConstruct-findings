// roc 2010-06 0046dfe0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dfe0
//
// 0046dfe0  837c240400           cmp dword ptr [esp + 4], 0
// 0046dfe5  6a00                 push 0
// 0046dfe7  6a00                 push 0
// 0046dfe9  687d080000           push 0x87d
// 0046dfee  740f                 je 0x46dfff
// 0046dff0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046dff3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046dff6  50                   push eax
// 0046dff7  ffd1                 call ecx
// 0046dff9  83c410               add esp, 0x10
// 0046dffc  c20400               ret 4
// 0046dfff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e002  52                   push edx
// 0046e003  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e009  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanPaste@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
