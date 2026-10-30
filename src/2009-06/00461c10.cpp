// roc 2009-06 00461c10  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461c10
//
// 00461c10  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461c15  741e                 je 0x461c35
// 00461c17  8b442408             mov eax, dword ptr [esp + 8]
// 00461c1b  8b542404             mov edx, dword ptr [esp + 4]
// 00461c1f  50                   push eax
// 00461c20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461c23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461c26  52                   push edx
// 00461c27  6895080000           push 0x895
// 00461c2c  50                   push eax
// 00461c2d  ffd1                 call ecx
// 00461c2f  83c410               add esp, 0x10
// 00461c32  c20c00               ret 0xc
// 00461c35  8b542408             mov edx, dword ptr [esp + 8]
// 00461c39  8b442404             mov eax, dword ptr [esp + 4]
// 00461c3d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461c40  52                   push edx
// 00461c41  50                   push eax
// 00461c42  6895080000           push 0x895
// 00461c47  51                   push ecx
// 00461c48  ff1590ee8900         call dword ptr [0x89ee90]
// 00461c4e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SearchInTarget@CScintillaCtrl@@QAEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
