// roc 2009-12 00469ae0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469ae0
//
// 00469ae0  837c240800           cmp dword ptr [esp + 8], 0
// 00469ae5  6a00                 push 0
// 00469ae7  7419                 je 0x469b02
// 00469ae9  8b442408             mov eax, dword ptr [esp + 8]
// 00469aed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00469af0  50                   push eax
// 00469af1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00469af4  68e9070000           push 0x7e9
// 00469af9  52                   push edx
// 00469afa  ffd0                 call eax
// 00469afc  83c410               add esp, 0x10
// 00469aff  c20800               ret 8
// 00469b02  8b542408             mov edx, dword ptr [esp + 8]
// 00469b06  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00469b09  52                   push edx
// 00469b0a  68e9070000           push 0x7e9
// 00469b0f  50                   push eax
// 00469b10  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469b16  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoPos@CScintillaCtrl@@QAEXJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
