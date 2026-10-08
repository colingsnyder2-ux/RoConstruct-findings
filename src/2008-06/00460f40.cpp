// roc 2008-06 00460f40  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460f40
//
// 00460f40  837c240400           cmp dword ptr [esp + 4], 0
// 00460f45  6a00                 push 0
// 00460f47  6a00                 push 0
// 00460f49  688f080000           push 0x88f
// 00460f4e  740f                 je 0x460f5f
// 00460f50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460f53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460f56  50                   push eax
// 00460f57  ffd1                 call ecx
// 00460f59  83c410               add esp, 0x10
// 00460f5c  c20400               ret 4
// 00460f5f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460f62  52                   push edx
// 00460f63  ff15142e8000         call dword ptr [0x802e14]
// 00460f69  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
