// roc 2008-06 00460df0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460df0
//
// 00460df0  837c240400           cmp dword ptr [esp + 4], 0
// 00460df5  6a00                 push 0
// 00460df7  6a00                 push 0
// 00460df9  6883080000           push 0x883
// 00460dfe  740f                 je 0x460e0f
// 00460e00  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460e03  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460e06  50                   push eax
// 00460e07  ffd1                 call ecx
// 00460e09  83c410               add esp, 0x10
// 00460e0c  c20400               ret 4
// 00460e0f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460e12  52                   push edx
// 00460e13  ff15142e8000         call dword ptr [0x802e14]
// 00460e19  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Paste@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
