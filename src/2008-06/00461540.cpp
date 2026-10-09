// roc 2008-06 00461540  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461540
//
// 00461540  56                   push esi
// 00461541  8b742408             mov esi, dword ptr [esp + 8]
// 00461545  57                   push edi
// 00461546  8b3e                 mov edi, dword ptr [esi]
// 00461548  6a01                 push 1
// 0046154a  83c158               add ecx, 0x58
// 0046154d  e80eedffff           call 0x460260
// 00461552  50                   push eax
// 00461553  8b07                 mov eax, dword ptr [edi]
// 00461555  8bce                 mov ecx, esi
// 00461557  ffd0                 call eax
// 00461559  5f                   pop edi
// 0046155a  5e                   pop esi
// 0046155b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
