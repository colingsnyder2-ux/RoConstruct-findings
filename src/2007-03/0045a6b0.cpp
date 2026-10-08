// roc 2007-03 0045a6b0  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a6b0
//
// 0045a6b0  837c240800           cmp dword ptr [esp + 8], 0
// 0045a6b5  6a00                 push 0
// 0045a6b7  7419                 je 0x45a6d2
// 0045a6b9  8b442408             mov eax, dword ptr [esp + 8]
// 0045a6bd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a6c0  50                   push eax
// 0045a6c1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a6c4  68af080000           push 0x8af
// 0045a6c9  52                   push edx
// 0045a6ca  ffd0                 call eax
// 0045a6cc  83c410               add esp, 0x10
// 0045a6cf  c20800               ret 8
// 0045a6d2  8b542408             mov edx, dword ptr [esp + 8]
// 0045a6d6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a6d9  52                   push edx
// 0045a6da  68af080000           push 0x8af
// 0045a6df  50                   push eax
// 0045a6e0  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a6e6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetFoldLevel@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
