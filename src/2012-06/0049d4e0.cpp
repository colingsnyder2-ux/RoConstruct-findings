// roc 2012-06 0049d4e0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d4e0
//
// 0049d4e0  837c240800           cmp dword ptr [esp + 8], 0
// 0049d4e5  741b                 je 0x49d502
// 0049d4e7  8b442404             mov eax, dword ptr [esp + 4]
// 0049d4eb  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d4ee  50                   push eax
// 0049d4ef  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d4f2  6a00                 push 0
// 0049d4f4  6874080000           push 0x874
// 0049d4f9  52                   push edx
// 0049d4fa  ffd0                 call eax
// 0049d4fc  83c410               add esp, 0x10
// 0049d4ff  c20800               ret 8
// 0049d502  8b542404             mov edx, dword ptr [esp + 4]
// 0049d506  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d509  52                   push edx
// 0049d50a  6a00                 push 0
// 0049d50c  6874080000           push 0x874
// 0049d511  50                   push eax
// 0049d512  ff15043cb200         call dword ptr [0xb23c04]
// 0049d518  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointXFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
