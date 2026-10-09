// roc 2012-06 0049d120  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d120
//
// 0049d120  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d125  741e                 je 0x49d145
// 0049d127  8b442408             mov eax, dword ptr [esp + 8]
// 0049d12b  8b542404             mov edx, dword ptr [esp + 4]
// 0049d12f  50                   push eax
// 0049d130  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d133  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d136  52                   push edx
// 0049d137  6805080000           push 0x805
// 0049d13c  50                   push eax
// 0049d13d  ffd1                 call ecx
// 0049d13f  83c410               add esp, 0x10
// 0049d142  c20c00               ret 0xc
// 0049d145  8b542408             mov edx, dword ptr [esp + 8]
// 0049d149  8b442404             mov eax, dword ptr [esp + 4]
// 0049d14d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d150  52                   push edx
// 0049d151  50                   push eax
// 0049d152  6805080000           push 0x805
// 0049d157  51                   push ecx
// 0049d158  ff15043cb200         call dword ptr [0xb23c04]
// 0049d15e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBold@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
