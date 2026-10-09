// roc 2010-06 0046d6c0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d6c0
//
// 0046d6c0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d6c5  741e                 je 0x46d6e5
// 0046d6c7  8b442408             mov eax, dword ptr [esp + 8]
// 0046d6cb  8b542404             mov edx, dword ptr [esp + 4]
// 0046d6cf  50                   push eax
// 0046d6d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d6d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d6d6  52                   push edx
// 0046d6d7  68fa070000           push 0x7fa
// 0046d6dc  50                   push eax
// 0046d6dd  ffd1                 call ecx
// 0046d6df  83c410               add esp, 0x10
// 0046d6e2  c20c00               ret 0xc
// 0046d6e5  8b542408             mov edx, dword ptr [esp + 8]
// 0046d6e9  8b442404             mov eax, dword ptr [esp + 4]
// 0046d6ed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d6f0  52                   push edx
// 0046d6f1  50                   push eax
// 0046d6f2  68fa070000           push 0x7fa
// 0046d6f7  51                   push ecx
// 0046d6f8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d6fe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
