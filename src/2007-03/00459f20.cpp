// roc 2007-03 00459f20  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459f20
//
// 00459f20  837c240800           cmp dword ptr [esp + 8], 0
// 00459f25  6a00                 push 0
// 00459f27  7419                 je 0x459f42
// 00459f29  8b442408             mov eax, dword ptr [esp + 8]
// 00459f2d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00459f30  50                   push eax
// 00459f31  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00459f34  6851080000           push 0x851
// 00459f39  52                   push edx
// 00459f3a  ffd0                 call eax
// 00459f3c  83c410               add esp, 0x10
// 00459f3f  c20800               ret 8
// 00459f42  8b542408             mov edx, dword ptr [esp + 8]
// 00459f46  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00459f49  52                   push edx
// 00459f4a  6851080000           push 0x851
// 00459f4f  50                   push eax
// 00459f50  ff1550ee7700         call dword ptr [0x77ee50]
// 00459f56  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetColumn@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
