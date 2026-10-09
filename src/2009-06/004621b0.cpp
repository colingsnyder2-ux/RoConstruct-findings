// roc 2009-06 004621b0  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004621b0
//
// 004621b0  56                   push esi
// 004621b1  8b742408             mov esi, dword ptr [esp + 8]
// 004621b5  57                   push edi
// 004621b6  8b3e                 mov edi, dword ptr [esi]
// 004621b8  6a01                 push 1
// 004621ba  83c158               add ecx, 0x58
// 004621bd  e80eedffff           call 0x460ed0
// 004621c2  50                   push eax
// 004621c3  8b07                 mov eax, dword ptr [edi]
// 004621c5  8bce                 mov ecx, esi
// 004621c7  ffd0                 call eax
// 004621c9  5f                   pop edi
// 004621ca  5e                   pop esi
// 004621cb  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
