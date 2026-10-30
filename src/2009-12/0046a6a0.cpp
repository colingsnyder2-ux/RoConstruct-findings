// roc 2009-12 0046a6a0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a6a0
//
// 0046a6a0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046a6a5  741e                 je 0x46a6c5
// 0046a6a7  8b442408             mov eax, dword ptr [esp + 8]
// 0046a6ab  8b542404             mov edx, dword ptr [esp + 4]
// 0046a6af  50                   push eax
// 0046a6b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a6b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a6b6  52                   push edx
// 0046a6b7  6886080000           push 0x886
// 0046a6bc  50                   push eax
// 0046a6bd  ffd1                 call ecx
// 0046a6bf  83c410               add esp, 0x10
// 0046a6c2  c20c00               ret 0xc
// 0046a6c5  8b542408             mov edx, dword ptr [esp + 8]
// 0046a6c9  8b442404             mov eax, dword ptr [esp + 4]
// 0046a6cd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a6d0  52                   push edx
// 0046a6d1  50                   push eax
// 0046a6d2  6886080000           push 0x886
// 0046a6d7  51                   push ecx
// 0046a6d8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a6de  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetText@CScintillaCtrl@@QAEHHPADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
