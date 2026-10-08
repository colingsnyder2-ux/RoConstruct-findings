// roc 2008-06 00460ee0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460ee0
//
// 00460ee0  837c240400           cmp dword ptr [esp + 4], 0
// 00460ee5  6a00                 push 0
// 00460ee7  6a00                 push 0
// 00460ee9  6887080000           push 0x887
// 00460eee  740f                 je 0x460eff
// 00460ef0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460ef3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460ef6  50                   push eax
// 00460ef7  ffd1                 call ecx
// 00460ef9  83c410               add esp, 0x10
// 00460efc  c20400               ret 4
// 00460eff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460f02  52                   push edx
// 00460f03  ff15142e8000         call dword ptr [0x802e14]
// 00460f09  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
