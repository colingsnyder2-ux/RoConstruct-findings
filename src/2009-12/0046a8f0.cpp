// roc 2009-12 0046a8f0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a8f0
//
// 0046a8f0  837c240800           cmp dword ptr [esp + 8], 0
// 0046a8f5  6a00                 push 0
// 0046a8f7  7419                 je 0x46a912
// 0046a8f9  8b442408             mov eax, dword ptr [esp + 8]
// 0046a8fd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a900  50                   push eax
// 0046a901  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a904  68af080000           push 0x8af
// 0046a909  52                   push edx
// 0046a90a  ffd0                 call eax
// 0046a90c  83c410               add esp, 0x10
// 0046a90f  c20800               ret 8
// 0046a912  8b542408             mov edx, dword ptr [esp + 8]
// 0046a916  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a919  52                   push edx
// 0046a91a  68af080000           push 0x8af
// 0046a91f  50                   push eax
// 0046a920  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a926  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetFoldLevel@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
