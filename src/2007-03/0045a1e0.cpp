// roc 2007-03 0045a1e0  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a1e0
//
// 0045a1e0  837c240800           cmp dword ptr [esp + 8], 0
// 0045a1e5  6a00                 push 0
// 0045a1e7  7419                 je 0x45a202
// 0045a1e9  8b442408             mov eax, dword ptr [esp + 8]
// 0045a1ed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a1f0  50                   push eax
// 0045a1f1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a1f4  6876080000           push 0x876
// 0045a1f9  52                   push edx
// 0045a1fa  ffd0                 call eax
// 0045a1fc  83c410               add esp, 0x10
// 0045a1ff  c20800               ret 8
// 0045a202  8b542408             mov edx, dword ptr [esp + 8]
// 0045a206  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a209  52                   push edx
// 0045a20a  6876080000           push 0x876
// 0045a20f  50                   push eax
// 0045a210  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a216  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?LineFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
