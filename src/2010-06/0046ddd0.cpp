// roc 2010-06 0046ddd0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ddd0
//
// 0046ddd0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046ddd5  741e                 je 0x46ddf5
// 0046ddd7  8b442408             mov eax, dword ptr [esp + 8]
// 0046dddb  8b542404             mov edx, dword ptr [esp + 4]
// 0046dddf  50                   push eax
// 0046dde0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046dde3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046dde6  52                   push edx
// 0046dde7  6870080000           push 0x870
// 0046ddec  50                   push eax
// 0046dded  ffd1                 call ecx
// 0046ddef  83c410               add esp, 0x10
// 0046ddf2  c20c00               ret 0xc
// 0046ddf5  8b542408             mov edx, dword ptr [esp + 8]
// 0046ddf9  8b442404             mov eax, dword ptr [esp + 4]
// 0046ddfd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046de00  52                   push edx
// 0046de01  50                   push eax
// 0046de02  6870080000           push 0x870
// 0046de07  51                   push ecx
// 0046de08  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046de0e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSel@CScintillaCtrl@@QAEXJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
