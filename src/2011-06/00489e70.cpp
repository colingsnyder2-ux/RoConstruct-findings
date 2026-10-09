// roc 2011-06 00489e70  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489e70
//
// 00489e70  837c240800           cmp dword ptr [esp + 8], 0
// 00489e75  6a00                 push 0
// 00489e77  7419                 je 0x489e92
// 00489e79  8b442408             mov eax, dword ptr [esp + 8]
// 00489e7d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00489e80  50                   push eax
// 00489e81  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00489e84  68e8070000           push 0x7e8
// 00489e89  52                   push edx
// 00489e8a  ffd0                 call eax
// 00489e8c  83c410               add esp, 0x10
// 00489e8f  c20800               ret 8
// 00489e92  8b542408             mov edx, dword ptr [esp + 8]
// 00489e96  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00489e99  52                   push edx
// 00489e9a  68e8070000           push 0x7e8
// 00489e9f  50                   push eax
// 00489ea0  ff15c019a400         call dword ptr [0xa419c0]
// 00489ea6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoLine@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
