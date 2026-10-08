// roc 2007-03 0045a730  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a730
//
// 0045a730  837c240800           cmp dword ptr [esp + 8], 0
// 0045a735  6a00                 push 0
// 0045a737  7419                 je 0x45a752
// 0045a739  8b442408             mov eax, dword ptr [esp + 8]
// 0045a73d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a740  50                   push eax
// 0045a741  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a744  68d8080000           push 0x8d8
// 0045a749  52                   push edx
// 0045a74a  ffd0                 call eax
// 0045a74c  83c410               add esp, 0x10
// 0045a74f  c20800               ret 8
// 0045a752  8b542408             mov edx, dword ptr [esp + 8]
// 0045a756  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a759  52                   push edx
// 0045a75a  68d8080000           push 0x8d8
// 0045a75f  50                   push eax
// 0045a760  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a766  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMouseDwellTime@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
