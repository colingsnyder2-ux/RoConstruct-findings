// roc 2010-06 0046d8e0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d8e0
//
// 0046d8e0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d8e5  741e                 je 0x46d905
// 0046d8e7  8b442408             mov eax, dword ptr [esp + 8]
// 0046d8eb  8b542404             mov edx, dword ptr [esp + 4]
// 0046d8ef  50                   push eax
// 0046d8f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d8f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d8f6  52                   push edx
// 0046d8f7  68c2080000           push 0x8c2
// 0046d8fc  50                   push eax
// 0046d8fd  ffd1                 call ecx
// 0046d8ff  83c410               add esp, 0x10
// 0046d902  c20c00               ret 0xc
// 0046d905  8b542408             mov edx, dword ptr [esp + 8]
// 0046d909  8b442404             mov eax, dword ptr [esp + 4]
// 0046d90d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d910  52                   push edx
// 0046d911  50                   push eax
// 0046d912  68c2080000           push 0x8c2
// 0046d917  51                   push ecx
// 0046d918  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d91e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginWidthN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
