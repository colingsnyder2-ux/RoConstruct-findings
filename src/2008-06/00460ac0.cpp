// roc 2008-06 00460ac0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460ac0
//
// 00460ac0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460ac5  741e                 je 0x460ae5
// 00460ac7  8b442408             mov eax, dword ptr [esp + 8]
// 00460acb  8b542404             mov edx, dword ptr [esp + 4]
// 00460acf  50                   push eax
// 00460ad0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460ad3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460ad6  52                   push edx
// 00460ad7  6870080000           push 0x870
// 00460adc  50                   push eax
// 00460add  ffd1                 call ecx
// 00460adf  83c410               add esp, 0x10
// 00460ae2  c20c00               ret 0xc
// 00460ae5  8b542408             mov edx, dword ptr [esp + 8]
// 00460ae9  8b442404             mov eax, dword ptr [esp + 4]
// 00460aed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460af0  52                   push edx
// 00460af1  50                   push eax
// 00460af2  6870080000           push 0x870
// 00460af7  51                   push ecx
// 00460af8  ff15142e8000         call dword ptr [0x802e14]
// 00460afe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSel@CScintillaCtrl@@QAEXJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
