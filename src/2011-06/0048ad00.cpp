// roc 2011-06 0048ad00  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ad00
//
// 0048ad00  837c240800           cmp dword ptr [esp + 8], 0
// 0048ad05  6a00                 push 0
// 0048ad07  7419                 je 0x48ad22
// 0048ad09  8b442408             mov eax, dword ptr [esp + 8]
// 0048ad0d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048ad10  50                   push eax
// 0048ad11  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048ad14  68af080000           push 0x8af
// 0048ad19  52                   push edx
// 0048ad1a  ffd0                 call eax
// 0048ad1c  83c410               add esp, 0x10
// 0048ad1f  c20800               ret 8
// 0048ad22  8b542408             mov edx, dword ptr [esp + 8]
// 0048ad26  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048ad29  52                   push edx
// 0048ad2a  68af080000           push 0x8af
// 0048ad2f  50                   push eax
// 0048ad30  ff15c019a400         call dword ptr [0xa419c0]
// 0048ad36  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetFoldLevel@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
