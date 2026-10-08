// roc 2009-06 004614e0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004614e0
//
// 004614e0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004614e5  741e                 je 0x461505
// 004614e7  8b442408             mov eax, dword ptr [esp + 8]
// 004614eb  8b542404             mov edx, dword ptr [esp + 4]
// 004614ef  50                   push eax
// 004614f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004614f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004614f6  52                   push edx
// 004614f7  6808080000           push 0x808
// 004614fc  50                   push eax
// 004614fd  ffd1                 call ecx
// 004614ff  83c410               add esp, 0x10
// 00461502  c20c00               ret 0xc
// 00461505  8b542408             mov edx, dword ptr [esp + 8]
// 00461509  8b442404             mov eax, dword ptr [esp + 4]
// 0046150d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461510  52                   push edx
// 00461511  50                   push eax
// 00461512  6808080000           push 0x808
// 00461517  51                   push ecx
// 00461518  ff1590ee8900         call dword ptr [0x89ee90]
// 0046151e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFont@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
