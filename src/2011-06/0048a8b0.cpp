// roc 2011-06 0048a8b0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a8b0
//
// 0048a8b0  837c240800           cmp dword ptr [esp + 8], 0
// 0048a8b5  6a00                 push 0
// 0048a8b7  7419                 je 0x48a8d2
// 0048a8b9  8b442408             mov eax, dword ptr [esp + 8]
// 0048a8bd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a8c0  50                   push eax
// 0048a8c1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a8c4  687b080000           push 0x87b
// 0048a8c9  52                   push edx
// 0048a8ca  ffd0                 call eax
// 0048a8cc  83c410               add esp, 0x10
// 0048a8cf  c20800               ret 8
// 0048a8d2  8b542408             mov edx, dword ptr [esp + 8]
// 0048a8d6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a8d9  52                   push edx
// 0048a8da  687b080000           push 0x87b
// 0048a8df  50                   push eax
// 0048a8e0  ff15c019a400         call dword ptr [0xa419c0]
// 0048a8e6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetReadOnly@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
