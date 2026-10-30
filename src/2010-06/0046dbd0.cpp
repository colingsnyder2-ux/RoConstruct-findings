// roc 2010-06 0046dbd0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dbd0
//
// 0046dbd0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046dbd5  741e                 je 0x46dbf5
// 0046dbd7  8b442408             mov eax, dword ptr [esp + 8]
// 0046dbdb  8b542404             mov edx, dword ptr [esp + 4]
// 0046dbdf  50                   push eax
// 0046dbe0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046dbe3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046dbe6  52                   push edx
// 0046dbe7  6834080000           push 0x834
// 0046dbec  50                   push eax
// 0046dbed  ffd1                 call ecx
// 0046dbef  83c410               add esp, 0x10
// 0046dbf2  c20c00               ret 0xc
// 0046dbf5  8b542408             mov edx, dword ptr [esp + 8]
// 0046dbf9  8b442404             mov eax, dword ptr [esp + 4]
// 0046dbfd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046dc00  52                   push edx
// 0046dc01  50                   push eax
// 0046dc02  6834080000           push 0x834
// 0046dc07  51                   push ecx
// 0046dc08  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dc0e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCShow@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
