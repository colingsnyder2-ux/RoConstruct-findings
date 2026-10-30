// roc 2010-06 0046dd00  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dd00
//
// 0046dd00  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046dd05  741e                 je 0x46dd25
// 0046dd07  8b442408             mov eax, dword ptr [esp + 8]
// 0046dd0b  8b542404             mov edx, dword ptr [esp + 4]
// 0046dd0f  50                   push eax
// 0046dd10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046dd13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046dd16  52                   push edx
// 0046dd17  6866080000           push 0x866
// 0046dd1c  50                   push eax
// 0046dd1d  ffd1                 call ecx
// 0046dd1f  83c410               add esp, 0x10
// 0046dd22  c20c00               ret 0xc
// 0046dd25  8b542408             mov edx, dword ptr [esp + 8]
// 0046dd29  8b442404             mov eax, dword ptr [esp + 4]
// 0046dd2d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046dd30  52                   push edx
// 0046dd31  50                   push eax
// 0046dd32  6866080000           push 0x866
// 0046dd37  51                   push ecx
// 0046dd38  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046dd3e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FindTextA@CScintillaCtrl@@QAEJHPAUTextToFind@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
