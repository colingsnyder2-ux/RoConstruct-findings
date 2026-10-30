// roc 2009-12 0046a080  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a080
//
// 0046a080  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046a085  741e                 je 0x46a0a5
// 0046a087  8b442408             mov eax, dword ptr [esp + 8]
// 0046a08b  8b542404             mov edx, dword ptr [esp + 4]
// 0046a08f  50                   push eax
// 0046a090  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a093  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a096  52                   push edx
// 0046a097  6808080000           push 0x808
// 0046a09c  50                   push eax
// 0046a09d  ffd1                 call ecx
// 0046a09f  83c410               add esp, 0x10
// 0046a0a2  c20c00               ret 0xc
// 0046a0a5  8b542408             mov edx, dword ptr [esp + 8]
// 0046a0a9  8b442404             mov eax, dword ptr [esp + 4]
// 0046a0ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a0b0  52                   push edx
// 0046a0b1  50                   push eax
// 0046a0b2  6808080000           push 0x808
// 0046a0b7  51                   push ecx
// 0046a0b8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a0be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFont@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
