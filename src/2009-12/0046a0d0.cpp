// roc 2009-12 0046a0d0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a0d0
//
// 0046a0d0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046a0d5  741e                 je 0x46a0f5
// 0046a0d7  8b442408             mov eax, dword ptr [esp + 8]
// 0046a0db  8b542404             mov edx, dword ptr [esp + 4]
// 0046a0df  50                   push eax
// 0046a0e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a0e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a0e6  52                   push edx
// 0046a0e7  6834080000           push 0x834
// 0046a0ec  50                   push eax
// 0046a0ed  ffd1                 call ecx
// 0046a0ef  83c410               add esp, 0x10
// 0046a0f2  c20c00               ret 0xc
// 0046a0f5  8b542408             mov edx, dword ptr [esp + 8]
// 0046a0f9  8b442404             mov eax, dword ptr [esp + 4]
// 0046a0fd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a100  52                   push edx
// 0046a101  50                   push eax
// 0046a102  6834080000           push 0x834
// 0046a107  51                   push ecx
// 0046a108  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a10e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCShow@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
