// roc 2009-06 004611f0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004611f0
//
// 004611f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004611f5  741e                 je 0x461215
// 004611f7  8b442408             mov eax, dword ptr [esp + 8]
// 004611fb  8b542404             mov edx, dword ptr [esp + 4]
// 004611ff  50                   push eax
// 00461200  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461203  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461206  52                   push edx
// 00461207  68c0080000           push 0x8c0
// 0046120c  50                   push eax
// 0046120d  ffd1                 call ecx
// 0046120f  83c410               add esp, 0x10
// 00461212  c20c00               ret 0xc
// 00461215  8b542408             mov edx, dword ptr [esp + 8]
// 00461219  8b442404             mov eax, dword ptr [esp + 4]
// 0046121d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461220  52                   push edx
// 00461221  50                   push eax
// 00461222  68c0080000           push 0x8c0
// 00461227  51                   push ecx
// 00461228  ff1590ee8900         call dword ptr [0x89ee90]
// 0046122e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginTypeN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
