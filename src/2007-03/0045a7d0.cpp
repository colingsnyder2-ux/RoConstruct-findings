// roc 2007-03 0045a7d0  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a7d0
//
// 0045a7d0  837c240800           cmp dword ptr [esp + 8], 0
// 0045a7d5  6a00                 push 0
// 0045a7d7  7419                 je 0x45a7f2
// 0045a7d9  8b442408             mov eax, dword ptr [esp + 8]
// 0045a7dd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a7e0  50                   push eax
// 0045a7e1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a7e4  68a10f0000           push 0xfa1
// 0045a7e9  52                   push edx
// 0045a7ea  ffd0                 call eax
// 0045a7ec  83c410               add esp, 0x10
// 0045a7ef  c20800               ret 8
// 0045a7f2  8b542408             mov edx, dword ptr [esp + 8]
// 0045a7f6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a7f9  52                   push edx
// 0045a7fa  68a10f0000           push 0xfa1
// 0045a7ff  50                   push eax
// 0045a800  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a806  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetLexer@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
