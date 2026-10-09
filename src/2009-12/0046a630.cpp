// roc 2009-12 0046a630  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a630
//
// 0046a630  837c240400           cmp dword ptr [esp + 4], 0
// 0046a635  6a00                 push 0
// 0046a637  6a00                 push 0
// 0046a639  6884080000           push 0x884
// 0046a63e  740f                 je 0x46a64f
// 0046a640  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a643  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a646  50                   push eax
// 0046a647  ffd1                 call ecx
// 0046a649  83c410               add esp, 0x10
// 0046a64c  c20400               ret 4
// 0046a64f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a652  52                   push edx
// 0046a653  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a659  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Clear@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
