// roc 2008-06 00460200  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460200
//
// 00460200  837c240400           cmp dword ptr [esp + 4], 0
// 00460205  6a00                 push 0
// 00460207  6a00                 push 0
// 00460209  68dd070000           push 0x7dd
// 0046020e  740f                 je 0x46021f
// 00460210  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460213  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460216  50                   push eax
// 00460217  ffd1                 call ecx
// 00460219  83c410               add esp, 0x10
// 0046021c  c20400               ret 4
// 0046021f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460222  52                   push edx
// 00460223  ff15142e8000         call dword ptr [0x802e14]
// 00460229  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SelectAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
