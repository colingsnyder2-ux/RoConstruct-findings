// roc 2009-12 0046a030  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a030
//
// 0046a030  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046a035  741e                 je 0x46a055
// 0046a037  8b442408             mov eax, dword ptr [esp + 8]
// 0046a03b  8b542404             mov edx, dword ptr [esp + 4]
// 0046a03f  50                   push eax
// 0046a040  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a043  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a046  52                   push edx
// 0046a047  6807080000           push 0x807
// 0046a04c  50                   push eax
// 0046a04d  ffd1                 call ecx
// 0046a04f  83c410               add esp, 0x10
// 0046a052  c20c00               ret 0xc
// 0046a055  8b542408             mov edx, dword ptr [esp + 8]
// 0046a059  8b442404             mov eax, dword ptr [esp + 4]
// 0046a05d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a060  52                   push edx
// 0046a061  50                   push eax
// 0046a062  6807080000           push 0x807
// 0046a067  51                   push ecx
// 0046a068  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a06e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetSize@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
