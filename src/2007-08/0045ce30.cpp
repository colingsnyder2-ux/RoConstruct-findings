// roc 2007-08 0045ce30  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ce30
//
// 0045ce30  837c240800           cmp dword ptr [esp + 8], 0
// 0045ce35  6a00                 push 0
// 0045ce37  7419                 je 0x45ce52
// 0045ce39  8b442408             mov eax, dword ptr [esp + 8]
// 0045ce3d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045ce40  50                   push eax
// 0045ce41  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045ce44  6896080000           push 0x896
// 0045ce49  52                   push edx
// 0045ce4a  ffd0                 call eax
// 0045ce4c  83c410               add esp, 0x10
// 0045ce4f  c20800               ret 8
// 0045ce52  8b542408             mov edx, dword ptr [esp + 8]
// 0045ce56  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045ce59  52                   push edx
// 0045ce5a  6896080000           push 0x896
// 0045ce5f  50                   push eax
// 0045ce60  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045ce66  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSearchFlags@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
