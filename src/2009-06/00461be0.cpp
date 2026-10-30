// roc 2009-06 00461be0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461be0
//
// 00461be0  837c240400           cmp dword ptr [esp + 4], 0
// 00461be5  6a00                 push 0
// 00461be7  6a00                 push 0
// 00461be9  6891080000           push 0x891
// 00461bee  740f                 je 0x461bff
// 00461bf0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461bf3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461bf6  50                   push eax
// 00461bf7  ffd1                 call ecx
// 00461bf9  83c410               add esp, 0x10
// 00461bfc  c20400               ret 4
// 00461bff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461c02  52                   push edx
// 00461c03  ff1590ee8900         call dword ptr [0x89ee90]
// 00461c09  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
