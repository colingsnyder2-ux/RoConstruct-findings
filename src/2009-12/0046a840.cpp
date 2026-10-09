// roc 2009-12 0046a840  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a840
//
// 0046a840  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046a845  741e                 je 0x46a865
// 0046a847  8b442408             mov eax, dword ptr [esp + 8]
// 0046a84b  8b542404             mov edx, dword ptr [esp + 4]
// 0046a84f  50                   push eax
// 0046a850  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a853  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a856  52                   push edx
// 0046a857  6898080000           push 0x898
// 0046a85c  50                   push eax
// 0046a85d  ffd1                 call ecx
// 0046a85f  83c410               add esp, 0x10
// 0046a862  c20c00               ret 0xc
// 0046a865  8b542408             mov edx, dword ptr [esp + 8]
// 0046a869  8b442404             mov eax, dword ptr [esp + 4]
// 0046a86d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046a870  52                   push edx
// 0046a871  50                   push eax
// 0046a872  6898080000           push 0x898
// 0046a877  51                   push ecx
// 0046a878  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a87e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipShow@CScintillaCtrl@@QAEXJPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
