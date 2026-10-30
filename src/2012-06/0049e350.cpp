// roc 2012-06 0049e350  unit: Scintilla::CScintillaView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e350
//
// 0049e350  8b442404             mov eax, dword ptr [esp + 4]
// 0049e354  56                   push esi
// 0049e355  8d7158               lea esi, [ecx + 0x58]
// 0049e358  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0049e35b  6a01                 push 1
// 0049e35d  51                   push ecx
// 0049e35e  8bce                 mov ecx, esi
// 0049e360  e8fbf1ffff           call 0x49d560
// 0049e365  6a01                 push 1
// 0049e367  50                   push eax
// 0049e368  8bce                 mov ecx, esi
// 0049e36a  e801f7ffff           call 0x49da70
// 0049e36f  5e                   pop esi
// 0049e370  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnMarginClick@CScintillaView@@MAEXPAUSCNotification@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
