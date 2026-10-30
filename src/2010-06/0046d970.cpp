// roc 2010-06 0046d970  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d970
//
// 0046d970  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d975  741e                 je 0x46d995
// 0046d977  8b442408             mov eax, dword ptr [esp + 8]
// 0046d97b  8b542404             mov edx, dword ptr [esp + 4]
// 0046d97f  50                   push eax
// 0046d980  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d983  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d986  52                   push edx
// 0046d987  68c4080000           push 0x8c4
// 0046d98c  50                   push eax
// 0046d98d  ffd1                 call ecx
// 0046d98f  83c410               add esp, 0x10
// 0046d992  c20c00               ret 0xc
// 0046d995  8b542408             mov edx, dword ptr [esp + 8]
// 0046d999  8b442404             mov eax, dword ptr [esp + 4]
// 0046d99d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d9a0  52                   push edx
// 0046d9a1  50                   push eax
// 0046d9a2  68c4080000           push 0x8c4
// 0046d9a7  51                   push ecx
// 0046d9a8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d9ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginMaskN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
