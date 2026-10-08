// roc 2008-06 00460360  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460360
//
// 00460360  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460365  741e                 je 0x460385
// 00460367  8b442408             mov eax, dword ptr [esp + 8]
// 0046036b  8b542404             mov edx, dword ptr [esp + 4]
// 0046036f  50                   push eax
// 00460370  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460373  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460376  52                   push edx
// 00460377  68f9070000           push 0x7f9
// 0046037c  50                   push eax
// 0046037d  ffd1                 call ecx
// 0046037f  83c410               add esp, 0x10
// 00460382  c20c00               ret 0xc
// 00460385  8b542408             mov edx, dword ptr [esp + 8]
// 00460389  8b442404             mov eax, dword ptr [esp + 4]
// 0046038d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460390  52                   push edx
// 00460391  50                   push eax
// 00460392  68f9070000           push 0x7f9
// 00460397  51                   push ecx
// 00460398  ff15142e8000         call dword ptr [0x802e14]
// 0046039e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
