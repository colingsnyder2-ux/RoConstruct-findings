// roc 2009-06 00461530  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461530
//
// 00461530  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461535  741e                 je 0x461555
// 00461537  8b442408             mov eax, dword ptr [esp + 8]
// 0046153b  8b542404             mov edx, dword ptr [esp + 4]
// 0046153f  50                   push eax
// 00461540  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461543  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461546  52                   push edx
// 00461547  6834080000           push 0x834
// 0046154c  50                   push eax
// 0046154d  ffd1                 call ecx
// 0046154f  83c410               add esp, 0x10
// 00461552  c20c00               ret 0xc
// 00461555  8b542408             mov edx, dword ptr [esp + 8]
// 00461559  8b442404             mov eax, dword ptr [esp + 4]
// 0046155d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461560  52                   push edx
// 00461561  50                   push eax
// 00461562  6834080000           push 0x834
// 00461567  51                   push ecx
// 00461568  ff1590ee8900         call dword ptr [0x89ee90]
// 0046156e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCShow@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
