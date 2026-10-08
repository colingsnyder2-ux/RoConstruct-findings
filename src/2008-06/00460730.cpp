// roc 2008-06 00460730  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460730
//
// 00460730  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460735  741e                 je 0x460755
// 00460737  8b442408             mov eax, dword ptr [esp + 8]
// 0046073b  8b542404             mov edx, dword ptr [esp + 4]
// 0046073f  50                   push eax
// 00460740  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460743  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460746  52                   push edx
// 00460747  6803080000           push 0x803
// 0046074c  50                   push eax
// 0046074d  ffd1                 call ecx
// 0046074f  83c410               add esp, 0x10
// 00460752  c20c00               ret 0xc
// 00460755  8b542408             mov edx, dword ptr [esp + 8]
// 00460759  8b442404             mov eax, dword ptr [esp + 4]
// 0046075d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460760  52                   push edx
// 00460761  50                   push eax
// 00460762  6803080000           push 0x803
// 00460767  51                   push ecx
// 00460768  ff15142e8000         call dword ptr [0x802e14]
// 0046076e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
