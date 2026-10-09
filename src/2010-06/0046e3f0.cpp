// roc 2010-06 0046e3f0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e3f0
//
// 0046e3f0  837c240800           cmp dword ptr [esp + 8], 0
// 0046e3f5  6a00                 push 0
// 0046e3f7  7419                 je 0x46e412
// 0046e3f9  8b442408             mov eax, dword ptr [esp + 8]
// 0046e3fd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046e400  50                   push eax
// 0046e401  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046e404  68af080000           push 0x8af
// 0046e409  52                   push edx
// 0046e40a  ffd0                 call eax
// 0046e40c  83c410               add esp, 0x10
// 0046e40f  c20800               ret 8
// 0046e412  8b542408             mov edx, dword ptr [esp + 8]
// 0046e416  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046e419  52                   push edx
// 0046e41a  68af080000           push 0x8af
// 0046e41f  50                   push eax
// 0046e420  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e426  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetFoldLevel@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
