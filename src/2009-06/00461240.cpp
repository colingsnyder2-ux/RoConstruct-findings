// roc 2009-06 00461240  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461240
//
// 00461240  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461245  741e                 je 0x461265
// 00461247  8b442408             mov eax, dword ptr [esp + 8]
// 0046124b  8b542404             mov edx, dword ptr [esp + 4]
// 0046124f  50                   push eax
// 00461250  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461253  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461256  52                   push edx
// 00461257  68c2080000           push 0x8c2
// 0046125c  50                   push eax
// 0046125d  ffd1                 call ecx
// 0046125f  83c410               add esp, 0x10
// 00461262  c20c00               ret 0xc
// 00461265  8b542408             mov edx, dword ptr [esp + 8]
// 00461269  8b442404             mov eax, dword ptr [esp + 4]
// 0046126d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461270  52                   push edx
// 00461271  50                   push eax
// 00461272  68c2080000           push 0x8c2
// 00461277  51                   push ecx
// 00461278  ff1590ee8900         call dword ptr [0x89ee90]
// 0046127e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginWidthN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
