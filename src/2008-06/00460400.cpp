// roc 2008-06 00460400  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460400
//
// 00460400  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460405  741e                 je 0x460425
// 00460407  8b442408             mov eax, dword ptr [esp + 8]
// 0046040b  8b542404             mov edx, dword ptr [esp + 4]
// 0046040f  50                   push eax
// 00460410  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460413  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460416  52                   push edx
// 00460417  68fb070000           push 0x7fb
// 0046041c  50                   push eax
// 0046041d  ffd1                 call ecx
// 0046041f  83c410               add esp, 0x10
// 00460422  c20c00               ret 0xc
// 00460425  8b542408             mov edx, dword ptr [esp + 8]
// 00460429  8b442404             mov eax, dword ptr [esp + 4]
// 0046042d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460430  52                   push edx
// 00460431  50                   push eax
// 00460432  68fb070000           push 0x7fb
// 00460437  51                   push ecx
// 00460438  ff15142e8000         call dword ptr [0x802e14]
// 0046043e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerAdd@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
