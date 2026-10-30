// roc 2010-06 0046ed30  unit: Scintilla::CScintillaView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ed30
//
// 0046ed30  8b442404             mov eax, dword ptr [esp + 4]
// 0046ed34  56                   push esi
// 0046ed35  8d7158               lea esi, [ecx + 0x58]
// 0046ed38  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0046ed3b  6a01                 push 1
// 0046ed3d  51                   push ecx
// 0046ed3e  8bce                 mov ecx, esi
// 0046ed40  e8dbf1ffff           call 0x46df20
// 0046ed45  6a01                 push 1
// 0046ed47  50                   push eax
// 0046ed48  8bce                 mov ecx, esi
// 0046ed4a  e8e1f6ffff           call 0x46e430
// 0046ed4f  5e                   pop esi
// 0046ed50  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnMarginClick@CScintillaView@@MAEXPAUSCNotification@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
