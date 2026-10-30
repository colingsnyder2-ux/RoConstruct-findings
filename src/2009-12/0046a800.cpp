// roc 2009-12 0046a800  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a800
//
// 0046a800  837c240800           cmp dword ptr [esp + 8], 0
// 0046a805  6a00                 push 0
// 0046a807  7419                 je 0x46a822
// 0046a809  8b442408             mov eax, dword ptr [esp + 8]
// 0046a80d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a810  50                   push eax
// 0046a811  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a814  6896080000           push 0x896
// 0046a819  52                   push edx
// 0046a81a  ffd0                 call eax
// 0046a81c  83c410               add esp, 0x10
// 0046a81f  c20800               ret 8
// 0046a822  8b542408             mov edx, dword ptr [esp + 8]
// 0046a826  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a829  52                   push edx
// 0046a82a  6896080000           push 0x896
// 0046a82f  50                   push eax
// 0046a830  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a836  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSearchFlags@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
