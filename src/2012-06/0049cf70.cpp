// roc 2012-06 0049cf70  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cf70
//
// 0049cf70  837c240800           cmp dword ptr [esp + 8], 0
// 0049cf75  6a00                 push 0
// 0049cf77  7419                 je 0x49cf92
// 0049cf79  8b442408             mov eax, dword ptr [esp + 8]
// 0049cf7d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049cf80  50                   push eax
// 0049cf81  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049cf84  68c3080000           push 0x8c3
// 0049cf89  52                   push edx
// 0049cf8a  ffd0                 call eax
// 0049cf8c  83c410               add esp, 0x10
// 0049cf8f  c20800               ret 8
// 0049cf92  8b542408             mov edx, dword ptr [esp + 8]
// 0049cf96  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049cf99  52                   push edx
// 0049cf9a  68c3080000           push 0x8c3
// 0049cf9f  50                   push eax
// 0049cfa0  ff15043cb200         call dword ptr [0xb23c04]
// 0049cfa6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetMarginWidthN@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
