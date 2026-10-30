// roc 2009-06 00461800  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461800
//
// 00461800  837c240800           cmp dword ptr [esp + 8], 0
// 00461805  741b                 je 0x461822
// 00461807  8b442404             mov eax, dword ptr [esp + 4]
// 0046180b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046180e  50                   push eax
// 0046180f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461812  6a00                 push 0
// 00461814  6874080000           push 0x874
// 00461819  52                   push edx
// 0046181a  ffd0                 call eax
// 0046181c  83c410               add esp, 0x10
// 0046181f  c20800               ret 8
// 00461822  8b542404             mov edx, dword ptr [esp + 4]
// 00461826  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461829  52                   push edx
// 0046182a  6a00                 push 0
// 0046182c  6874080000           push 0x874
// 00461831  50                   push eax
// 00461832  ff1590ee8900         call dword ptr [0x89ee90]
// 00461838  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointXFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
