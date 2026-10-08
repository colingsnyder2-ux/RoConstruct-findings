// roc 2008-06 004611d0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004611d0
//
// 004611d0  837c240400           cmp dword ptr [esp + 4], 0
// 004611d5  6a00                 push 0
// 004611d7  6a00                 push 0
// 004611d9  6815090000           push 0x915
// 004611de  740f                 je 0x4611ef
// 004611e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004611e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004611e6  50                   push eax
// 004611e7  ffd1                 call ecx
// 004611e9  83c410               add esp, 0x10
// 004611ec  c20400               ret 4
// 004611ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004611f2  52                   push edx
// 004611f3  ff15142e8000         call dword ptr [0x802e14]
// 004611f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
