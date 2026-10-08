// roc 2008-06 00460530  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460530
//
// 00460530  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460535  741e                 je 0x460555
// 00460537  8b442408             mov eax, dword ptr [esp + 8]
// 0046053b  8b542404             mov edx, dword ptr [esp + 4]
// 0046053f  50                   push eax
// 00460540  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460543  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460546  52                   push edx
// 00460547  6800080000           push 0x800
// 0046054c  50                   push eax
// 0046054d  ffd1                 call ecx
// 0046054f  83c410               add esp, 0x10
// 00460552  c20c00               ret 0xc
// 00460555  8b542408             mov edx, dword ptr [esp + 8]
// 00460559  8b442404             mov eax, dword ptr [esp + 4]
// 0046055d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460560  52                   push edx
// 00460561  50                   push eax
// 00460562  6800080000           push 0x800
// 00460567  51                   push ecx
// 00460568  ff15142e8000         call dword ptr [0x802e14]
// 0046056e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerPrevious@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
