// roc 2007-03 0045a0e0  unit: seg_00450000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a0e0
//
// 0045a0e0  837c240800           cmp dword ptr [esp + 8], 0
// 0045a0e5  741b                 je 0x45a102
// 0045a0e7  8b442404             mov eax, dword ptr [esp + 4]
// 0045a0eb  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a0ee  50                   push eax
// 0045a0ef  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a0f2  6a00                 push 0
// 0045a0f4  6872080000           push 0x872
// 0045a0f9  52                   push edx
// 0045a0fa  ffd0                 call eax
// 0045a0fc  83c410               add esp, 0x10
// 0045a0ff  c20800               ret 8
// 0045a102  8b542404             mov edx, dword ptr [esp + 4]
// 0045a106  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a109  52                   push edx
// 0045a10a  6a00                 push 0
// 0045a10c  6872080000           push 0x872
// 0045a111  50                   push eax
// 0045a112  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a118  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextRange@CScintillaCtrl@@QAEHPAUTextRange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
