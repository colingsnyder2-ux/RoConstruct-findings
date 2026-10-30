// roc 2012-06 0049da70  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049da70
//
// 0049da70  837c240800           cmp dword ptr [esp + 8], 0
// 0049da75  6a00                 push 0
// 0049da77  7419                 je 0x49da92
// 0049da79  8b442408             mov eax, dword ptr [esp + 8]
// 0049da7d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049da80  50                   push eax
// 0049da81  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049da84  68b7080000           push 0x8b7
// 0049da89  52                   push edx
// 0049da8a  ffd0                 call eax
// 0049da8c  83c410               add esp, 0x10
// 0049da8f  c20800               ret 8
// 0049da92  8b542408             mov edx, dword ptr [esp + 8]
// 0049da96  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049da99  52                   push edx
// 0049da9a  68b7080000           push 0x8b7
// 0049da9f  50                   push eax
// 0049daa0  ff15043cb200         call dword ptr [0xb23c04]
// 0049daa6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ToggleFold@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
