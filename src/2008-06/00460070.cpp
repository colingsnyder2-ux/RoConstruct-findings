// roc 2008-06 00460070  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460070
//
// 00460070  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460075  741e                 je 0x460095
// 00460077  8b442408             mov eax, dword ptr [esp + 8]
// 0046007b  8b542404             mov edx, dword ptr [esp + 4]
// 0046007f  50                   push eax
// 00460080  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460083  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460086  52                   push edx
// 00460087  68d1070000           push 0x7d1
// 0046008c  50                   push eax
// 0046008d  ffd1                 call ecx
// 0046008f  83c410               add esp, 0x10
// 00460092  c20c00               ret 0xc
// 00460095  8b542408             mov edx, dword ptr [esp + 8]
// 00460099  8b442404             mov eax, dword ptr [esp + 4]
// 0046009d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004600a0  52                   push edx
// 004600a1  50                   push eax
// 004600a2  68d1070000           push 0x7d1
// 004600a7  51                   push ecx
// 004600a8  ff15142e8000         call dword ptr [0x802e14]
// 004600ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AddText@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
