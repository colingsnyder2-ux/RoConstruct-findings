// roc 2011-06 0048b640  unit: Scintilla::CScintillaView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b640
//
// 0048b640  8b442404             mov eax, dword ptr [esp + 4]
// 0048b644  56                   push esi
// 0048b645  8d7158               lea esi, [ecx + 0x58]
// 0048b648  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0048b64b  6a01                 push 1
// 0048b64d  51                   push ecx
// 0048b64e  8bce                 mov ecx, esi
// 0048b650  e8dbf1ffff           call 0x48a830
// 0048b655  6a01                 push 1
// 0048b657  50                   push eax
// 0048b658  8bce                 mov ecx, esi
// 0048b65a  e8e1f6ffff           call 0x48ad40
// 0048b65f  5e                   pop esi
// 0048b660  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnMarginClick@CScintillaView@@MAEXPAUSCNotification@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
