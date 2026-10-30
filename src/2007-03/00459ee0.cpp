// roc 2007-03 00459ee0  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459ee0
//
// 00459ee0  837c240800           cmp dword ptr [esp + 8], 0
// 00459ee5  6a00                 push 0
// 00459ee7  7419                 je 0x459f02
// 00459ee9  8b442408             mov eax, dword ptr [esp + 8]
// 00459eed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00459ef0  50                   push eax
// 00459ef1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00459ef4  683a080000           push 0x83a
// 00459ef9  52                   push edx
// 00459efa  ffd0                 call eax
// 00459efc  83c410               add esp, 0x10
// 00459eff  c20800               ret 8
// 00459f02  8b542408             mov edx, dword ptr [esp + 8]
// 00459f06  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00459f09  52                   push edx
// 00459f0a  683a080000           push 0x83a
// 00459f0f  50                   push eax
// 00459f10  ff1550ee7700         call dword ptr [0x77ee50]
// 00459f16  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCSetSeparator@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
