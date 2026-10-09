// roc 2010-06 0046d710  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d710
//
// 0046d710  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d715  741e                 je 0x46d735
// 0046d717  8b442408             mov eax, dword ptr [esp + 8]
// 0046d71b  8b542404             mov edx, dword ptr [esp + 4]
// 0046d71f  50                   push eax
// 0046d720  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d723  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d726  52                   push edx
// 0046d727  68fb070000           push 0x7fb
// 0046d72c  50                   push eax
// 0046d72d  ffd1                 call ecx
// 0046d72f  83c410               add esp, 0x10
// 0046d732  c20c00               ret 0xc
// 0046d735  8b542408             mov edx, dword ptr [esp + 8]
// 0046d739  8b442404             mov eax, dword ptr [esp + 4]
// 0046d73d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d740  52                   push edx
// 0046d741  50                   push eax
// 0046d742  68fb070000           push 0x7fb
// 0046d747  51                   push ecx
// 0046d748  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d74e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerAdd@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
