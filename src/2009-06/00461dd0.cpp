// roc 2009-06 00461dd0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461dd0
//
// 00461dd0  837c240800           cmp dword ptr [esp + 8], 0
// 00461dd5  6a00                 push 0
// 00461dd7  7419                 je 0x461df2
// 00461dd9  8b442408             mov eax, dword ptr [esp + 8]
// 00461ddd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461de0  50                   push eax
// 00461de1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461de4  68d8080000           push 0x8d8
// 00461de9  52                   push edx
// 00461dea  ffd0                 call eax
// 00461dec  83c410               add esp, 0x10
// 00461def  c20800               ret 8
// 00461df2  8b542408             mov edx, dword ptr [esp + 8]
// 00461df6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461df9  52                   push edx
// 00461dfa  68d8080000           push 0x8d8
// 00461dff  50                   push eax
// 00461e00  ff1590ee8900         call dword ptr [0x89ee90]
// 00461e06  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMouseDwellTime@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
