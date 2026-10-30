// roc 2012-06 0049d4a0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d4a0
//
// 0049d4a0  837c240800           cmp dword ptr [esp + 8], 0
// 0049d4a5  6a00                 push 0
// 0049d4a7  7419                 je 0x49d4c2
// 0049d4a9  8b442408             mov eax, dword ptr [esp + 8]
// 0049d4ad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d4b0  50                   push eax
// 0049d4b1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d4b4  6873080000           push 0x873
// 0049d4b9  52                   push edx
// 0049d4ba  ffd0                 call eax
// 0049d4bc  83c410               add esp, 0x10
// 0049d4bf  c20800               ret 8
// 0049d4c2  8b542408             mov edx, dword ptr [esp + 8]
// 0049d4c6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d4c9  52                   push edx
// 0049d4ca  6873080000           push 0x873
// 0049d4cf  50                   push eax
// 0049d4d0  ff15043cb200         call dword ptr [0xb23c04]
// 0049d4d6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?HideSelection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
