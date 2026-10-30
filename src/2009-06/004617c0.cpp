// roc 2009-06 004617c0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004617c0
//
// 004617c0  837c240800           cmp dword ptr [esp + 8], 0
// 004617c5  6a00                 push 0
// 004617c7  7419                 je 0x4617e2
// 004617c9  8b442408             mov eax, dword ptr [esp + 8]
// 004617cd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004617d0  50                   push eax
// 004617d1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004617d4  6873080000           push 0x873
// 004617d9  52                   push edx
// 004617da  ffd0                 call eax
// 004617dc  83c410               add esp, 0x10
// 004617df  c20800               ret 8
// 004617e2  8b542408             mov edx, dword ptr [esp + 8]
// 004617e6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004617e9  52                   push edx
// 004617ea  6873080000           push 0x873
// 004617ef  50                   push eax
// 004617f0  ff1590ee8900         call dword ptr [0x89ee90]
// 004617f6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?HideSelection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
