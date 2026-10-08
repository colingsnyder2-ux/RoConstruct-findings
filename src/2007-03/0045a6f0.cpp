// roc 2007-03 0045a6f0  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a6f0
//
// 0045a6f0  837c240800           cmp dword ptr [esp + 8], 0
// 0045a6f5  6a00                 push 0
// 0045a6f7  7419                 je 0x45a712
// 0045a6f9  8b442408             mov eax, dword ptr [esp + 8]
// 0045a6fd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045a700  50                   push eax
// 0045a701  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045a704  68b7080000           push 0x8b7
// 0045a709  52                   push edx
// 0045a70a  ffd0                 call eax
// 0045a70c  83c410               add esp, 0x10
// 0045a70f  c20800               ret 8
// 0045a712  8b542408             mov edx, dword ptr [esp + 8]
// 0045a716  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045a719  52                   push edx
// 0045a71a  68b7080000           push 0x8b7
// 0045a71f  50                   push eax
// 0045a720  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a726  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ToggleFold@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
