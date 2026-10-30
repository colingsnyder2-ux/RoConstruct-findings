// roc 2009-06 00460e70  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460e70
//
// 00460e70  837c240400           cmp dword ptr [esp + 4], 0
// 00460e75  6a00                 push 0
// 00460e77  6a00                 push 0
// 00460e79  68dd070000           push 0x7dd
// 00460e7e  740f                 je 0x460e8f
// 00460e80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460e83  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460e86  50                   push eax
// 00460e87  ffd1                 call ecx
// 00460e89  83c410               add esp, 0x10
// 00460e8c  c20400               ret 4
// 00460e8f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460e92  52                   push edx
// 00460e93  ff1590ee8900         call dword ptr [0x89ee90]
// 00460e99  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SelectAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
