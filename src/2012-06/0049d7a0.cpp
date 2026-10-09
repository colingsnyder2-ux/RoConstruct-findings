// roc 2012-06 0049d7a0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d7a0
//
// 0049d7a0  837c240800           cmp dword ptr [esp + 8], 0
// 0049d7a5  741b                 je 0x49d7c2
// 0049d7a7  8b442404             mov eax, dword ptr [esp + 4]
// 0049d7ab  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d7ae  50                   push eax
// 0049d7af  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d7b2  6a00                 push 0
// 0049d7b4  6885080000           push 0x885
// 0049d7b9  52                   push edx
// 0049d7ba  ffd0                 call eax
// 0049d7bc  83c410               add esp, 0x10
// 0049d7bf  c20800               ret 8
// 0049d7c2  8b542404             mov edx, dword ptr [esp + 4]
// 0049d7c6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d7c9  52                   push edx
// 0049d7ca  6a00                 push 0
// 0049d7cc  6885080000           push 0x885
// 0049d7d1  50                   push eax
// 0049d7d2  ff15043cb200         call dword ptr [0xb23c04]
// 0049d7d8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetText@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
