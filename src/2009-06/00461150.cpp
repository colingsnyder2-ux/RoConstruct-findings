// roc 2009-06 00461150  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461150
//
// 00461150  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461155  741e                 je 0x461175
// 00461157  8b442408             mov eax, dword ptr [esp + 8]
// 0046115b  8b542404             mov edx, dword ptr [esp + 4]
// 0046115f  50                   push eax
// 00461160  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461163  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461166  52                   push edx
// 00461167  68ff070000           push 0x7ff
// 0046116c  50                   push eax
// 0046116d  ffd1                 call ecx
// 0046116f  83c410               add esp, 0x10
// 00461172  c20c00               ret 0xc
// 00461175  8b542408             mov edx, dword ptr [esp + 8]
// 00461179  8b442404             mov eax, dword ptr [esp + 4]
// 0046117d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461180  52                   push edx
// 00461181  50                   push eax
// 00461182  68ff070000           push 0x7ff
// 00461187  51                   push ecx
// 00461188  ff1590ee8900         call dword ptr [0x89ee90]
// 0046118e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerNext@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
