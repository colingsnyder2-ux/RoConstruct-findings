// roc 2012-06 0049cba0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cba0
//
// 0049cba0  837c240800           cmp dword ptr [esp + 8], 0
// 0049cba5  6a00                 push 0
// 0049cba7  7419                 je 0x49cbc2
// 0049cba9  8b442408             mov eax, dword ptr [esp + 8]
// 0049cbad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049cbb0  50                   push eax
// 0049cbb1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049cbb4  68e8070000           push 0x7e8
// 0049cbb9  52                   push edx
// 0049cbba  ffd0                 call eax
// 0049cbbc  83c410               add esp, 0x10
// 0049cbbf  c20800               ret 8
// 0049cbc2  8b542408             mov edx, dword ptr [esp + 8]
// 0049cbc6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049cbc9  52                   push edx
// 0049cbca  68e8070000           push 0x7e8
// 0049cbcf  50                   push eax
// 0049cbd0  ff15043cb200         call dword ptr [0xb23c04]
// 0049cbd6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoLine@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
