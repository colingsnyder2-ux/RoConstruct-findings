// roc 2009-06 004618c0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004618c0
//
// 004618c0  837c240800           cmp dword ptr [esp + 8], 0
// 004618c5  741b                 je 0x4618e2
// 004618c7  8b442404             mov eax, dword ptr [esp + 4]
// 004618cb  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004618ce  50                   push eax
// 004618cf  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004618d2  6a00                 push 0
// 004618d4  687a080000           push 0x87a
// 004618d9  52                   push edx
// 004618da  ffd0                 call eax
// 004618dc  83c410               add esp, 0x10
// 004618df  c20800               ret 8
// 004618e2  8b542404             mov edx, dword ptr [esp + 4]
// 004618e6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004618e9  52                   push edx
// 004618ea  6a00                 push 0
// 004618ec  687a080000           push 0x87a
// 004618f1  50                   push eax
// 004618f2  ff1590ee8900         call dword ptr [0x89ee90]
// 004618f8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ReplaceSel@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
