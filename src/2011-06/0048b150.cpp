// roc 2011-06 0048b150  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b150
//
// 0048b150  56                   push esi
// 0048b151  8b742408             mov esi, dword ptr [esp + 8]
// 0048b155  57                   push edi
// 0048b156  8b3e                 mov edi, dword ptr [esi]
// 0048b158  6a01                 push 1
// 0048b15a  83c158               add ecx, 0x58
// 0048b15d  e8bef7ffff           call 0x48a920
// 0048b162  50                   push eax
// 0048b163  8b07                 mov eax, dword ptr [edi]
// 0048b165  8bce                 mov ecx, esi
// 0048b167  ffd0                 call eax
// 0048b169  5f                   pop edi
// 0048b16a  5e                   pop esi
// 0048b16b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
