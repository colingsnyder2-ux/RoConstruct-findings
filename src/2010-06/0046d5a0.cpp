// roc 2010-06 0046d5a0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d5a0
//
// 0046d5a0  837c240800           cmp dword ptr [esp + 8], 0
// 0046d5a5  6a00                 push 0
// 0046d5a7  7419                 je 0x46d5c2
// 0046d5a9  8b442408             mov eax, dword ptr [esp + 8]
// 0046d5ad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046d5b0  50                   push eax
// 0046d5b1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046d5b4  68e8070000           push 0x7e8
// 0046d5b9  52                   push edx
// 0046d5ba  ffd0                 call eax
// 0046d5bc  83c410               add esp, 0x10
// 0046d5bf  c20800               ret 8
// 0046d5c2  8b542408             mov edx, dword ptr [esp + 8]
// 0046d5c6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046d5c9  52                   push edx
// 0046d5ca  68e8070000           push 0x7e8
// 0046d5cf  50                   push eax
// 0046d5d0  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d5d6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoLine@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
