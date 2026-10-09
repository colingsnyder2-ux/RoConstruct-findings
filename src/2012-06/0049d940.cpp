// roc 2012-06 0049d940  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d940
//
// 0049d940  837c240800           cmp dword ptr [esp + 8], 0
// 0049d945  6a00                 push 0
// 0049d947  7419                 je 0x49d962
// 0049d949  8b442408             mov eax, dword ptr [esp + 8]
// 0049d94d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d950  50                   push eax
// 0049d951  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d954  6896080000           push 0x896
// 0049d959  52                   push edx
// 0049d95a  ffd0                 call eax
// 0049d95c  83c410               add esp, 0x10
// 0049d95f  c20800               ret 8
// 0049d962  8b542408             mov edx, dword ptr [esp + 8]
// 0049d966  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d969  52                   push edx
// 0049d96a  6896080000           push 0x896
// 0049d96f  50                   push eax
// 0049d970  ff15043cb200         call dword ptr [0xb23c04]
// 0049d976  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSearchFlags@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
