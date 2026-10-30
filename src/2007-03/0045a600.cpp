// roc 2007-03 0045a600  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a600
//
// 0045a600  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045a605  741e                 je 0x45a625
// 0045a607  8b442408             mov eax, dword ptr [esp + 8]
// 0045a60b  8b542404             mov edx, dword ptr [esp + 4]
// 0045a60f  50                   push eax
// 0045a610  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a613  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a616  52                   push edx
// 0045a617  6898080000           push 0x898
// 0045a61c  50                   push eax
// 0045a61d  ffd1                 call ecx
// 0045a61f  83c410               add esp, 0x10
// 0045a622  c20c00               ret 0xc
// 0045a625  8b542408             mov edx, dword ptr [esp + 8]
// 0045a629  8b442404             mov eax, dword ptr [esp + 4]
// 0045a62d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045a630  52                   push edx
// 0045a631  50                   push eax
// 0045a632  6898080000           push 0x898
// 0045a637  51                   push ecx
// 0045a638  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a63e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipShow@CScintillaCtrl@@QAEXJPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
