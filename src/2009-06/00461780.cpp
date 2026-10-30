// roc 2009-06 00461780  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461780
//
// 00461780  837c240800           cmp dword ptr [esp + 8], 0
// 00461785  741b                 je 0x4617a2
// 00461787  8b442404             mov eax, dword ptr [esp + 4]
// 0046178b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046178e  50                   push eax
// 0046178f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461792  6a00                 push 0
// 00461794  6872080000           push 0x872
// 00461799  52                   push edx
// 0046179a  ffd0                 call eax
// 0046179c  83c410               add esp, 0x10
// 0046179f  c20800               ret 8
// 004617a2  8b542404             mov edx, dword ptr [esp + 4]
// 004617a6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004617a9  52                   push edx
// 004617aa  6a00                 push 0
// 004617ac  6872080000           push 0x872
// 004617b1  50                   push eax
// 004617b2  ff1590ee8900         call dword ptr [0x89ee90]
// 004617b8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextRange@CScintillaCtrl@@QAEHPAUTextRange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
