// roc 2009-12 0046a4a0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a4a0
//
// 0046a4a0  837c240800           cmp dword ptr [esp + 8], 0
// 0046a4a5  6a00                 push 0
// 0046a4a7  7419                 je 0x46a4c2
// 0046a4a9  8b442408             mov eax, dword ptr [esp + 8]
// 0046a4ad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a4b0  50                   push eax
// 0046a4b1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a4b4  687b080000           push 0x87b
// 0046a4b9  52                   push edx
// 0046a4ba  ffd0                 call eax
// 0046a4bc  83c410               add esp, 0x10
// 0046a4bf  c20800               ret 8
// 0046a4c2  8b542408             mov edx, dword ptr [esp + 8]
// 0046a4c6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a4c9  52                   push edx
// 0046a4ca  687b080000           push 0x87b
// 0046a4cf  50                   push eax
// 0046a4d0  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a4d6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetReadOnly@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
