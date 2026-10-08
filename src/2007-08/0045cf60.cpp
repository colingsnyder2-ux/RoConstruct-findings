// roc 2007-08 0045cf60  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cf60
//
// 0045cf60  837c240800           cmp dword ptr [esp + 8], 0
// 0045cf65  6a00                 push 0
// 0045cf67  7419                 je 0x45cf82
// 0045cf69  8b442408             mov eax, dword ptr [esp + 8]
// 0045cf6d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045cf70  50                   push eax
// 0045cf71  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045cf74  68b7080000           push 0x8b7
// 0045cf79  52                   push edx
// 0045cf7a  ffd0                 call eax
// 0045cf7c  83c410               add esp, 0x10
// 0045cf7f  c20800               ret 8
// 0045cf82  8b542408             mov edx, dword ptr [esp + 8]
// 0045cf86  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045cf89  52                   push edx
// 0045cf8a  68b7080000           push 0x8b7
// 0045cf8f  50                   push eax
// 0045cf90  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cf96  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ToggleFold@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
