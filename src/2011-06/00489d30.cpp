// roc 2011-06 00489d30  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489d30
//
// 00489d30  837c240800           cmp dword ptr [esp + 8], 0
// 00489d35  6a00                 push 0
// 00489d37  7419                 je 0x489d52
// 00489d39  8b442408             mov eax, dword ptr [esp + 8]
// 00489d3d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00489d40  50                   push eax
// 00489d41  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00489d44  68da070000           push 0x7da
// 00489d49  52                   push edx
// 00489d4a  ffd0                 call eax
// 00489d4c  83c410               add esp, 0x10
// 00489d4f  c20800               ret 8
// 00489d52  8b542408             mov edx, dword ptr [esp + 8]
// 00489d56  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00489d59  52                   push edx
// 00489d5a  68da070000           push 0x7da
// 00489d5f  50                   push eax
// 00489d60  ff15c019a400         call dword ptr [0xa419c0]
// 00489d66  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetStyleAt@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
