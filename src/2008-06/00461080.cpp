// roc 2008-06 00461080  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461080
//
// 00461080  837c240400           cmp dword ptr [esp + 4], 0
// 00461085  6a00                 push 0
// 00461087  6a00                 push 0
// 00461089  6899080000           push 0x899
// 0046108e  740f                 je 0x46109f
// 00461090  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461093  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461096  50                   push eax
// 00461097  ffd1                 call ecx
// 00461099  83c410               add esp, 0x10
// 0046109c  c20400               ret 4
// 0046109f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004610a2  52                   push edx
// 004610a3  ff15142e8000         call dword ptr [0x802e14]
// 004610a9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipCancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
