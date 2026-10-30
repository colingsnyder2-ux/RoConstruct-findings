// roc 2009-06 00461320  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461320
//
// 00461320  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461325  741e                 je 0x461345
// 00461327  8b442408             mov eax, dword ptr [esp + 8]
// 0046132b  8b542404             mov edx, dword ptr [esp + 4]
// 0046132f  50                   push eax
// 00461330  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461333  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461336  52                   push edx
// 00461337  68c6080000           push 0x8c6
// 0046133c  50                   push eax
// 0046133d  ffd1                 call ecx
// 0046133f  83c410               add esp, 0x10
// 00461342  c20c00               ret 0xc
// 00461345  8b542408             mov edx, dword ptr [esp + 8]
// 00461349  8b442404             mov eax, dword ptr [esp + 4]
// 0046134d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461350  52                   push edx
// 00461351  50                   push eax
// 00461352  68c6080000           push 0x8c6
// 00461357  51                   push ecx
// 00461358  ff1590ee8900         call dword ptr [0x89ee90]
// 0046135e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginSensitiveN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
