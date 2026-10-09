// roc 2010-06 0046d620  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d620
//
// 0046d620  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d625  741e                 je 0x46d645
// 0046d627  8b442408             mov eax, dword ptr [esp + 8]
// 0046d62b  8b542404             mov edx, dword ptr [esp + 4]
// 0046d62f  50                   push eax
// 0046d630  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d633  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d636  52                   push edx
// 0046d637  68f8070000           push 0x7f8
// 0046d63c  50                   push eax
// 0046d63d  ffd1                 call ecx
// 0046d63f  83c410               add esp, 0x10
// 0046d642  c20c00               ret 0xc
// 0046d645  8b542408             mov edx, dword ptr [esp + 8]
// 0046d649  8b442404             mov eax, dword ptr [esp + 4]
// 0046d64d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d650  52                   push edx
// 0046d651  50                   push eax
// 0046d652  68f8070000           push 0x7f8
// 0046d657  51                   push ecx
// 0046d658  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d65e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDefine@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
