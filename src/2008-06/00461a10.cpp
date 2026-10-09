// roc 2008-06 00461a10  unit: Scintilla::CScintillaView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461a10
//
// 00461a10  8b442404             mov eax, dword ptr [esp + 4]
// 00461a14  56                   push esi
// 00461a15  8d7158               lea esi, [ecx + 0x58]
// 00461a18  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00461a1b  6a01                 push 1
// 00461a1d  51                   push ecx
// 00461a1e  8bce                 mov ecx, esi
// 00461a20  e8ebf1ffff           call 0x460c10
// 00461a25  6a01                 push 1
// 00461a27  50                   push eax
// 00461a28  8bce                 mov ecx, esi
// 00461a2a  e8f1f6ffff           call 0x461120
// 00461a2f  5e                   pop esi
// 00461a30  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnMarginClick@CScintillaView@@MAEXPAUSCNotification@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
