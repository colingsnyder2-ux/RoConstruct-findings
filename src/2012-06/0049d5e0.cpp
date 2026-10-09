// roc 2012-06 0049d5e0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d5e0
//
// 0049d5e0  837c240800           cmp dword ptr [esp + 8], 0
// 0049d5e5  6a00                 push 0
// 0049d5e7  7419                 je 0x49d602
// 0049d5e9  8b442408             mov eax, dword ptr [esp + 8]
// 0049d5ed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d5f0  50                   push eax
// 0049d5f1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d5f4  687b080000           push 0x87b
// 0049d5f9  52                   push edx
// 0049d5fa  ffd0                 call eax
// 0049d5fc  83c410               add esp, 0x10
// 0049d5ff  c20800               ret 8
// 0049d602  8b542408             mov edx, dword ptr [esp + 8]
// 0049d606  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d609  52                   push edx
// 0049d60a  687b080000           push 0x87b
// 0049d60f  50                   push eax
// 0049d610  ff15043cb200         call dword ptr [0xb23c04]
// 0049d616  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetReadOnly@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
