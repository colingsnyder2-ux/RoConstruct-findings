// roc 2007-03 0045a420  unit: seg_00450000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a420
//
// 0045a420  837c240800           cmp dword ptr [esp + 8], 0
// 0045a425  741b                 je 0x45a442
// 0045a427  8b442404             mov eax, dword ptr [esp + 4]
// 0045a42b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a42e  50                   push eax
// 0045a42f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a432  6a00                 push 0
// 0045a434  6885080000           push 0x885
// 0045a439  52                   push edx
// 0045a43a  ffd0                 call eax
// 0045a43c  83c410               add esp, 0x10
// 0045a43f  c20800               ret 8
// 0045a442  8b542404             mov edx, dword ptr [esp + 4]
// 0045a446  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a449  52                   push edx
// 0045a44a  6a00                 push 0
// 0045a44c  6885080000           push 0x885
// 0045a451  50                   push eax
// 0045a452  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a458  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetText@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
