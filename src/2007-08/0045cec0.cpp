// roc 2007-08 0045cec0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cec0
//
// 0045cec0  837c240400           cmp dword ptr [esp + 4], 0
// 0045cec5  6a00                 push 0
// 0045cec7  6a00                 push 0
// 0045cec9  6899080000           push 0x899
// 0045cece  740f                 je 0x45cedf
// 0045ced0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045ced3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045ced6  50                   push eax
// 0045ced7  ffd1                 call ecx
// 0045ced9  83c410               add esp, 0x10
// 0045cedc  c20400               ret 4
// 0045cedf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cee2  52                   push edx
// 0045cee3  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cee9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipCancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
