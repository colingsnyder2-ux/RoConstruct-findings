// roc 2011-06 00489d70  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489d70
//
// 00489d70  837c240400           cmp dword ptr [esp + 4], 0
// 00489d75  6a00                 push 0
// 00489d77  6a00                 push 0
// 00489d79  68db070000           push 0x7db
// 00489d7e  740f                 je 0x489d8f
// 00489d80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489d83  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489d86  50                   push eax
// 00489d87  ffd1                 call ecx
// 00489d89  83c410               add esp, 0x10
// 00489d8c  c20400               ret 4
// 00489d8f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00489d92  52                   push edx
// 00489d93  ff15c019a400         call dword ptr [0xa419c0]
// 00489d99  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Redo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
