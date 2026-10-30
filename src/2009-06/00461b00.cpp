// roc 2009-06 00461b00  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461b00
//
// 00461b00  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461b05  741e                 je 0x461b25
// 00461b07  8b442408             mov eax, dword ptr [esp + 8]
// 00461b0b  8b542404             mov edx, dword ptr [esp + 4]
// 00461b0f  50                   push eax
// 00461b10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461b13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461b16  52                   push edx
// 00461b17  6886080000           push 0x886
// 00461b1c  50                   push eax
// 00461b1d  ffd1                 call ecx
// 00461b1f  83c410               add esp, 0x10
// 00461b22  c20c00               ret 0xc
// 00461b25  8b542408             mov edx, dword ptr [esp + 8]
// 00461b29  8b442404             mov eax, dword ptr [esp + 4]
// 00461b2d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461b30  52                   push edx
// 00461b31  50                   push eax
// 00461b32  6886080000           push 0x886
// 00461b37  51                   push ecx
// 00461b38  ff1590ee8900         call dword ptr [0x89ee90]
// 00461b3e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetText@CScintillaCtrl@@QAEHHPADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
