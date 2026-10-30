// roc 2012-06 0049cb40  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cb40
//
// 0049cb40  837c240400           cmp dword ptr [esp + 4], 0
// 0049cb45  6a00                 push 0
// 0049cb47  6a00                 push 0
// 0049cb49  68de070000           push 0x7de
// 0049cb4e  740f                 je 0x49cb5f
// 0049cb50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cb53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cb56  50                   push eax
// 0049cb57  ffd1                 call ecx
// 0049cb59  83c410               add esp, 0x10
// 0049cb5c  c20400               ret 4
// 0049cb5f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049cb62  52                   push edx
// 0049cb63  ff15043cb200         call dword ptr [0xb23c04]
// 0049cb69  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSavePoint@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
