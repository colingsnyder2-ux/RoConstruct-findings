// roc 2007-03 00459720  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459720
//
// 00459720  837c240800           cmp dword ptr [esp + 8], 0
// 00459725  6a00                 push 0
// 00459727  7419                 je 0x459742
// 00459729  8b442408             mov eax, dword ptr [esp + 8]
// 0045972d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00459730  50                   push eax
// 00459731  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00459734  68da070000           push 0x7da
// 00459739  52                   push edx
// 0045973a  ffd0                 call eax
// 0045973c  83c410               add esp, 0x10
// 0045973f  c20800               ret 8
// 00459742  8b542408             mov edx, dword ptr [esp + 8]
// 00459746  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00459749  52                   push edx
// 0045974a  68da070000           push 0x7da
// 0045974f  50                   push eax
// 00459750  ff1550ee7700         call dword ptr [0x77ee50]
// 00459756  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetStyleAt@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
