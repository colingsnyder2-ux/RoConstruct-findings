// roc 2010-06 0046da90  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046da90
//
// 0046da90  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046da95  741e                 je 0x46dab5
// 0046da97  8b442408             mov eax, dword ptr [esp + 8]
// 0046da9b  8b542404             mov edx, dword ptr [esp + 4]
// 0046da9f  50                   push eax
// 0046daa0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046daa3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046daa6  52                   push edx
// 0046daa7  6804080000           push 0x804
// 0046daac  50                   push eax
// 0046daad  ffd1                 call ecx
// 0046daaf  83c410               add esp, 0x10
// 0046dab2  c20c00               ret 0xc
// 0046dab5  8b542408             mov edx, dword ptr [esp + 8]
// 0046dab9  8b442404             mov eax, dword ptr [esp + 4]
// 0046dabd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046dac0  52                   push edx
// 0046dac1  50                   push eax
// 0046dac2  6804080000           push 0x804
// 0046dac7  51                   push ecx
// 0046dac8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dace  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
