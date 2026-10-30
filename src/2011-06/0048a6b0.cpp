// roc 2011-06 0048a6b0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a6b0
//
// 0048a6b0  837c240400           cmp dword ptr [esp + 4], 0
// 0048a6b5  6a00                 push 0
// 0048a6b7  6a00                 push 0
// 0048a6b9  686f080000           push 0x86f
// 0048a6be  740f                 je 0x48a6cf
// 0048a6c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a6c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a6c6  50                   push eax
// 0048a6c7  ffd1                 call ecx
// 0048a6c9  83c410               add esp, 0x10
// 0048a6cc  c20400               ret 4
// 0048a6cf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048a6d2  52                   push edx
// 0048a6d3  ff15c019a400         call dword ptr [0xa419c0]
// 0048a6d9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetModify@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
