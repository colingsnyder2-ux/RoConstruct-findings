// roc 2012-06 0049cb70  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cb70
//
// 0049cb70  837c240400           cmp dword ptr [esp + 4], 0
// 0049cb75  6a00                 push 0
// 0049cb77  6a00                 push 0
// 0049cb79  68e0070000           push 0x7e0
// 0049cb7e  740f                 je 0x49cb8f
// 0049cb80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cb83  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cb86  50                   push eax
// 0049cb87  ffd1                 call ecx
// 0049cb89  83c410               add esp, 0x10
// 0049cb8c  c20400               ret 4
// 0049cb8f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049cb92  52                   push edx
// 0049cb93  ff15043cb200         call dword ptr [0xb23c04]
// 0049cb99  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanRedo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
