// roc 2008-06 00460700  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460700
//
// 00460700  837c240400           cmp dword ptr [esp + 4], 0
// 00460705  6a00                 push 0
// 00460707  6a00                 push 0
// 00460709  6802080000           push 0x802
// 0046070e  740f                 je 0x46071f
// 00460710  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460713  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460716  50                   push eax
// 00460717  ffd1                 call ecx
// 00460719  83c410               add esp, 0x10
// 0046071c  c20400               ret 4
// 0046071f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460722  52                   push edx
// 00460723  ff15142e8000         call dword ptr [0x802e14]
// 00460729  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
