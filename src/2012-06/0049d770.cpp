// roc 2012-06 0049d770  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d770
//
// 0049d770  837c240400           cmp dword ptr [esp + 4], 0
// 0049d775  6a00                 push 0
// 0049d777  6a00                 push 0
// 0049d779  6884080000           push 0x884
// 0049d77e  740f                 je 0x49d78f
// 0049d780  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d783  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d786  50                   push eax
// 0049d787  ffd1                 call ecx
// 0049d789  83c410               add esp, 0x10
// 0049d78c  c20400               ret 4
// 0049d78f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d792  52                   push edx
// 0049d793  ff15043cb200         call dword ptr [0xb23c04]
// 0049d799  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Clear@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
