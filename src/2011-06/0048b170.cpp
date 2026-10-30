// roc 2011-06 0048b170  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b170
//
// 0048b170  56                   push esi
// 0048b171  8b742408             mov esi, dword ptr [esp + 8]
// 0048b175  57                   push edi
// 0048b176  8b3e                 mov edi, dword ptr [esi]
// 0048b178  6a01                 push 1
// 0048b17a  83c158               add ecx, 0x58
// 0048b17d  e8beecffff           call 0x489e40
// 0048b182  50                   push eax
// 0048b183  8b07                 mov eax, dword ptr [edi]
// 0048b185  8bce                 mov ecx, esi
// 0048b187  ffd0                 call eax
// 0048b189  5f                   pop edi
// 0048b18a  5e                   pop esi
// 0048b18b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
