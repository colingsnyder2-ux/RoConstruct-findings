// roc 2010-06 0046db30  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046db30
//
// 0046db30  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046db35  741e                 je 0x46db55
// 0046db37  8b442408             mov eax, dword ptr [esp + 8]
// 0046db3b  8b542404             mov edx, dword ptr [esp + 4]
// 0046db3f  50                   push eax
// 0046db40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046db43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046db46  52                   push edx
// 0046db47  6807080000           push 0x807
// 0046db4c  50                   push eax
// 0046db4d  ffd1                 call ecx
// 0046db4f  83c410               add esp, 0x10
// 0046db52  c20c00               ret 0xc
// 0046db55  8b542408             mov edx, dword ptr [esp + 8]
// 0046db59  8b442404             mov eax, dword ptr [esp + 4]
// 0046db5d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046db60  52                   push edx
// 0046db61  50                   push eax
// 0046db62  6807080000           push 0x807
// 0046db67  51                   push ecx
// 0046db68  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046db6e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetSize@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
