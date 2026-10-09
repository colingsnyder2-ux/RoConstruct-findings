// roc 2011-06 0048a5e0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a5e0
//
// 0048a5e0  837c240400           cmp dword ptr [esp + 4], 0
// 0048a5e5  6a00                 push 0
// 0048a5e7  6a00                 push 0
// 0048a5e9  6861080000           push 0x861
// 0048a5ee  740f                 je 0x48a5ff
// 0048a5f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a5f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a5f6  50                   push eax
// 0048a5f7  ffd1                 call ecx
// 0048a5f9  83c410               add esp, 0x10
// 0048a5fc  c20400               ret 4
// 0048a5ff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048a602  52                   push edx
// 0048a603  ff15c019a400         call dword ptr [0xa419c0]
// 0048a609  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
