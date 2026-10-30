// roc 2010-06 0046d380  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d380
//
// 0046d380  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d385  741e                 je 0x46d3a5
// 0046d387  8b442408             mov eax, dword ptr [esp + 8]
// 0046d38b  8b542404             mov edx, dword ptr [esp + 4]
// 0046d38f  50                   push eax
// 0046d390  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d393  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d396  52                   push edx
// 0046d397  68d1070000           push 0x7d1
// 0046d39c  50                   push eax
// 0046d39d  ffd1                 call ecx
// 0046d39f  83c410               add esp, 0x10
// 0046d3a2  c20c00               ret 0xc
// 0046d3a5  8b542408             mov edx, dword ptr [esp + 8]
// 0046d3a9  8b442404             mov eax, dword ptr [esp + 4]
// 0046d3ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d3b0  52                   push edx
// 0046d3b1  50                   push eax
// 0046d3b2  68d1070000           push 0x7d1
// 0046d3b7  51                   push ecx
// 0046d3b8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d3be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AddText@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
