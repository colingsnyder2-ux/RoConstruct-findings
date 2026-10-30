// roc 2009-06 00461070  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461070
//
// 00461070  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461075  741e                 je 0x461095
// 00461077  8b442408             mov eax, dword ptr [esp + 8]
// 0046107b  8b542404             mov edx, dword ptr [esp + 4]
// 0046107f  50                   push eax
// 00461080  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461083  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461086  52                   push edx
// 00461087  68fb070000           push 0x7fb
// 0046108c  50                   push eax
// 0046108d  ffd1                 call ecx
// 0046108f  83c410               add esp, 0x10
// 00461092  c20c00               ret 0xc
// 00461095  8b542408             mov edx, dword ptr [esp + 8]
// 00461099  8b442404             mov eax, dword ptr [esp + 4]
// 0046109d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004610a0  52                   push edx
// 004610a1  50                   push eax
// 004610a2  68fb070000           push 0x7fb
// 004610a7  51                   push ecx
// 004610a8  ff1590ee8900         call dword ptr [0x89ee90]
// 004610ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerAdd@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
