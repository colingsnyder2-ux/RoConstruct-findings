// roc 2011-06 0048a770  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a770
//
// 0048a770  837c240800           cmp dword ptr [esp + 8], 0
// 0048a775  6a00                 push 0
// 0048a777  7419                 je 0x48a792
// 0048a779  8b442408             mov eax, dword ptr [esp + 8]
// 0048a77d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a780  50                   push eax
// 0048a781  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a784  6873080000           push 0x873
// 0048a789  52                   push edx
// 0048a78a  ffd0                 call eax
// 0048a78c  83c410               add esp, 0x10
// 0048a78f  c20800               ret 8
// 0048a792  8b542408             mov edx, dword ptr [esp + 8]
// 0048a796  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a799  52                   push edx
// 0048a79a  6873080000           push 0x873
// 0048a79f  50                   push eax
// 0048a7a0  ff15c019a400         call dword ptr [0xa419c0]
// 0048a7a6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?HideSelection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
