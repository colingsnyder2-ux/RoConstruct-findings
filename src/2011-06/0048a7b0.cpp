// roc 2011-06 0048a7b0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a7b0
//
// 0048a7b0  837c240800           cmp dword ptr [esp + 8], 0
// 0048a7b5  741b                 je 0x48a7d2
// 0048a7b7  8b442404             mov eax, dword ptr [esp + 4]
// 0048a7bb  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a7be  50                   push eax
// 0048a7bf  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a7c2  6a00                 push 0
// 0048a7c4  6874080000           push 0x874
// 0048a7c9  52                   push edx
// 0048a7ca  ffd0                 call eax
// 0048a7cc  83c410               add esp, 0x10
// 0048a7cf  c20800               ret 8
// 0048a7d2  8b542404             mov edx, dword ptr [esp + 4]
// 0048a7d6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a7d9  52                   push edx
// 0048a7da  6a00                 push 0
// 0048a7dc  6874080000           push 0x874
// 0048a7e1  50                   push eax
// 0048a7e2  ff15c019a400         call dword ptr [0xa419c0]
// 0048a7e8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointXFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
