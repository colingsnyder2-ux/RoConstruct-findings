// roc 2007-08 0045cd50  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cd50
//
// 0045cd50  837c240400           cmp dword ptr [esp + 4], 0
// 0045cd55  6a00                 push 0
// 0045cd57  6a00                 push 0
// 0045cd59  688b080000           push 0x88b
// 0045cd5e  740f                 je 0x45cd6f
// 0045cd60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cd63  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cd66  50                   push eax
// 0045cd67  ffd1                 call ecx
// 0045cd69  83c410               add esp, 0x10
// 0045cd6c  c20400               ret 4
// 0045cd6f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cd72  52                   push edx
// 0045cd73  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cd79  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetOvertype@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
