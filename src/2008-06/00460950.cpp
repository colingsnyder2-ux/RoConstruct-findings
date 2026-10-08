// roc 2008-06 00460950  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460950
//
// 00460950  837c240800           cmp dword ptr [esp + 8], 0
// 00460955  6a00                 push 0
// 00460957  7419                 je 0x460972
// 00460959  8b442408             mov eax, dword ptr [esp + 8]
// 0046095d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460960  50                   push eax
// 00460961  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460964  6851080000           push 0x851
// 00460969  52                   push edx
// 0046096a  ffd0                 call eax
// 0046096c  83c410               add esp, 0x10
// 0046096f  c20800               ret 8
// 00460972  8b542408             mov edx, dword ptr [esp + 8]
// 00460976  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460979  52                   push edx
// 0046097a  6851080000           push 0x851
// 0046097f  50                   push eax
// 00460980  ff15142e8000         call dword ptr [0x802e14]
// 00460986  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetColumn@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
