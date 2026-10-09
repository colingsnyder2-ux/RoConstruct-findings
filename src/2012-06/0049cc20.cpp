// roc 2012-06 0049cc20  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cc20
//
// 0049cc20  837c240800           cmp dword ptr [esp + 8], 0
// 0049cc25  6a00                 push 0
// 0049cc27  7419                 je 0x49cc42
// 0049cc29  8b442408             mov eax, dword ptr [esp + 8]
// 0049cc2d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049cc30  50                   push eax
// 0049cc31  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049cc34  68f4070000           push 0x7f4
// 0049cc39  52                   push edx
// 0049cc3a  ffd0                 call eax
// 0049cc3c  83c410               add esp, 0x10
// 0049cc3f  c20800               ret 8
// 0049cc42  8b542408             mov edx, dword ptr [esp + 8]
// 0049cc46  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049cc49  52                   push edx
// 0049cc4a  68f4070000           push 0x7f4
// 0049cc4f  50                   push eax
// 0049cc50  ff15043cb200         call dword ptr [0xb23c04]
// 0049cc56  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetTabWidth@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
