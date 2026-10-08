// roc 2008-06 00460820  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460820
//
// 00460820  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460825  741e                 je 0x460845
// 00460827  8b442408             mov eax, dword ptr [esp + 8]
// 0046082b  8b542404             mov edx, dword ptr [esp + 4]
// 0046082f  50                   push eax
// 00460830  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460833  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460836  52                   push edx
// 00460837  6807080000           push 0x807
// 0046083c  50                   push eax
// 0046083d  ffd1                 call ecx
// 0046083f  83c410               add esp, 0x10
// 00460842  c20c00               ret 0xc
// 00460845  8b542408             mov edx, dword ptr [esp + 8]
// 00460849  8b442404             mov eax, dword ptr [esp + 4]
// 0046084d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460850  52                   push edx
// 00460851  50                   push eax
// 00460852  6807080000           push 0x807
// 00460857  51                   push ecx
// 00460858  ff15142e8000         call dword ptr [0x802e14]
// 0046085e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetSize@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
