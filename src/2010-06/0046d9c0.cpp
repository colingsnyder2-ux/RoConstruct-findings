// roc 2010-06 0046d9c0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d9c0
//
// 0046d9c0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d9c5  741e                 je 0x46d9e5
// 0046d9c7  8b442408             mov eax, dword ptr [esp + 8]
// 0046d9cb  8b542404             mov edx, dword ptr [esp + 4]
// 0046d9cf  50                   push eax
// 0046d9d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d9d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d9d6  52                   push edx
// 0046d9d7  68c6080000           push 0x8c6
// 0046d9dc  50                   push eax
// 0046d9dd  ffd1                 call ecx
// 0046d9df  83c410               add esp, 0x10
// 0046d9e2  c20c00               ret 0xc
// 0046d9e5  8b542408             mov edx, dword ptr [esp + 8]
// 0046d9e9  8b442404             mov eax, dword ptr [esp + 4]
// 0046d9ed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d9f0  52                   push edx
// 0046d9f1  50                   push eax
// 0046d9f2  68c6080000           push 0x8c6
// 0046d9f7  51                   push ecx
// 0046d9f8  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d9fe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginSensitiveN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
