// roc 2011-06 00489eb0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489eb0
//
// 00489eb0  837c240800           cmp dword ptr [esp + 8], 0
// 00489eb5  6a00                 push 0
// 00489eb7  7419                 je 0x489ed2
// 00489eb9  8b442408             mov eax, dword ptr [esp + 8]
// 00489ebd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00489ec0  50                   push eax
// 00489ec1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00489ec4  68e9070000           push 0x7e9
// 00489ec9  52                   push edx
// 00489eca  ffd0                 call eax
// 00489ecc  83c410               add esp, 0x10
// 00489ecf  c20800               ret 8
// 00489ed2  8b542408             mov edx, dword ptr [esp + 8]
// 00489ed6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00489ed9  52                   push edx
// 00489eda  68e9070000           push 0x7e9
// 00489edf  50                   push eax
// 00489ee0  ff15c019a400         call dword ptr [0xa419c0]
// 00489ee6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoPos@CScintillaCtrl@@QAEXJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
