// roc 2010-06 0046dcd0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dcd0
//
// 0046dcd0  837c240400           cmp dword ptr [esp + 4], 0
// 0046dcd5  6a00                 push 0
// 0046dcd7  6a00                 push 0
// 0046dcd9  6861080000           push 0x861
// 0046dcde  740f                 je 0x46dcef
// 0046dce0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046dce3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046dce6  50                   push eax
// 0046dce7  ffd1                 call ecx
// 0046dce9  83c410               add esp, 0x10
// 0046dcec  c20400               ret 4
// 0046dcef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046dcf2  52                   push edx
// 0046dcf3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dcf9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
