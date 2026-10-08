// roc 2008-06 00461030  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461030
//
// 00461030  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461035  741e                 je 0x461055
// 00461037  8b442408             mov eax, dword ptr [esp + 8]
// 0046103b  8b542404             mov edx, dword ptr [esp + 4]
// 0046103f  50                   push eax
// 00461040  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461043  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461046  52                   push edx
// 00461047  6898080000           push 0x898
// 0046104c  50                   push eax
// 0046104d  ffd1                 call ecx
// 0046104f  83c410               add esp, 0x10
// 00461052  c20c00               ret 0xc
// 00461055  8b542408             mov edx, dword ptr [esp + 8]
// 00461059  8b442404             mov eax, dword ptr [esp + 4]
// 0046105d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461060  52                   push edx
// 00461061  50                   push eax
// 00461062  6898080000           push 0x898
// 00461067  51                   push ecx
// 00461068  ff15142e8000         call dword ptr [0x802e14]
// 0046106e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipShow@CScintillaCtrl@@QAEXJPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
