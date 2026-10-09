// roc 2009-12 00469960  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469960
//
// 00469960  837c240800           cmp dword ptr [esp + 8], 0
// 00469965  6a00                 push 0
// 00469967  7419                 je 0x469982
// 00469969  8b442408             mov eax, dword ptr [esp + 8]
// 0046996d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00469970  50                   push eax
// 00469971  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00469974  68da070000           push 0x7da
// 00469979  52                   push edx
// 0046997a  ffd0                 call eax
// 0046997c  83c410               add esp, 0x10
// 0046997f  c20800               ret 8
// 00469982  8b542408             mov edx, dword ptr [esp + 8]
// 00469986  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00469989  52                   push edx
// 0046998a  68da070000           push 0x7da
// 0046998f  50                   push eax
// 00469990  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469996  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetStyleAt@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
