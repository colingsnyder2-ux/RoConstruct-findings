// roc 2008-06 00461470  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461470
//
// 00461470  56                   push esi
// 00461471  8b742408             mov esi, dword ptr [esp + 8]
// 00461475  57                   push edi
// 00461476  8b3e                 mov edi, dword ptr [esi]
// 00461478  6a01                 push 1
// 0046147a  83c158               add ecx, 0x58
// 0046147d  e85efaffff           call 0x460ee0
// 00461482  f7d8                 neg eax
// 00461484  1bc0                 sbb eax, eax
// 00461486  f7d8                 neg eax
// 00461488  50                   push eax
// 00461489  8b07                 mov eax, dword ptr [edi]
// 0046148b  8bce                 mov ecx, esi
// 0046148d  ffd0                 call eax
// 0046148f  5f                   pop edi
// 00461490  5e                   pop esi
// 00461491  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedText@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
