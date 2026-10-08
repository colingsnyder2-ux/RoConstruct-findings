// roc 2009-06 00461cf0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461cf0
//
// 00461cf0  837c240400           cmp dword ptr [esp + 4], 0
// 00461cf5  6a00                 push 0
// 00461cf7  6a00                 push 0
// 00461cf9  6899080000           push 0x899
// 00461cfe  740f                 je 0x461d0f
// 00461d00  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461d03  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461d06  50                   push eax
// 00461d07  ffd1                 call ecx
// 00461d09  83c410               add esp, 0x10
// 00461d0c  c20400               ret 4
// 00461d0f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461d12  52                   push edx
// 00461d13  ff1590ee8900         call dword ptr [0x89ee90]
// 00461d19  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipCancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
