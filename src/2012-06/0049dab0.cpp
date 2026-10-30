// roc 2012-06 0049dab0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049dab0
//
// 0049dab0  837c240800           cmp dword ptr [esp + 8], 0
// 0049dab5  6a00                 push 0
// 0049dab7  7419                 je 0x49dad2
// 0049dab9  8b442408             mov eax, dword ptr [esp + 8]
// 0049dabd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049dac0  50                   push eax
// 0049dac1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049dac4  68d8080000           push 0x8d8
// 0049dac9  52                   push edx
// 0049daca  ffd0                 call eax
// 0049dacc  83c410               add esp, 0x10
// 0049dacf  c20800               ret 8
// 0049dad2  8b542408             mov edx, dword ptr [esp + 8]
// 0049dad6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049dad9  52                   push edx
// 0049dada  68d8080000           push 0x8d8
// 0049dadf  50                   push eax
// 0049dae0  ff15043cb200         call dword ptr [0xb23c04]
// 0049dae6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMouseDwellTime@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
