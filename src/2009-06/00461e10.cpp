// roc 2009-06 00461e10  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461e10
//
// 00461e10  837c240400           cmp dword ptr [esp + 4], 0
// 00461e15  6a00                 push 0
// 00461e17  6a00                 push 0
// 00461e19  68ef080000           push 0x8ef
// 00461e1e  740f                 je 0x461e2f
// 00461e20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461e23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461e26  50                   push eax
// 00461e27  ffd1                 call ecx
// 00461e29  83c410               add esp, 0x10
// 00461e2c  c20400               ret 4
// 00461e2f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00461e32  52                   push edx
// 00461e33  ff1590ee8900         call dword ptr [0x89ee90]
// 00461e39  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?TargetFromSelection@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
