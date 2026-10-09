// roc 2011-06 0048aa40  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048aa40
//
// 0048aa40  837c240400           cmp dword ptr [esp + 4], 0
// 0048aa45  6a00                 push 0
// 0048aa47  6a00                 push 0
// 0048aa49  6884080000           push 0x884
// 0048aa4e  740f                 je 0x48aa5f
// 0048aa50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048aa53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048aa56  50                   push eax
// 0048aa57  ffd1                 call ecx
// 0048aa59  83c410               add esp, 0x10
// 0048aa5c  c20400               ret 4
// 0048aa5f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048aa62  52                   push edx
// 0048aa63  ff15c019a400         call dword ptr [0xa419c0]
// 0048aa69  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Clear@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
