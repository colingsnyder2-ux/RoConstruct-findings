// roc 2008-06 00460f70  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460f70
//
// 00460f70  837c240400           cmp dword ptr [esp + 4], 0
// 00460f75  6a00                 push 0
// 00460f77  6a00                 push 0
// 00460f79  6891080000           push 0x891
// 00460f7e  740f                 je 0x460f8f
// 00460f80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460f83  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460f86  50                   push eax
// 00460f87  ffd1                 call ecx
// 00460f89  83c410               add esp, 0x10
// 00460f8c  c20400               ret 4
// 00460f8f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460f92  52                   push edx
// 00460f93  ff15142e8000         call dword ptr [0x802e14]
// 00460f99  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
