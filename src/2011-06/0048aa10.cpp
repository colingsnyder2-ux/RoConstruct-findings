// roc 2011-06 0048aa10  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048aa10
//
// 0048aa10  837c240400           cmp dword ptr [esp + 4], 0
// 0048aa15  6a00                 push 0
// 0048aa17  6a00                 push 0
// 0048aa19  6883080000           push 0x883
// 0048aa1e  740f                 je 0x48aa2f
// 0048aa20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048aa23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048aa26  50                   push eax
// 0048aa27  ffd1                 call ecx
// 0048aa29  83c410               add esp, 0x10
// 0048aa2c  c20400               ret 4
// 0048aa2f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048aa32  52                   push edx
// 0048aa33  ff15c019a400         call dword ptr [0xa419c0]
// 0048aa39  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Paste@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
