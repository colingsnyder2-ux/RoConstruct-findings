// roc 2008-06 00460e20  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460e20
//
// 00460e20  837c240400           cmp dword ptr [esp + 4], 0
// 00460e25  6a00                 push 0
// 00460e27  6a00                 push 0
// 00460e29  6884080000           push 0x884
// 00460e2e  740f                 je 0x460e3f
// 00460e30  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460e33  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460e36  50                   push eax
// 00460e37  ffd1                 call ecx
// 00460e39  83c410               add esp, 0x10
// 00460e3c  c20400               ret 4
// 00460e3f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460e42  52                   push edx
// 00460e43  ff15142e8000         call dword ptr [0x802e14]
// 00460e49  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Clear@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
