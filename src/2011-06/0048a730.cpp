// roc 2011-06 0048a730  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a730
//
// 0048a730  837c240800           cmp dword ptr [esp + 8], 0
// 0048a735  741b                 je 0x48a752
// 0048a737  8b442404             mov eax, dword ptr [esp + 4]
// 0048a73b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a73e  50                   push eax
// 0048a73f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a742  6a00                 push 0
// 0048a744  6872080000           push 0x872
// 0048a749  52                   push edx
// 0048a74a  ffd0                 call eax
// 0048a74c  83c410               add esp, 0x10
// 0048a74f  c20800               ret 8
// 0048a752  8b542404             mov edx, dword ptr [esp + 4]
// 0048a756  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a759  52                   push edx
// 0048a75a  6a00                 push 0
// 0048a75c  6872080000           push 0x872
// 0048a761  50                   push eax
// 0048a762  ff15c019a400         call dword ptr [0xa419c0]
// 0048a768  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextRange@CScintillaCtrl@@QAEHPAUTextRange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
