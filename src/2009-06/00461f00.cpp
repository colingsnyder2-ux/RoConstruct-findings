// roc 2009-06 00461f00  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461f00
//
// 00461f00  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461f05  741e                 je 0x461f25
// 00461f07  8b442408             mov eax, dword ptr [esp + 8]
// 00461f0b  8b542404             mov edx, dword ptr [esp + 4]
// 00461f0f  50                   push eax
// 00461f10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461f13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461f16  52                   push edx
// 00461f17  68a50f0000           push 0xfa5
// 00461f1c  50                   push eax
// 00461f1d  ffd1                 call ecx
// 00461f1f  83c410               add esp, 0x10
// 00461f22  c20c00               ret 0xc
// 00461f25  8b542408             mov edx, dword ptr [esp + 8]
// 00461f29  8b442404             mov eax, dword ptr [esp + 4]
// 00461f2d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461f30  52                   push edx
// 00461f31  50                   push eax
// 00461f32  68a50f0000           push 0xfa5
// 00461f37  51                   push ecx
// 00461f38  ff1590ee8900         call dword ptr [0x89ee90]
// 00461f3e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetKeyWords@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
