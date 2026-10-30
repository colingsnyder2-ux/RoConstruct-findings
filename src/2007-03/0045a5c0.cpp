// roc 2007-03 0045a5c0  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a5c0
//
// 0045a5c0  837c240800           cmp dword ptr [esp + 8], 0
// 0045a5c5  6a00                 push 0
// 0045a5c7  7419                 je 0x45a5e2
// 0045a5c9  8b442408             mov eax, dword ptr [esp + 8]
// 0045a5cd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a5d0  50                   push eax
// 0045a5d1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a5d4  6896080000           push 0x896
// 0045a5d9  52                   push edx
// 0045a5da  ffd0                 call eax
// 0045a5dc  83c410               add esp, 0x10
// 0045a5df  c20800               ret 8
// 0045a5e2  8b542408             mov edx, dword ptr [esp + 8]
// 0045a5e6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a5e9  52                   push edx
// 0045a5ea  6896080000           push 0x896
// 0045a5ef  50                   push eax
// 0045a5f0  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a5f6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSearchFlags@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
