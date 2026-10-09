// roc 2011-06 0048a870  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a870
//
// 0048a870  837c240800           cmp dword ptr [esp + 8], 0
// 0048a875  741b                 je 0x48a892
// 0048a877  8b442404             mov eax, dword ptr [esp + 4]
// 0048a87b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a87e  50                   push eax
// 0048a87f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a882  6a00                 push 0
// 0048a884  687a080000           push 0x87a
// 0048a889  52                   push edx
// 0048a88a  ffd0                 call eax
// 0048a88c  83c410               add esp, 0x10
// 0048a88f  c20800               ret 8
// 0048a892  8b542404             mov edx, dword ptr [esp + 4]
// 0048a896  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a899  52                   push edx
// 0048a89a  6a00                 push 0
// 0048a89c  687a080000           push 0x87a
// 0048a8a1  50                   push eax
// 0048a8a2  ff15c019a400         call dword ptr [0xa419c0]
// 0048a8a8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ReplaceSel@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
