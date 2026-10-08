// roc 2007-08 0045cb10  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cb10
//
// 0045cb10  837c240400           cmp dword ptr [esp + 4], 0
// 0045cb15  6a00                 push 0
// 0045cb17  6a00                 push 0
// 0045cb19  687d080000           push 0x87d
// 0045cb1e  740f                 je 0x45cb2f
// 0045cb20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cb23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cb26  50                   push eax
// 0045cb27  ffd1                 call ecx
// 0045cb29  83c410               add esp, 0x10
// 0045cb2c  c20400               ret 4
// 0045cb2f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cb32  52                   push edx
// 0045cb33  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cb39  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanPaste@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
