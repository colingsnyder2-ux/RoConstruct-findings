// roc 2011-06 00489ca0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489ca0
//
// 00489ca0  837c240400           cmp dword ptr [esp + 4], 0
// 00489ca5  6a00                 push 0
// 00489ca7  6a00                 push 0
// 00489ca9  68d4070000           push 0x7d4
// 00489cae  740f                 je 0x489cbf
// 00489cb0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489cb3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489cb6  50                   push eax
// 00489cb7  ffd1                 call ecx
// 00489cb9  83c410               add esp, 0x10
// 00489cbc  c20400               ret 4
// 00489cbf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00489cc2  52                   push edx
// 00489cc3  ff15c019a400         call dword ptr [0xa419c0]
// 00489cc9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
