// roc 2012-06 0049de80  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049de80
//
// 0049de80  56                   push esi
// 0049de81  8b742408             mov esi, dword ptr [esp + 8]
// 0049de85  57                   push edi
// 0049de86  8b3e                 mov edi, dword ptr [esi]
// 0049de88  6a01                 push 1
// 0049de8a  83c158               add ecx, 0x58
// 0049de8d  e8deecffff           call 0x49cb70
// 0049de92  50                   push eax
// 0049de93  8b07                 mov eax, dword ptr [edi]
// 0049de95  8bce                 mov ecx, esi
// 0049de97  ffd0                 call eax
// 0049de99  5f                   pop edi
// 0049de9a  5e                   pop esi
// 0049de9b  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnUpdateNeedPaste@CScintillaView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
