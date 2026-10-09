// roc 2009-06 00462680  unit: Scintilla::CScintillaView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462680
//
// 00462680  8b442404             mov eax, dword ptr [esp + 4]
// 00462684  56                   push esi
// 00462685  8d7158               lea esi, [ecx + 0x58]
// 00462688  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0046268b  6a01                 push 1
// 0046268d  51                   push ecx
// 0046268e  8bce                 mov ecx, esi
// 00462690  e8ebf1ffff           call 0x461880
// 00462695  6a01                 push 1
// 00462697  50                   push eax
// 00462698  8bce                 mov ecx, esi
// 0046269a  e8f1f6ffff           call 0x461d90
// 0046269f  5e                   pop esi
// 004626a0  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnMarginClick@CScintillaView@@MAEXPAUSCNotification@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
