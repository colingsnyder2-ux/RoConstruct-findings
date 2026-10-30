// roc 2009-06 00461a00  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461a00
//
// 00461a00  837c240400           cmp dword ptr [esp + 4], 0
// 00461a05  6a00                 push 0
// 00461a07  6a00                 push 0
// 00461a09  6881080000           push 0x881
// 00461a0e  740f                 je 0x461a1f
// 00461a10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461a13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461a16  50                   push eax
// 00461a17  ffd1                 call ecx
// 00461a19  83c410               add esp, 0x10
// 00461a1c  c20400               ret 4
// 00461a1f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461a22  52                   push edx
// 00461a23  ff1590ee8900         call dword ptr [0x89ee90]
// 00461a29  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cut@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
