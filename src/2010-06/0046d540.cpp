// roc 2010-06 0046d540  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d540
//
// 0046d540  837c240400           cmp dword ptr [esp + 4], 0
// 0046d545  6a00                 push 0
// 0046d547  6a00                 push 0
// 0046d549  68de070000           push 0x7de
// 0046d54e  740f                 je 0x46d55f
// 0046d550  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d553  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d556  50                   push eax
// 0046d557  ffd1                 call ecx
// 0046d559  83c410               add esp, 0x10
// 0046d55c  c20400               ret 4
// 0046d55f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046d562  52                   push edx
// 0046d563  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d569  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSavePoint@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
