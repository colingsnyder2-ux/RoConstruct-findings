// roc 2008-06 004611a0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004611a0
//
// 004611a0  837c240400           cmp dword ptr [esp + 4], 0
// 004611a5  6a00                 push 0
// 004611a7  6a00                 push 0
// 004611a9  68ef080000           push 0x8ef
// 004611ae  740f                 je 0x4611bf
// 004611b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004611b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004611b6  50                   push eax
// 004611b7  ffd1                 call ecx
// 004611b9  83c410               add esp, 0x10
// 004611bc  c20400               ret 4
// 004611bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004611c2  52                   push edx
// 004611c3  ff15142e8000         call dword ptr [0x802e14]
// 004611c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?TargetFromSelection@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
