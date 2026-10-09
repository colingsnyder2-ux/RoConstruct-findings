// roc 2009-12 0046b230  unit: Scintilla::CScintillaView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b230
//
// 0046b230  8b442404             mov eax, dword ptr [esp + 4]
// 0046b234  56                   push esi
// 0046b235  8d7158               lea esi, [ecx + 0x58]
// 0046b238  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0046b23b  6a01                 push 1
// 0046b23d  51                   push ecx
// 0046b23e  8bce                 mov ecx, esi
// 0046b240  e8dbf1ffff           call 0x46a420
// 0046b245  6a01                 push 1
// 0046b247  50                   push eax
// 0046b248  8bce                 mov ecx, esi
// 0046b24a  e8e1f6ffff           call 0x46a930
// 0046b24f  5e                   pop esi
// 0046b250  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnMarginClick@CScintillaView@@MAEXPAUSCNotification@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
