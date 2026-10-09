// roc 2009-12 00469fe0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469fe0
//
// 00469fe0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469fe5  741e                 je 0x46a005
// 00469fe7  8b442408             mov eax, dword ptr [esp + 8]
// 00469feb  8b542404             mov edx, dword ptr [esp + 4]
// 00469fef  50                   push eax
// 00469ff0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469ff3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469ff6  52                   push edx
// 00469ff7  6805080000           push 0x805
// 00469ffc  50                   push eax
// 00469ffd  ffd1                 call ecx
// 00469fff  83c410               add esp, 0x10
// 0046a002  c20c00               ret 0xc
// 0046a005  8b542408             mov edx, dword ptr [esp + 8]
// 0046a009  8b442404             mov eax, dword ptr [esp + 4]
// 0046a00d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a010  52                   push edx
// 0046a011  50                   push eax
// 0046a012  6805080000           push 0x805
// 0046a017  51                   push ecx
// 0046a018  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a01e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBold@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
