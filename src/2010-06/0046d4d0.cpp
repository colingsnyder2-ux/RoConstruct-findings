// roc 2010-06 0046d4d0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d4d0
//
// 0046d4d0  837c240800           cmp dword ptr [esp + 8], 0
// 0046d4d5  6a00                 push 0
// 0046d4d7  7419                 je 0x46d4f2
// 0046d4d9  8b442408             mov eax, dword ptr [esp + 8]
// 0046d4dd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046d4e0  50                   push eax
// 0046d4e1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046d4e4  68dc070000           push 0x7dc
// 0046d4e9  52                   push edx
// 0046d4ea  ffd0                 call eax
// 0046d4ec  83c410               add esp, 0x10
// 0046d4ef  c20800               ret 8
// 0046d4f2  8b542408             mov edx, dword ptr [esp + 8]
// 0046d4f6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046d4f9  52                   push edx
// 0046d4fa  68dc070000           push 0x7dc
// 0046d4ff  50                   push eax
// 0046d500  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d506  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetUndoCollection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
