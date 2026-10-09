// roc 2011-06 0048aa70  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048aa70
//
// 0048aa70  837c240800           cmp dword ptr [esp + 8], 0
// 0048aa75  741b                 je 0x48aa92
// 0048aa77  8b442404             mov eax, dword ptr [esp + 4]
// 0048aa7b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048aa7e  50                   push eax
// 0048aa7f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048aa82  6a00                 push 0
// 0048aa84  6885080000           push 0x885
// 0048aa89  52                   push edx
// 0048aa8a  ffd0                 call eax
// 0048aa8c  83c410               add esp, 0x10
// 0048aa8f  c20800               ret 8
// 0048aa92  8b542404             mov edx, dword ptr [esp + 4]
// 0048aa96  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048aa99  52                   push edx
// 0048aa9a  6a00                 push 0
// 0048aa9c  6885080000           push 0x885
// 0048aaa1  50                   push eax
// 0048aaa2  ff15c019a400         call dword ptr [0xa419c0]
// 0048aaa8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetText@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
