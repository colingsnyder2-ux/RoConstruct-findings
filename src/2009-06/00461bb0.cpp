// roc 2009-06 00461bb0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461bb0
//
// 00461bb0  837c240400           cmp dword ptr [esp + 4], 0
// 00461bb5  6a00                 push 0
// 00461bb7  6a00                 push 0
// 00461bb9  688f080000           push 0x88f
// 00461bbe  740f                 je 0x461bcf
// 00461bc0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461bc3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461bc6  50                   push eax
// 00461bc7  ffd1                 call ecx
// 00461bc9  83c410               add esp, 0x10
// 00461bcc  c20400               ret 4
// 00461bcf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461bd2  52                   push edx
// 00461bd3  ff1590ee8900         call dword ptr [0x89ee90]
// 00461bd9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
