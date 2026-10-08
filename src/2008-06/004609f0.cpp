// roc 2008-06 004609f0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004609f0
//
// 004609f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004609f5  741e                 je 0x460a15
// 004609f7  8b442408             mov eax, dword ptr [esp + 8]
// 004609fb  8b542404             mov edx, dword ptr [esp + 4]
// 004609ff  50                   push eax
// 00460a00  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460a03  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460a06  52                   push edx
// 00460a07  6866080000           push 0x866
// 00460a0c  50                   push eax
// 00460a0d  ffd1                 call ecx
// 00460a0f  83c410               add esp, 0x10
// 00460a12  c20c00               ret 0xc
// 00460a15  8b542408             mov edx, dword ptr [esp + 8]
// 00460a19  8b442404             mov eax, dword ptr [esp + 4]
// 00460a1d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460a20  52                   push edx
// 00460a21  50                   push eax
// 00460a22  6866080000           push 0x866
// 00460a27  51                   push ecx
// 00460a28  ff15142e8000         call dword ptr [0x802e14]
// 00460a2e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FindTextA@CScintillaCtrl@@QAEJHPAUTextToFind@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
