// roc 2009-06 004612d0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004612d0
//
// 004612d0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004612d5  741e                 je 0x4612f5
// 004612d7  8b442408             mov eax, dword ptr [esp + 8]
// 004612db  8b542404             mov edx, dword ptr [esp + 4]
// 004612df  50                   push eax
// 004612e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004612e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004612e6  52                   push edx
// 004612e7  68c4080000           push 0x8c4
// 004612ec  50                   push eax
// 004612ed  ffd1                 call ecx
// 004612ef  83c410               add esp, 0x10
// 004612f2  c20c00               ret 0xc
// 004612f5  8b542408             mov edx, dword ptr [esp + 8]
// 004612f9  8b442404             mov eax, dword ptr [esp + 4]
// 004612fd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461300  52                   push edx
// 00461301  50                   push eax
// 00461302  68c4080000           push 0x8c4
// 00461307  51                   push ecx
// 00461308  ff1590ee8900         call dword ptr [0x89ee90]
// 0046130e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginMaskN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
