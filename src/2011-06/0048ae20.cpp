// roc 2011-06 0048ae20  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ae20
//
// 0048ae20  837c240800           cmp dword ptr [esp + 8], 0
// 0048ae25  6a00                 push 0
// 0048ae27  7419                 je 0x48ae42
// 0048ae29  8b442408             mov eax, dword ptr [esp + 8]
// 0048ae2d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048ae30  50                   push eax
// 0048ae31  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048ae34  68a10f0000           push 0xfa1
// 0048ae39  52                   push edx
// 0048ae3a  ffd0                 call eax
// 0048ae3c  83c410               add esp, 0x10
// 0048ae3f  c20800               ret 8
// 0048ae42  8b542408             mov edx, dword ptr [esp + 8]
// 0048ae46  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048ae49  52                   push edx
// 0048ae4a  68a10f0000           push 0xfa1
// 0048ae4f  50                   push eax
// 0048ae50  ff15c019a400         call dword ptr [0xa419c0]
// 0048ae56  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetLexer@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
