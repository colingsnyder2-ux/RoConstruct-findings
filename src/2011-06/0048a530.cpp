// roc 2011-06 0048a530  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a530
//
// 0048a530  837c240800           cmp dword ptr [esp + 8], 0
// 0048a535  6a00                 push 0
// 0048a537  7419                 je 0x48a552
// 0048a539  8b442408             mov eax, dword ptr [esp + 8]
// 0048a53d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a540  50                   push eax
// 0048a541  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a544  683a080000           push 0x83a
// 0048a549  52                   push edx
// 0048a54a  ffd0                 call eax
// 0048a54c  83c410               add esp, 0x10
// 0048a54f  c20800               ret 8
// 0048a552  8b542408             mov edx, dword ptr [esp + 8]
// 0048a556  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a559  52                   push edx
// 0048a55a  683a080000           push 0x83a
// 0048a55f  50                   push eax
// 0048a560  ff15c019a400         call dword ptr [0xa419c0]
// 0048a566  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCSetSeparator@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
