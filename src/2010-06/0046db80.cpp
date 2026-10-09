// roc 2010-06 0046db80  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046db80
//
// 0046db80  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046db85  741e                 je 0x46dba5
// 0046db87  8b442408             mov eax, dword ptr [esp + 8]
// 0046db8b  8b542404             mov edx, dword ptr [esp + 4]
// 0046db8f  50                   push eax
// 0046db90  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046db93  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046db96  52                   push edx
// 0046db97  6808080000           push 0x808
// 0046db9c  50                   push eax
// 0046db9d  ffd1                 call ecx
// 0046db9f  83c410               add esp, 0x10
// 0046dba2  c20c00               ret 0xc
// 0046dba5  8b542408             mov edx, dword ptr [esp + 8]
// 0046dba9  8b442404             mov eax, dword ptr [esp + 4]
// 0046dbad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046dbb0  52                   push edx
// 0046dbb1  50                   push eax
// 0046dbb2  6808080000           push 0x808
// 0046dbb7  51                   push ecx
// 0046dbb8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dbbe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFont@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
