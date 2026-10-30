// roc 2009-06 00461d90  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461d90
//
// 00461d90  837c240800           cmp dword ptr [esp + 8], 0
// 00461d95  6a00                 push 0
// 00461d97  7419                 je 0x461db2
// 00461d99  8b442408             mov eax, dword ptr [esp + 8]
// 00461d9d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461da0  50                   push eax
// 00461da1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461da4  68b7080000           push 0x8b7
// 00461da9  52                   push edx
// 00461daa  ffd0                 call eax
// 00461dac  83c410               add esp, 0x10
// 00461daf  c20800               ret 8
// 00461db2  8b542408             mov edx, dword ptr [esp + 8]
// 00461db6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461db9  52                   push edx
// 00461dba  68b7080000           push 0x8b7
// 00461dbf  50                   push eax
// 00461dc0  ff1590ee8900         call dword ptr [0x89ee90]
// 00461dc6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ToggleFold@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
