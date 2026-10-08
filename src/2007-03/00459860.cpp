// roc 2007-03 00459860  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459860
//
// 00459860  837c240800           cmp dword ptr [esp + 8], 0
// 00459865  6a00                 push 0
// 00459867  7419                 je 0x459882
// 00459869  8b442408             mov eax, dword ptr [esp + 8]
// 0045986d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00459870  50                   push eax
// 00459871  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00459874  68e8070000           push 0x7e8
// 00459879  52                   push edx
// 0045987a  ffd0                 call eax
// 0045987c  83c410               add esp, 0x10
// 0045987f  c20800               ret 8
// 00459882  8b542408             mov edx, dword ptr [esp + 8]
// 00459886  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00459889  52                   push edx
// 0045988a  68e8070000           push 0x7e8
// 0045988f  50                   push eax
// 00459890  ff1550ee7700         call dword ptr [0x77ee50]
// 00459896  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoLine@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
