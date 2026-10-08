// roc 2009-06 00461020  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461020
//
// 00461020  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461025  741e                 je 0x461045
// 00461027  8b442408             mov eax, dword ptr [esp + 8]
// 0046102b  8b542404             mov edx, dword ptr [esp + 4]
// 0046102f  50                   push eax
// 00461030  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461033  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461036  52                   push edx
// 00461037  68fa070000           push 0x7fa
// 0046103c  50                   push eax
// 0046103d  ffd1                 call ecx
// 0046103f  83c410               add esp, 0x10
// 00461042  c20c00               ret 0xc
// 00461045  8b542408             mov edx, dword ptr [esp + 8]
// 00461049  8b442404             mov eax, dword ptr [esp + 4]
// 0046104d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461050  52                   push edx
// 00461051  50                   push eax
// 00461052  68fa070000           push 0x7fa
// 00461057  51                   push ecx
// 00461058  ff1590ee8900         call dword ptr [0x89ee90]
// 0046105e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
