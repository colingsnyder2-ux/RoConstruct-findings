// roc 2011-06 00489e40  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489e40
//
// 00489e40  837c240400           cmp dword ptr [esp + 4], 0
// 00489e45  6a00                 push 0
// 00489e47  6a00                 push 0
// 00489e49  68e0070000           push 0x7e0
// 00489e4e  740f                 je 0x489e5f
// 00489e50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489e53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489e56  50                   push eax
// 00489e57  ffd1                 call ecx
// 00489e59  83c410               add esp, 0x10
// 00489e5c  c20400               ret 4
// 00489e5f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00489e62  52                   push edx
// 00489e63  ff15c019a400         call dword ptr [0xa419c0]
// 00489e69  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanRedo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
