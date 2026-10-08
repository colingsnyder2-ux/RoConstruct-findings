// roc 2008-06 00460a90  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460a90
//
// 00460a90  837c240400           cmp dword ptr [esp + 4], 0
// 00460a95  6a00                 push 0
// 00460a97  6a00                 push 0
// 00460a99  686f080000           push 0x86f
// 00460a9e  740f                 je 0x460aaf
// 00460aa0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460aa3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460aa6  50                   push eax
// 00460aa7  ffd1                 call ecx
// 00460aa9  83c410               add esp, 0x10
// 00460aac  c20400               ret 4
// 00460aaf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460ab2  52                   push edx
// 00460ab3  ff15142e8000         call dword ptr [0x802e14]
// 00460ab9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetModify@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
