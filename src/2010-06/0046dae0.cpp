// roc 2010-06 0046dae0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dae0
//
// 0046dae0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046dae5  741e                 je 0x46db05
// 0046dae7  8b442408             mov eax, dword ptr [esp + 8]
// 0046daeb  8b542404             mov edx, dword ptr [esp + 4]
// 0046daef  50                   push eax
// 0046daf0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046daf3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046daf6  52                   push edx
// 0046daf7  6805080000           push 0x805
// 0046dafc  50                   push eax
// 0046dafd  ffd1                 call ecx
// 0046daff  83c410               add esp, 0x10
// 0046db02  c20c00               ret 0xc
// 0046db05  8b542408             mov edx, dword ptr [esp + 8]
// 0046db09  8b442404             mov eax, dword ptr [esp + 4]
// 0046db0d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046db10  52                   push edx
// 0046db11  50                   push eax
// 0046db12  6805080000           push 0x805
// 0046db17  51                   push ecx
// 0046db18  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046db1e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBold@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
