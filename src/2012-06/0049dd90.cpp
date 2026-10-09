// roc 2012-06 0049dd90  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049dd90
//
// 0049dd90  56                   push esi
// 0049dd91  8b742408             mov esi, dword ptr [esp + 8]
// 0049dd95  57                   push edi
// 0049dd96  8b3e                 mov edi, dword ptr [esi]
// 0049dd98  6a01                 push 1
// 0049dd9a  83c158               add ecx, 0x58
// 0049dd9d  e87ef8ffff           call 0x49d620
// 0049dda2  50                   push eax
// 0049dda3  8b07                 mov eax, dword ptr [edi]
// 0049dda5  8bce                 mov ecx, esi
// 0049dda7  ffd0                 call eax
// 0049dda9  5f                   pop edi
// 0049ddaa  5e                   pop esi
// 0049ddab  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
