// roc 2008-06 00461450  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461450
//
// 00461450  56                   push esi
// 00461451  8b742408             mov esi, dword ptr [esp + 8]
// 00461455  57                   push edi
// 00461456  8b3e                 mov edi, dword ptr [esi]
// 00461458  6a01                 push 1
// 0046145a  83c158               add ecx, 0x58
// 0046145d  e86ef8ffff           call 0x460cd0
// 00461462  50                   push eax
// 00461463  8b07                 mov eax, dword ptr [edi]
// 00461465  8bce                 mov ecx, esi
// 00461467  ffd0                 call eax
// 00461469  5f                   pop edi
// 0046146a  5e                   pop esi
// 0046146b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
