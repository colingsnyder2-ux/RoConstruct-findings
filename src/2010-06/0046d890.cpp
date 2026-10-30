// roc 2010-06 0046d890  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d890
//
// 0046d890  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d895  741e                 je 0x46d8b5
// 0046d897  8b442408             mov eax, dword ptr [esp + 8]
// 0046d89b  8b542404             mov edx, dword ptr [esp + 4]
// 0046d89f  50                   push eax
// 0046d8a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d8a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d8a6  52                   push edx
// 0046d8a7  68c0080000           push 0x8c0
// 0046d8ac  50                   push eax
// 0046d8ad  ffd1                 call ecx
// 0046d8af  83c410               add esp, 0x10
// 0046d8b2  c20c00               ret 0xc
// 0046d8b5  8b542408             mov edx, dword ptr [esp + 8]
// 0046d8b9  8b442404             mov eax, dword ptr [esp + 4]
// 0046d8bd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d8c0  52                   push edx
// 0046d8c1  50                   push eax
// 0046d8c2  68c0080000           push 0x8c0
// 0046d8c7  51                   push ecx
// 0046d8c8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d8ce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginTypeN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
