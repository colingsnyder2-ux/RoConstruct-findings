// roc 2010-06 0046e070  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e070
//
// 0046e070  837c240400           cmp dword ptr [esp + 4], 0
// 0046e075  6a00                 push 0
// 0046e077  6a00                 push 0
// 0046e079  6880080000           push 0x880
// 0046e07e  740f                 je 0x46e08f
// 0046e080  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e083  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e086  50                   push eax
// 0046e087  ffd1                 call ecx
// 0046e089  83c410               add esp, 0x10
// 0046e08c  c20400               ret 4
// 0046e08f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e092  52                   push edx
// 0046e093  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e099  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Undo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
