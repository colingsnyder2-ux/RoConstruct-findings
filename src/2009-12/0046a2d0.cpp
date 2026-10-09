// roc 2009-12 0046a2d0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a2d0
//
// 0046a2d0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046a2d5  741e                 je 0x46a2f5
// 0046a2d7  8b442408             mov eax, dword ptr [esp + 8]
// 0046a2db  8b542404             mov edx, dword ptr [esp + 4]
// 0046a2df  50                   push eax
// 0046a2e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a2e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a2e6  52                   push edx
// 0046a2e7  6870080000           push 0x870
// 0046a2ec  50                   push eax
// 0046a2ed  ffd1                 call ecx
// 0046a2ef  83c410               add esp, 0x10
// 0046a2f2  c20c00               ret 0xc
// 0046a2f5  8b542408             mov edx, dword ptr [esp + 8]
// 0046a2f9  8b442404             mov eax, dword ptr [esp + 4]
// 0046a2fd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a300  52                   push edx
// 0046a301  50                   push eax
// 0046a302  6870080000           push 0x870
// 0046a307  51                   push ecx
// 0046a308  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a30e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSel@CScintillaCtrl@@QAEXJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
