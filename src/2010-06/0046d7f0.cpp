// roc 2010-06 0046d7f0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d7f0
//
// 0046d7f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d7f5  741e                 je 0x46d815
// 0046d7f7  8b442408             mov eax, dword ptr [esp + 8]
// 0046d7fb  8b542404             mov edx, dword ptr [esp + 4]
// 0046d7ff  50                   push eax
// 0046d800  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d803  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d806  52                   push edx
// 0046d807  68ff070000           push 0x7ff
// 0046d80c  50                   push eax
// 0046d80d  ffd1                 call ecx
// 0046d80f  83c410               add esp, 0x10
// 0046d812  c20c00               ret 0xc
// 0046d815  8b542408             mov edx, dword ptr [esp + 8]
// 0046d819  8b442404             mov eax, dword ptr [esp + 4]
// 0046d81d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d820  52                   push edx
// 0046d821  50                   push eax
// 0046d822  68ff070000           push 0x7ff
// 0046d827  51                   push ecx
// 0046d828  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d82e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerNext@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
