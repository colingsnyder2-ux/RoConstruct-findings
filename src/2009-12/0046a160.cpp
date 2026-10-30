// roc 2009-12 0046a160  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a160
//
// 0046a160  837c240800           cmp dword ptr [esp + 8], 0
// 0046a165  6a00                 push 0
// 0046a167  7419                 je 0x46a182
// 0046a169  8b442408             mov eax, dword ptr [esp + 8]
// 0046a16d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a170  50                   push eax
// 0046a171  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a174  6851080000           push 0x851
// 0046a179  52                   push edx
// 0046a17a  ffd0                 call eax
// 0046a17c  83c410               add esp, 0x10
// 0046a17f  c20800               ret 8
// 0046a182  8b542408             mov edx, dword ptr [esp + 8]
// 0046a186  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a189  52                   push edx
// 0046a18a  6851080000           push 0x851
// 0046a18f  50                   push eax
// 0046a190  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a196  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetColumn@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
