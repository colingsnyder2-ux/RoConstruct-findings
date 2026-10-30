// roc 2012-06 0049d5a0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d5a0
//
// 0049d5a0  837c240800           cmp dword ptr [esp + 8], 0
// 0049d5a5  741b                 je 0x49d5c2
// 0049d5a7  8b442404             mov eax, dword ptr [esp + 4]
// 0049d5ab  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d5ae  50                   push eax
// 0049d5af  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d5b2  6a00                 push 0
// 0049d5b4  687a080000           push 0x87a
// 0049d5b9  52                   push edx
// 0049d5ba  ffd0                 call eax
// 0049d5bc  83c410               add esp, 0x10
// 0049d5bf  c20800               ret 8
// 0049d5c2  8b542404             mov edx, dword ptr [esp + 4]
// 0049d5c6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d5c9  52                   push edx
// 0049d5ca  6a00                 push 0
// 0049d5cc  687a080000           push 0x87a
// 0049d5d1  50                   push eax
// 0049d5d2  ff15043cb200         call dword ptr [0xb23c04]
// 0049d5d8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ReplaceSel@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
