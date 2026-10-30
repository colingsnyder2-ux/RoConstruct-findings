// roc 2010-06 0046d930  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d930
//
// 0046d930  837c240800           cmp dword ptr [esp + 8], 0
// 0046d935  6a00                 push 0
// 0046d937  7419                 je 0x46d952
// 0046d939  8b442408             mov eax, dword ptr [esp + 8]
// 0046d93d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046d940  50                   push eax
// 0046d941  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046d944  68c3080000           push 0x8c3
// 0046d949  52                   push edx
// 0046d94a  ffd0                 call eax
// 0046d94c  83c410               add esp, 0x10
// 0046d94f  c20800               ret 8
// 0046d952  8b542408             mov edx, dword ptr [esp + 8]
// 0046d956  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046d959  52                   push edx
// 0046d95a  68c3080000           push 0x8c3
// 0046d95f  50                   push eax
// 0046d960  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d966  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetMarginWidthN@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
