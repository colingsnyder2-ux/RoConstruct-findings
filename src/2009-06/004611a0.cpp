// roc 2009-06 004611a0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004611a0
//
// 004611a0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004611a5  741e                 je 0x4611c5
// 004611a7  8b442408             mov eax, dword ptr [esp + 8]
// 004611ab  8b542404             mov edx, dword ptr [esp + 4]
// 004611af  50                   push eax
// 004611b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004611b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004611b6  52                   push edx
// 004611b7  6800080000           push 0x800
// 004611bc  50                   push eax
// 004611bd  ffd1                 call ecx
// 004611bf  83c410               add esp, 0x10
// 004611c2  c20c00               ret 0xc
// 004611c5  8b542408             mov edx, dword ptr [esp + 8]
// 004611c9  8b442404             mov eax, dword ptr [esp + 4]
// 004611cd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004611d0  52                   push edx
// 004611d1  50                   push eax
// 004611d2  6800080000           push 0x800
// 004611d7  51                   push ecx
// 004611d8  ff1590ee8900         call dword ptr [0x89ee90]
// 004611de  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerPrevious@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
