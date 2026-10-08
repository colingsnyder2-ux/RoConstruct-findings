// roc 2009-06 00460ed0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460ed0
//
// 00460ed0  837c240400           cmp dword ptr [esp + 4], 0
// 00460ed5  6a00                 push 0
// 00460ed7  6a00                 push 0
// 00460ed9  68e0070000           push 0x7e0
// 00460ede  740f                 je 0x460eef
// 00460ee0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460ee3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460ee6  50                   push eax
// 00460ee7  ffd1                 call ecx
// 00460ee9  83c410               add esp, 0x10
// 00460eec  c20400               ret 4
// 00460eef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460ef2  52                   push edx
// 00460ef3  ff1590ee8900         call dword ptr [0x89ee90]
// 00460ef9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanRedo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
