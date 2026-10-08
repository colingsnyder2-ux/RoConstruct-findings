// roc 2009-06 004615c0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004615c0
//
// 004615c0  837c240800           cmp dword ptr [esp + 8], 0
// 004615c5  6a00                 push 0
// 004615c7  7419                 je 0x4615e2
// 004615c9  8b442408             mov eax, dword ptr [esp + 8]
// 004615cd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004615d0  50                   push eax
// 004615d1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004615d4  6851080000           push 0x851
// 004615d9  52                   push edx
// 004615da  ffd0                 call eax
// 004615dc  83c410               add esp, 0x10
// 004615df  c20800               ret 8
// 004615e2  8b542408             mov edx, dword ptr [esp + 8]
// 004615e6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004615e9  52                   push edx
// 004615ea  6851080000           push 0x851
// 004615ef  50                   push eax
// 004615f0  ff1590ee8900         call dword ptr [0x89ee90]
// 004615f6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetColumn@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
