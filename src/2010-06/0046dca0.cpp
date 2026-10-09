// roc 2010-06 0046dca0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dca0
//
// 0046dca0  837c240400           cmp dword ptr [esp + 4], 0
// 0046dca5  6a00                 push 0
// 0046dca7  6a00                 push 0
// 0046dca9  685f080000           push 0x85f
// 0046dcae  740f                 je 0x46dcbf
// 0046dcb0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046dcb3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046dcb6  50                   push eax
// 0046dcb7  ffd1                 call ecx
// 0046dcb9  83c410               add esp, 0x10
// 0046dcbc  c20400               ret 4
// 0046dcbf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046dcc2  52                   push edx
// 0046dcc3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dcc9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
