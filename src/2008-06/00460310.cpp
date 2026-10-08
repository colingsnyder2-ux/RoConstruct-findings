// roc 2008-06 00460310  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460310
//
// 00460310  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460315  741e                 je 0x460335
// 00460317  8b442408             mov eax, dword ptr [esp + 8]
// 0046031b  8b542404             mov edx, dword ptr [esp + 4]
// 0046031f  50                   push eax
// 00460320  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460323  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460326  52                   push edx
// 00460327  68f8070000           push 0x7f8
// 0046032c  50                   push eax
// 0046032d  ffd1                 call ecx
// 0046032f  83c410               add esp, 0x10
// 00460332  c20c00               ret 0xc
// 00460335  8b542408             mov edx, dword ptr [esp + 8]
// 00460339  8b442404             mov eax, dword ptr [esp + 4]
// 0046033d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460340  52                   push edx
// 00460341  50                   push eax
// 00460342  68f8070000           push 0x7f8
// 00460347  51                   push ecx
// 00460348  ff15142e8000         call dword ptr [0x802e14]
// 0046034e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDefine@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
