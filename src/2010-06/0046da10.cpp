// roc 2010-06 0046da10  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046da10
//
// 0046da10  837c240400           cmp dword ptr [esp + 4], 0
// 0046da15  6a00                 push 0
// 0046da17  6a00                 push 0
// 0046da19  6802080000           push 0x802
// 0046da1e  740f                 je 0x46da2f
// 0046da20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046da23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046da26  50                   push eax
// 0046da27  ffd1                 call ecx
// 0046da29  83c410               add esp, 0x10
// 0046da2c  c20400               ret 4
// 0046da2f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046da32  52                   push edx
// 0046da33  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046da39  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
