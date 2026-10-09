// roc 2010-06 0046dda0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dda0
//
// 0046dda0  837c240400           cmp dword ptr [esp + 4], 0
// 0046dda5  6a00                 push 0
// 0046dda7  6a00                 push 0
// 0046dda9  686f080000           push 0x86f
// 0046ddae  740f                 je 0x46ddbf
// 0046ddb0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046ddb3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046ddb6  50                   push eax
// 0046ddb7  ffd1                 call ecx
// 0046ddb9  83c410               add esp, 0x10
// 0046ddbc  c20400               ret 4
// 0046ddbf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046ddc2  52                   push edx
// 0046ddc3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046ddc9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetModify@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
