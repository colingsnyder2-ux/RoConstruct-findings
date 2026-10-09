// roc 2009-12 00469aa0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469aa0
//
// 00469aa0  837c240800           cmp dword ptr [esp + 8], 0
// 00469aa5  6a00                 push 0
// 00469aa7  7419                 je 0x469ac2
// 00469aa9  8b442408             mov eax, dword ptr [esp + 8]
// 00469aad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00469ab0  50                   push eax
// 00469ab1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00469ab4  68e8070000           push 0x7e8
// 00469ab9  52                   push edx
// 00469aba  ffd0                 call eax
// 00469abc  83c410               add esp, 0x10
// 00469abf  c20800               ret 8
// 00469ac2  8b542408             mov edx, dword ptr [esp + 8]
// 00469ac6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00469ac9  52                   push edx
// 00469aca  68e8070000           push 0x7e8
// 00469acf  50                   push eax
// 00469ad0  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469ad6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoLine@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
