// roc 2010-06 0046d670  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d670
//
// 0046d670  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d675  741e                 je 0x46d695
// 0046d677  8b442408             mov eax, dword ptr [esp + 8]
// 0046d67b  8b542404             mov edx, dword ptr [esp + 4]
// 0046d67f  50                   push eax
// 0046d680  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d683  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d686  52                   push edx
// 0046d687  68f9070000           push 0x7f9
// 0046d68c  50                   push eax
// 0046d68d  ffd1                 call ecx
// 0046d68f  83c410               add esp, 0x10
// 0046d692  c20c00               ret 0xc
// 0046d695  8b542408             mov edx, dword ptr [esp + 8]
// 0046d699  8b442404             mov eax, dword ptr [esp + 4]
// 0046d69d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d6a0  52                   push edx
// 0046d6a1  50                   push eax
// 0046d6a2  68f9070000           push 0x7f9
// 0046d6a7  51                   push ecx
// 0046d6a8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d6ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
